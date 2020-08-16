#ifndef DOWN_TOOLBAR_H
#define DOWN_TOOLBAR_H

#include <QFrame>

namespace Ui {
class Down_ToolBar;
}

class Down_ToolBar : public QFrame
{
    Q_OBJECT

public:
    explicit Down_ToolBar(QWidget *parent = 0);
    ~Down_ToolBar();

private:
    Ui::Down_ToolBar *ui;
};

#endif // DOWN_TOOLBAR_H
