#include "up_display.h"
#include "ui_up_display.h"

Up_Display::Up_Display(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Up_Display)
{
    ui->setupUi(this);
}

Up_Display::~Up_Display()
{
    delete ui;
}
