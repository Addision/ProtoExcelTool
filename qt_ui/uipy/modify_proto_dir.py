# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '../ui/modify_proto_dir.ui'
#
# Created by: PyQt5 UI code generator 5.15.6
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_ModifyDirForm(object):
    def setupUi(self, ModifyDirForm):
        ModifyDirForm.setObjectName("ModifyDirForm")
        ModifyDirForm.resize(352, 78)
        self.label = QtWidgets.QLabel(ModifyDirForm)
        self.label.setGeometry(QtCore.QRect(20, 20, 71, 16))
        self.label.setObjectName("label")
        self.bTnModifyDir = QtWidgets.QPushButton(ModifyDirForm)
        self.bTnModifyDir.setGeometry(QtCore.QRect(140, 50, 75, 23))
        self.bTnModifyDir.setObjectName("bTnModifyDir")
        self.lEtProtoDirName = QtWidgets.QLineEdit(ModifyDirForm)
        self.lEtProtoDirName.setGeometry(QtCore.QRect(90, 20, 241, 20))
        self.lEtProtoDirName.setObjectName("lEtProtoDirName")

        self.retranslateUi(ModifyDirForm)
        QtCore.QMetaObject.connectSlotsByName(ModifyDirForm)

    def retranslateUi(self, ModifyDirForm):
        _translate = QtCore.QCoreApplication.translate
        ModifyDirForm.setWindowTitle(_translate("ModifyDirForm", "修改目录"))
        self.label.setText(_translate("ModifyDirForm", "目录名称："))
        self.bTnModifyDir.setText(_translate("ModifyDirForm", "修改"))
