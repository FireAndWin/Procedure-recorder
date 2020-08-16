#include "right_toolbar.h"
#include "ui_right_toolbar.h"

Right_ToolBar::Right_ToolBar(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Right_ToolBar)
{
    ui->setupUi(this);
}

Right_ToolBar::~Right_ToolBar()
{
    delete ui;
}
