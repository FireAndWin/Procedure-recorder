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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_Frame
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QToolButton *btn_displayTools;
    QToolButton *btn_functionTools_2;
    QToolButton *btn_upperItems;
    QWidget *wgt_centralWidget;

    void setupUi(QFrame *Main_Frame)
    {
        if (Main_Frame->objectName().isEmpty())
            Main_Frame->setObjectName(QStringLiteral("Main_Frame"));
        Main_Frame->resize(454, 328);
        Main_Frame->setMinimumSize(QSize(454, 328));
        Main_Frame->setMaximumSize(QSize(454, 328));
        Main_Frame->setStyleSheet(QLatin1String("#Main_Frame {\n"
"border-image: url(:/add_h);\n"
"}"));
        Main_Frame->setFrameShape(QFrame::NoFrame);
        Main_Frame->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(Main_Frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(Main_Frame);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QLatin1String("#widget {\n"
"border-image: url(:/back);\n"
"}"));
        btn_displayTools = new QToolButton(widget);
        btn_displayTools->setObjectName(QStringLiteral("btn_displayTools"));
        btn_displayTools->setGeometry(QRect(417, 81, 22, 167));
        btn_displayTools->setStyleSheet(QLatin1String("QToolButton{\n"
"border-image: url(:/images/btn_displayTools.png);\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"border-image: url(:/images/btn_displayTools_h.png);\n"
"}\n"
"QToolButton:pressed{\n"
"border-image: url(:/images/btn_displayTools_h.png);\n"
"}"));
        btn_functionTools_2 = new QToolButton(widget);
        btn_functionTools_2->setObjectName(QStringLiteral("btn_functionTools_2"));
        btn_functionTools_2->setGeometry(QRect(92, 297, 267, 19));
        btn_functionTools_2->setStyleSheet(QLatin1String("QToolButton{\n"
"border-image: url(:/images/btn_functionTools.png);\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"border-image: url(:/images/btn_functionTools_h.png);\n"
"}\n"
"\n"
"QToolButton:pressed{\n"
"border-image: url(:/images/btn_functionTools_h.png);\n"
"}"));
        btn_upperItems = new QToolButton(widget);
        btn_upperItems->setObjectName(QStringLiteral("btn_upperItems"));
        btn_upperItems->setGeometry(QRect(92, 10, 268, 17));
        btn_upperItems->setStyleSheet(QLatin1String("QToolButton{\n"
"border-image: url(:/images/btn_upperItem.png);\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"border-image: url(:/images/btn_upperItem_h.png);\n"
"}\n"
"\n"
"QToolButton:pressed{\n"
"border-image: url(:/images/btn_upperItem_h.png);\n"
"}"));
        wgt_centralWidget = new QWidget(widget);
        wgt_centralWidget->setObjectName(QStringLiteral("wgt_centralWidget"));
        wgt_centralWidget->setGeometry(QRect(43, 45, 361, 235));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wgt_centralWidget->sizePolicy().hasHeightForWidth());
        wgt_centralWidget->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(widget);


        retranslateUi(Main_Frame);

        QMetaObject::connectSlotsByName(Main_Frame);
    } // setupUi

    void retranslateUi(QFrame *Main_Frame)
    {
        Main_Frame->setWindowTitle(QApplication::translate("Main_Frame", "Frame", Q_NULLPTR));
        btn_displayTools->setText(QString());
#ifndef QT_NO_SHORTCUT
        btn_displayTools->setShortcut(QApplication::translate("Main_Frame", "Ctrl+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn_functionTools_2->setText(QString());
#ifndef QT_NO_SHORTCUT
        btn_functionTools_2->setShortcut(QApplication::translate("Main_Frame", "Ctrl+F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn_upperItems->setText(QString());
#ifndef QT_NO_SHORTCUT
        btn_upperItems->setShortcut(QApplication::translate("Main_Frame", "Ctrl+U", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class Main_Frame: public Ui_Main_Frame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_FRAME_H
