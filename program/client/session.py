#!/usr/bin/env python
# -*- encoding: utf-8 -*-
'''
@File    :   session.py
@Time    :   2022/03/08 21:58:12
@Author  :   felix 
@Version :   1.0
@Contact :   laijia2008@126.com
@License :   (C)Copyright 2021-2025, felix&lai
@Desc    :   用于协议测试连接会话
'''

# here put the import lib
import selectors
import socket
import queue
import threading
from client.data_pack import *

class Session(object):
    def __init__(self, parent=None):
        self.dataPack = DataPack()

        self.sock = None
        self.recv_data = None
        self.queue = queue.Queue(maxsize=1000)

        self.reactor = selectors.DefaultSelector()
        self.recvThrd = threading.Thread(target=self.startRecv)
        pass
    
    def conn_server(self, ip, port):
        try:
            self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            self.sock.connect((ip, port))
            self.sock.setblocking(True) 

            self.reactor.register(self.sock, selectors.EVENT_READ, self.readData)
            if not self.recvThrd.is_alive():
                self.recvThrd.start()      
            return True   
        except socket.error as e:
            print("connect server error:", e)
        return False
    
    def readData(self, fileobj, mask):
        try:
            recv_data = fileobj.recv(4*1024)
            if fileobj != self.sock:
                return
            if self.recv_data is None:
                self.recv_data = recv_data
            else:
                self.recv_data = self.recv_data + recv_data
            while True:
                if not self.recv_data:
                    break
                if len(self.recv_data) < 8:  # msg_len+msg_id = 8
                    break
                msg_len = self.dataPack.dataLen(self.recv_data)
                if len(self.recv_data) < msg_len:
                    break
                msg_id, msg_content = self.dataPack.dataUnpack2(self.recv_data)
                # 将获取的返回消息放到队列里用于界面显示
                self.queue.put((msg_id, msg_content))
                self.recv_data = self.recv_data[msg_len:]
                pass

        except Exception as e:
            print(e)
    
    def writeData(self, data):
        try:
            ret = self.sock.send(data)
            if ret <= 0:
                return False
            return True
        except Exception as e:
            print(e)
        return False
        pass
    
    def close(self):
        self.reactor.unregister(self.sock)
        self.sock.close()
        self.recv_data = None
        
    def startRecv(self):
        try:
            while True:
                events = self.reactor.select()
                for key, mask in events:
                    callback = key.data
                    callback(key.fileobj, mask)

        except Exception as e:
            print(e)
        
    