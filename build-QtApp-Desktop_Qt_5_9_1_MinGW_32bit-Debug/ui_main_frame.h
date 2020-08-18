/********************************************************************************
** Form generated from reading UI file 'main_frame.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_FRAME_H
#define UI_MAIN_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_Frame
{
public:
    QToolButton *btn_displayTools;
    QToolButton *btn_upperItems;
    QToolButton *btn_functionTools;
    QWidget *wgt_centralWidget;

    void setupUi(QFrame *Main_Frame)
    {
        if (Main_Frame->objectName().isEmpty())
            Main_Frame->setObjectName(QStringLiteral("Main_Frame"));
        Main_Frame->resize(454, 328);
        Main_Frame->setMinimumSize(QSize(454, 328));
        Main_Frame->setMaximumSize(QSize(454, 328));
        Main_Frame->setStyleSheet(QLatin1String("#Main_Frame {\n"
"border-image: url(:/back);\n"
"}"));
        Main_Frame->setFrameShape(QFrame::StyledPanel);
        Main_Frame->setFrameShadow(QFrame::Raised);
        btn_displayTools = new QToolButton(Main_Frame);
        btn_displayTools->setObjectName(QStringLiteral("btn_displayTools"));
        btn_displayTools->setGeometry(QRect(417, 81, 22, 167));
        btn_displayTools->setStyleSheet(QLatin1String("QToolButton{\n"
"border-image: url(:/images/btn_displayTools.png);\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"border-image: url(:/images/btn_displayTools_h.png);\n"
"}"));
        btn_upperItems = new QToolButton(Main_Frame);
        btn_upperItems->setObjectName(QStringLiteral("btn_upperItems"));
        btn_upperItems->setGeometry(QRect(92, 10, 268, 17));
        btn_upperItems->setStyleSheet(QLatin1String("QToolButton{\n"
"border-image: url(:/images/btn_upperItem.png);\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"border-image: url(:/images/btn_upperItem_h.png);\n"
"}"));
        btn_functionTools = new QToolButton(Main_Frame);
        btn_functionTools->setObjectName(QStringLiteral("btn_functionTools"));
        btn_functionTools->setGeometry(QRect(92, 297, 267, 19));
        btn_functionTools->setStyleSheet(QLatin1String("QToolButton{\n"
"border-image: url(:/images/btn_functionTools.png);\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"border-image: url(:/images/btn_functionTools_h.png);\n"
"}"));
        wgt_centralWidget = new QWidget(Main_Frame);
        wgt_centralWidget->setObjectName(QStringLiteral("wgt_centralWidget"));
        wgt_centralWidget->setGeometry(QRect(49, 45, 355, 235));

        retranslateUi(Main_Frame);

        QMetaObject::connectSlotsByName(Main_Frame);
    } // setupUi

    void retranslateUi(QFrame *Main_Frame)
    {
        Main_Frame->setWindowTitle(QApplication::translate("Main_Frame", "Frame", Q_NULLPTR));
        btn_displayTools->setText(QString());
        btn_upperItems->setText(QString());
        btn_functionTools->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Main_Frame: public Ui_Main_Frame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_FRAME_H
