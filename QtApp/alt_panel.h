#ifndef ALT_PANEL_H
#define ALT_PANEL_H

#include <QFrame>

namespace Ui {
class Alt_Panel;
}

class Alt_Panel : public QFrame
{
    Q_OBJECT

public:
    explicit Alt_Panel(QWidget *parent = 0);
    ~Alt_Panel();

private:
    Ui::Alt_Panel *ui;
};

#endif // ALT_PANEL_H
