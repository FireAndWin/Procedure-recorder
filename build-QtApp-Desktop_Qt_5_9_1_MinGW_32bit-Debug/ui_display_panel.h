/********************************************************************************
** Form generated from reading UI file 'display_panel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAY_PANEL_H
#define UI_DISPLAY_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_Display_Panel
{
public:
    QHBoxLayout *horizontalLayout_4;
    QFrame *gridFrame;
    QGridLayout *gridLayout;
    QToolButton *btn_next;
    QToolButton *btn_clear;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLCDNumber *lcd_day;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLCDNumber *lcd_minute;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLCDNumber *lcd_hour;
    QLineEdit *lnd_name;
    QCheckBox *chb_beginStop;

    void setupUi(QFrame *Display_Panel)
    {
        if (Display_Panel->objectName().isEmpty())
            Display_Panel->setObjectName(QStringLiteral("Display_Panel"));
        Display_Panel->resize(360, 240);
        Display_Panel->setStyleSheet(QLatin1String("#Display_Panel{\n"
"border-image: url(:/panel);\n"
"background-color: rgba(255, 255, 255, 0);\n"
"\n"
"}"));
        Display_Panel->setFrameShape(QFrame::StyledPanel);
        Display_Panel->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(Display_Panel);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        gridFrame = new QFrame(Display_Panel);
        gridFrame->setObjectName(QStringLiteral("gridFrame"));
        gridFrame->setStyleSheet(QLatin1String("#gridFrame{\n"
"border-image: url(:/panel);\n"
"}"));
        gridLayout = new QGridLayout(gridFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(5);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(19, -1, -1, -1);
        btn_next = new QToolButton(gridFrame);
        btn_next->setObjectName(QStringLiteral("btn_next"));
        btn_next->setMaximumSize(QSize(32, 32));
        btn_next->setStyleSheet(QLatin1String("#btn_next{\n"
"border-image: url(:/next);\n"
"}"));

        gridLayout->addWidget(btn_next, 2, 1, 1, 1);

        btn_clear = new QToolButton(gridFrame);
        btn_clear->setObjectName(QStringLiteral("btn_clear"));
        btn_clear->setMaximumSize(QSize(32, 32));
        btn_clear->setStyleSheet(QLatin1String("#btn_clear {\n"
"border-image: url(:/clear);\n"
"}\n"
"\n"
"#btn_clear:pressed {\n"
"border-image: url(:/clear_p);\n"
"}"));

        gridLayout->addWidget(btn_clear, 3, 1, 1, 1);

        frame_3 = new QFrame(gridFrame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setMinimumSize(QSize(0, 45));
        frame_3->setMaximumSize(QSize(16777215, 68));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(20);
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("color: rgb(164, 136, 77);"));

        horizontalLayout_3->addWidget(label_5);

        lcd_day = new QLCDNumber(frame_3);
        lcd_day->setObjectName(QStringLiteral("lcd_day"));
        lcd_day->setStyleSheet(QStringLiteral("border-image: url(:/images/label_2.png);"));
        lcd_day->setProperty("intValue", QVariant(200));

        horizontalLayout_3->addWidget(lcd_day);


        gridLayout->addWidget(frame_3, 3, 0, 1, 1);

        frame = new QFrame(gridFrame);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setMinimumSize(QSize(100, 45));
        frame->setMaximumSize(QSize(16777215, 50));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(189, 161, 97);"));

        horizontalLayout->addWidget(label);

        lcd_minute = new QLCDNumber(frame);
        lcd_minute->setObjectName(QStringLiteral("lcd_minute"));
        lcd_minute->setStyleSheet(QStringLiteral("border-image: url(:/images/label_2.png);"));

        horizontalLayout->addWidget(lcd_minute);


        gridLayout->addWidget(frame, 1, 0, 1, 1);

        frame_2 = new QFrame(gridFrame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(0, 45));
        frame_2->setBaseSize(QSize(0, 50));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color: rgb(175, 152, 92);"));

        horizontalLayout_2->addWidget(label_3);

        lcd_hour = new QLCDNumber(frame_2);
        lcd_hour->setObjectName(QStringLiteral("lcd_hour"));
        lcd_hour->setStyleSheet(QStringLiteral("border-image: url(:/images/label_2.png);"));

        horizontalLayout_2->addWidget(lcd_hour);


        gridLayout->addWidget(frame_2, 2, 0, 1, 1);

        lnd_name = new QLineEdit(gridFrame);
        lnd_name->setObjectName(QStringLiteral("lnd_name"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lnd_name->sizePolicy().hasHeightForWidth());
        lnd_name->setSizePolicy(sizePolicy3);
        lnd_name->setFont(font);
        lnd_name->setStyleSheet(QLatin1String("QLineEdit {\n"
"background-color: rgba(255, 255, 255, 0);\n"
"	color: rgb(182, 151, 89);\n"
"}"));
        lnd_name->setFrame(false);

        gridLayout->addWidget(lnd_name, 0, 0, 1, 2);

        chb_beginStop = new QCheckBox(gridFrame);
        chb_beginStop->setObjectName(QStringLiteral("chb_beginStop"));
        chb_beginStop->setStyleSheet(QLatin1String("QCheckBox::indicator {\n"
"border-image: url(:/stop);\n"
"width: 32px;\n"
"height: 32px;}\n"
"QCheckBox::indicator:checked {\n"
"border-image: url(:/begin);\n"
"}"));

        gridLayout->addWidget(chb_beginStop, 1, 1, 1, 1);


        horizontalLayout_4->addWidget(gridFrame);


        retranslateUi(Display_Panel);

        QMetaObject::connectSlotsByName(Display_Panel);
    } // setupUi

    void retranslateUi(QFrame *Display_Panel)
    {
        Display_Panel->setWindowTitle(QApplication::translate("Display_Panel", "Frame", Q_NULLPTR));
        btn_next->setText(QString());
#ifndef QT_NO_SHORTCUT
        btn_next->setShortcut(QApplication::translate("Display_Panel", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn_clear->setText(QString());
#ifndef QT_NO_SHORTCUT
        btn_clear->setShortcut(QApplication::translate("Display_Panel", "Ctrl+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        label_5->setText(QApplication::translate("Display_Panel", "D:", Q_NULLPTR));
        label->setText(QApplication::translate("Display_Panel", "M:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Display_Panel", "H:", Q_NULLPTR));
        lnd_name->setText(QApplication::translate("Display_Panel", "hyh", Q_NULLPTR));
        chb_beginStop->setText(QString());
#ifndef QT_NO_SHORTCUT
        chb_beginStop->setShortcut(QApplication::translate("Display_Panel", "Ctrl+Space", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class Display_Panel: public Ui_Display_Panel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_PANEL_H
