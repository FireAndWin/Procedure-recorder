#include "display_panel.h"
#include "ui_display_panel.h"

Display_Panel::Display_Panel(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Display_Panel)
{
    ui->setupUi(this);
}

Display_Panel::~Display_Panel()
{
    delete ui;
}
