import  sys
from PyQt5.QtWidgets import QApplication,QWidget,QFrame,QHBoxLayout
from PyQt5.QtCore import pyqtSlot,pyqtSignal,Qt

from ui_MainFrame import  Ui_Main_Frame

from upDisplay import UpDispaly
from rightToolBar import Right_ToolBar
from downToolBar import Down_ToolBar
from dispalyPanel import Display_Panel
from altPanel import Alt_Panel

class MainFrame( QWidget):
    def __init__(self,parent=None):
        super().__init__(parent)
        self.ui=Ui_Main_Frame()
        self.ui.setupUi(self)

        #========设置窗口背景透明及置顶=================
        self.setWindowFlags(Qt.FramelessWindowHint | Qt.Tool|Qt.WindowStaysOnTopHint)
        self.setAttribute(Qt.WA_TranslucentBackground)

        #=========子控件设置======================
        self.upDisplay=UpDispaly() #95,8
        self.upDisplay.hide()
        self.rightToolBar=Right_ToolBar()
        self.rightToolBar.hide() #440,82
        self.downToolBar=Down_ToolBar()
        self.downToolBar.hide()#93,317
        #显示面板相关
        self.displayPanel=Display_Panel(self)
        self.displayPanel.hide()
        #选择面板相关
        self.altPanel=Alt_Panel(self)
        #中心布局设置
        self.central_layout=QHBoxLayout(self.ui.wgt_centralWidget)
        self.central_layout.setContentsMargins(0,0,0,0)
        self.central_layout.addWidget(self.altPanel)
        self.central_layout.addWidget(self.displayPanel)

        #=========关联信号和槽函数=====================
        #右侧显示工具栏相关
        self.rightToolBar.ui.btn_right_close.clicked.connect(self.do_close)
        self.rightToolBar.ui.btn_right_hide.clicked.connect(self.do_minimize)
        self.rightToolBar.ui.btn_right_relocate.clicked.connect(self.do_relocate)
        #显示页面,选择页面的互相切换
        self.displayPanel.ui.btn_next.clicked.connect(self.do_initAltPanel)
        self.altPanel.ui.btn_alt_begin.clicked.connect(self.do_initDispalyPanel)

        #========窗口拖拽相关
        self.bool_darg=False
        self.point_mouseStart=None
        self.point_windowTopLeft=None

        #self.do_initAltPanel()

#1# ==========自定义功能函数=========================================


#2# ==========事件处理函数===========================================
    def mousePressEvent(self,event):
        if event.button()==Qt.LeftButton:
            self.bool_darg=True
            self.point_mouseStart=event.globalPos()
            self.point_windowTopLeft=self.frameGeometry().topLeft()

            self.upDisplay.mousePressEvent(event)
            self.rightToolBar.mousePressEvent(event)
            self.downToolBar.mousePressEvent(event)

    def mouseMoveEvent(self,event):
        if self.bool_darg:
            point_distance=event.globalPos()-self.point_mouseStart
            self.move(self.point_windowTopLeft+point_distance)

            self.upDisplay.mouseMoveEvent(event)
            self.rightToolBar.mouseMoveEvent(event)
            self.downToolBar.mouseMoveEvent(event)
    def mouseReleaseEvent(self,event):
        if event.button==Qt.LeftButton:
            self.bool_darg=False

#3# ==========由 connectSloteByName()自动关联的槽函数=================
    @pyqtSlot(bool)
    def on_btn_upperItems_clicked(self,bool_checked):
        if self.upDisplay.isHidden():
            self.upDisplay.appear(self.pos().x(),self.pos().y())
        else:
            self.upDisplay.fade()

    @pyqtSlot(bool)
    def on_btn_displayTools_clicked(self,bool_checked):
        if self.rightToolBar.isHidden():
            self.rightToolBar.appear(self.pos().x(),self.pos().y())
        else:
            self.rightToolBar.fade()

    @pyqtSlot(bool)
    def on_btn_functionTools_2_clicked(self, bool_checked):
        if self.downToolBar.isHidden():
            self.downToolBar.appear(self.pos().x(), self.pos().y())
        else:
            self.downToolBar.fade()

#4# ===========自定义槽函数==========================================

    def do_minimize(self):
        pass
    def do_close(self):
        pass
    def do_relocate(self):
        pass
    def do_initDispalyPanel(self):
        self.displayPanel.show()
        self.altPanel.hide()

    def do_initAltPanel(self):
        self.altPanel.show()
        self.displayPanel.hide()

#5# =============窗体测试程序=========================================

if __name__=="__main__":
    app=QApplication(sys.argv)
    a=MainFrame()
    a.show()
    sys.exit(app.exec_())