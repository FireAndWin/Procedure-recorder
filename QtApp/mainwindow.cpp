#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"display_panel.h"
#include "alt_panel.h"
#include "down_toolbar.h"
#include "right_toolbar.h"
#include "up_display.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
//    ui->setupUi(this);
//    Display_Panel * panel=new Display_Panel(this);
//    panel->show();

//    Alt_Panel * panel_2=new Alt_Panel(this);
//    panel_2->show();

    Down_ToolBar *bar=new Down_ToolBar();
    bar->show();

//    Right_ToolBar *bar_2=new Right_ToolBar(this);
//    bar_2->show();

//    Up_Display *bar_3=new Up_Display(this);
//    bar_3->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}
