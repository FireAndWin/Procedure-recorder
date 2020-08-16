#include "down_toolbar.h"
#include "ui_down_toolbar.h"

Down_ToolBar::Down_ToolBar(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Down_ToolBar)
{
    ui->setupUi(this);
}

Down_ToolBar::~Down_ToolBar()
{
    delete ui;
}
