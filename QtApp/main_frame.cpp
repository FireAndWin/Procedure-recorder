#include "main_frame.h"
#include "ui_main_frame.h"
#include"display_panel.h"
#include "alt_panel.h"
#include "down_toolbar.h"
#include "right_toolbar.h"
#include "up_display.h"

Main_Frame::Main_Frame(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Main_Frame)
{
    ui->setupUi(this);
    //    ui->setupUi(this);
        Display_Panel * panel=new Display_Panel();
        panel->show();

//        Alt_Panel * panel_2=new Alt_Panel(this);
//        panel_2->show();

//        Down_ToolBar *bar=new Down_ToolBar();
//        bar->show();

//        Right_ToolBar *bar_2=new Right_ToolBar();
//        bar_2->show();

        Up_Display *bar_3=new Up_Display();
        bar_3->show();
}

Main_Frame::~Main_Frame()
{
    delete ui;
}

void Main_Frame::on_btn_displayTools_clicked()
{

}
