#ifndef DISPLAY_PANEL_H
#define DISPLAY_PANEL_H

#include <QFrame>

namespace Ui {
class Display_Panel;
}

class Display_Panel : public QFrame
{
    Q_OBJECT

public:
    explicit Display_Panel(QWidget *parent = 0);
    ~Display_Panel();

private:
    Ui::Display_Panel *ui;
};

#endif // DISPLAY_PANEL_H
