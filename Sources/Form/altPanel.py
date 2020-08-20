import  sys
from PyQt5.QtWidgets import QApplication,QWidget,QFrame
from PyQt5.QtCore import pyqtSlot,pyqtSignal,Qt

from ui_Alt_Panel import  Ui_Alt_Panel


class Alt_Panel(QFrame):
    def __init__(self,parent=None):
        super().__init__(parent)    #调用父类构造函数
        self.ui=Ui_Alt_Panel()         #创建ui对象
        self.ui.setupUi(self)       #构造ui对象

        #设置窗口背景透明
        self.setWindowFlags(Qt.FramelessWindowHint)
        self.setAttribute(Qt.WA_TranslucentBackground)

#1# ==========自定义功能函数=========================================


#2# ==========事件处理函数===========================================

#3# ==========由 connectSloteByName()自动关联的槽函数=================

#4# ===========自定义槽函数==========================================

#5# =============窗体测试程序=========================================
if __name__=="__main__":
    app=QApplication(sys.argv)
    a=Alt_Panel()
    a.show()
    sys.exit(app.exec_())