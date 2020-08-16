#ifndef UP_DISPLAY_H
#define UP_DISPLAY_H

#include <QFrame>

namespace Ui {
class Up_Display;
}

class Up_Display : public QFrame
{
    Q_OBJECT

public:
    explicit Up_Display(QWidget *parent = 0);
    ~Up_Display();

private:
    Ui::Up_Display *ui;
};

#endif // UP_DISPLAY_H
