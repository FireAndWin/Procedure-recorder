#ifndef MAIN_FRAME_H
#define MAIN_FRAME_H

#include <QFrame>

namespace Ui {
class Main_Frame;
}

class Main_Frame : public QFrame
{
    Q_OBJECT

public:
    explicit Main_Frame(QWidget *parent = 0);
    ~Main_Frame();

private:
    Ui::Main_Frame *ui;
};

#endif // MAIN_FRAME_H
