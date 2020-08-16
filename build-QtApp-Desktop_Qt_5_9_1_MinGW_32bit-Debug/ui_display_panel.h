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
    QFrame *gridFrame;
    QGridLayout *gridLayout;
    QToolButton *btn_next;
    QToolButton *btn_clear;
    QToolButton *btn_stopBegin;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLCDNumber *lcdNumber;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLCDNumber *lcdNumber_3;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLCDNumber *lcdNumber_2;
    QLineEdit *lineEdit;

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
        gridFrame = new QFrame(Display_Panel);
        gridFrame->setObjectName(QStringLiteral("gridFrame"));
        gridFrame->setGeometry(QRect(16, 20, 331, 201));
        gridLayout = new QGridLayout(gridFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(5);
        gridLayout->setVerticalSpacing(0);
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

        btn_stopBegin = new QToolButton(gridFrame);
        btn_stopBegin->setObjectName(QStringLiteral("btn_stopBegin"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_stopBegin->sizePolicy().hasHeightForWidth());
        btn_stopBegin->setSizePolicy(sizePolicy);
        btn_stopBegin->setMinimumSize(QSize(32, 32));
        btn_stopBegin->setStyleSheet(QLatin1String("#btn_stopBegin {\n"
"border-image: url(:/stop);\n"
"}\n"
"#btn_stopBegin:hover{\n"
"border-image: url(:/begin);\n"
"}"));

        gridLayout->addWidget(btn_stopBegin, 1, 1, 1, 1);

        frame_3 = new QFrame(gridFrame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy1);
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
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(20);
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("color: rgb(164, 136, 77);"));

        horizontalLayout_3->addWidget(label_5);

        lcdNumber = new QLCDNumber(frame_3);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        horizontalLayout_3->addWidget(lcdNumber);


        gridLayout->addWidget(frame_3, 3, 0, 1, 1);

        frame = new QFrame(gridFrame);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy3);
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
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(189, 161, 97);"));

        horizontalLayout->addWidget(label);

        lcdNumber_3 = new QLCDNumber(frame);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));

        horizontalLayout->addWidget(lcdNumber_3);


        gridLayout->addWidget(frame, 1, 0, 1, 1);

        frame_2 = new QFrame(gridFrame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
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
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color: rgb(175, 152, 92);"));

        horizontalLayout_2->addWidget(label_3);

        lcdNumber_2 = new QLCDNumber(frame_2);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));

        horizontalLayout_2->addWidget(lcdNumber_2);


        gridLayout->addWidget(frame_2, 2, 0, 1, 1);

        lineEdit = new QLineEdit(gridFrame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy4);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QLatin1String("#lineEdit {\n"
"background-color: rgba(255, 255, 255, 0);\n"
"	color: rgb(182, 151, 89);\n"
"}"));
        lineEdit->setFrame(false);

        gridLayout->addWidget(lineEdit, 0, 0, 1, 2);


        retranslateUi(Display_Panel);

        QMetaObject::connectSlotsByName(Display_Panel);
    } // setupUi

    void retranslateUi(QFrame *Display_Panel)
    {
        Display_Panel->setWindowTitle(QApplication::translate("Display_Panel", "Frame", Q_NULLPTR));
        btn_next->setText(QString());
        btn_clear->setText(QString());
        btn_stopBegin->setText(QString());
        label_5->setText(QApplication::translate("Display_Panel", "M:", Q_NULLPTR));
        label->setText(QApplication::translate("Display_Panel", "D:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Display_Panel", "H:", Q_NULLPTR));
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Display_Panel: public Ui_Display_Panel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_PANEL_H
