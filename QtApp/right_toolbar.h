#ifndef RIGHT_TOOLBAR_H
#define RIGHT_TOOLBAR_H

#include <QFrame>

namespace Ui {
class Right_ToolBar;
}

class Right_ToolBar : public QFrame
{
    Q_OBJECT

public:
    explicit Right_ToolBar(QWidget *parent = 0);
    ~Right_ToolBar();

private:
    Ui::Right_ToolBar *ui;
};

#endif // RIGHT_TOOLBAR_H
