# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'g:\达瓦未来\ProtocolAndExcelTool\qt_ui\ui\setting.ui'
#
# Created by: PyQt5 UI code generator 5.9.2
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_SettingForm(object):
    def setupUi(self, SettingForm):
        SettingForm.setObjectName("SettingForm")
        SettingForm.resize(509, 407)
        self.tabWidget = QtWidgets.QTabWidget(SettingForm)
        self.tabWidget.setGeometry(QtCore.QRect(10, 10, 491, 391))
        self.tabWidget.setObjectName("tabWidget")
        self.tab = QtWidgets.QWidget()
        self.tab.setObjectName("tab")
        self.pushButton = QtWidgets.QPushButton(self.tab)
        self.pushButton.setGeometry(QtCore.QRect(10, 10, 75, 23))
        self.pushButton.setObjectName("pushButton")
        self.listView = QtWidgets.QListView(self.tab)
        self.listView.setGeometry(QtCore.QRect(10, 40, 471, 321))
        self.listView.setObjectName("listView")
        self.tabWidget.addTab(self.tab, "")
        self.tab_2 = QtWidgets.QWidget()
        self.tab_2.setObjectName("tab_2")
        self.pushButton_2 = QtWidgets.QPushButton(self.tab_2)
        self.pushButton_2.setGeometry(QtCore.QRect(10, 10, 75, 23))
        self.pushButton_2.setObjectName("pushButton_2")
        self.listView_2 = QtWidgets.QListView(self.tab_2)
        self.listView_2.setGeometry(QtCore.QRect(10, 40, 471, 321))
        self.listView_2.setObjectName("listView_2")
        self.tabWidget.addTab(self.tab_2, "")
        self.tab_3 = QtWidgets.QWidget()
        self.tab_3.setObjectName("tab_3")
        self.pushButton_3 = QtWidgets.QPushButton(self.tab_3)
        self.pushButton_3.setGeometry(QtCore.QRect(10, 10, 75, 23))
        self.pushButton_3.setObjectName("pushButton_3")
        self.listView_3 = QtWidgets.QListView(self.tab_3)
        self.listView_3.setGeometry(QtCore.QRect(10, 40, 471, 321))
        self.listView_3.setObjectName("listView_3")
        self.tabWidget.addTab(self.tab_3, "")

        self.retranslateUi(SettingForm)
        self.tabWidget.setCurrentIndex(2)
        QtCore.QMetaObject.connectSlotsByName(SettingForm)

    def retranslateUi(self, SettingForm):
        _translate = QtCore.QCoreApplication.translate
        SettingForm.setWindowTitle(_translate("SettingForm", "设置"))
        self.pushButton.setText(_translate("SettingForm", "添加模板"))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab), _translate("SettingForm", "协议管理器"))
        self.pushButton_2.setText(_translate("SettingForm", "添加模板"))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab_2), _translate("SettingForm", "枚举管理器"))
        self.pushButton_3.setText(_translate("SettingForm", "添加模板"))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab_3), _translate("SettingForm", "配置表管理器"))

