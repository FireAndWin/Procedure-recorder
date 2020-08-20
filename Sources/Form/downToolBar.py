import  sys
from PyQt5.QtWidgets import QApplication,QWidget,QFrame
from PyQt5.QtCore import pyqtSlot,pyqtSignal,Qt,QPropertyAnimation,QPoint,QEasingCurve,QTimer

from ui_Down_ToolBar import  Ui_Down_ToolBar


class Down_ToolBar( QFrame):
    def __init__(self,parent=None):
        super().__init__(parent)    #调用父类构造函数
        self.ui=Ui_Down_ToolBar()         #创建ui对象
        self.ui.setupUi(self)       #构造ui对象

        #设置窗口背景透明
        self.setWindowFlags(Qt.FramelessWindowHint)
        self.setAttribute(Qt.WA_TranslucentBackground)

        #和动画配合使用的计时器
        self.timer=QTimer()
        self.timer.setInterval(555)
        self.timer.timeout.connect(self.animation_over)
        self.bool_hidden=False #辅助判断是否需要隐藏窗体的变量

        #========窗口拖拽相关
        self.bool_darg=False
        self.point_mouseStart=None
        self.point_windowTopLeft=None


#1# ==========自定义功能函数=========================================
    # 出现动画
    def appear(self,int_x,int_y):
        #动画实现
        animation=QPropertyAnimation(self)
        animation.setTargetObject(self)
        animation.setPropertyName(b"pos")
        animation.setStartValue(QPoint(int_x+93,int_y+317-self.geometry().height()))
        animation.setEndValue(QPoint(int_x+95,int_y+317))
        animation.setDuration(550)
        animation.setEasingCurve(QEasingCurve.OutBounce)
        animation.start()
        #准备结束处理
        self.timer.start()
        self.bool_hidden=False
        #设置优先显示
        self.setWindowFlags(Qt.FramelessWindowHint | Qt.Tool)
        self.show()


    #消失动画
    def fade(self):
        #动画实现
        animation=QPropertyAnimation(self)
        animation.setTargetObject(self)
        animation.setPropertyName(b"pos")
        animation.setStartValue(QPoint(self.pos().x(),self.pos().y()))
        animation.setEndValue(QPoint(self.pos().x(),self.pos().y()-self.geometry().height()))
        animation.setDuration(550)
        animation.setEasingCurve(QEasingCurve.OutBounce)
        animation.start()
        #准备后事
        self.timer.start()
        self.bool_hidden=True
        #设置优先显示
        self.setWindowFlags(Qt.FramelessWindowHint | Qt.Tool)
        self.show()


    #动画结束后的处理
    def animation_over(self):
        self.timer.stop()
        if self.bool_hidden:
            self.hide()
        else:
            self.setWindowFlags(Qt.FramelessWindowHint | Qt.Tool | Qt.WindowStaysOnTopHint)
            self.show()

    #移动函数,和父控件一起移动
    def move_distance(self,int_x,int_y):
        self.move(self.pos().x()+int_x,self.pos().y()+int_y)


#2# ==========事件处理函数===========================================
    def mousePressEvent(self,event):
        if event.button()==Qt.LeftButton:
            self.bool_darg=True
            self.point_mouseStart=event.globalPos()
            self.point_windowTopLeft=self.frameGeometry().topLeft()
    def mouseMoveEvent(self,event):
        if self.bool_darg:
            point_distance=event.globalPos()-self.point_mouseStart
            self.move(self.point_windowTopLeft+point_distance)

    def mouseReleaseEvent(self,event):
        if event.button==Qt.LeftButton:
            self.bool_darg=False
#3# ==========由 connectSloteByName()自动关联的槽函数=================

#4# ===========自定义槽函数==========================================

#5# =============窗体测试程序=========================================
if __name__=="__main__":
    app=QApplication(sys.argv)
    a=Down_ToolBar()
    a.show()
    sys.exit(app.exec_())