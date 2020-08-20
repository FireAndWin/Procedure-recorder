/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QToolButton *btn_displayTools;
    QWidget *wgt_centralWidget;
    QToolButton *btn_functionTools;
    QToolButton *btn_upperItems;
    QToolButton *btn_displayTools_2;
    QToolButton *btn_functionTools_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(979, 727);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btn_displayTools = new QToolButton(centralWidget);
        btn_displayTools->setObjectName(QStringLiteral("btn_displayTools"));
        btn_displayTools->setGeometry(QRect(290, 200, 22, 167));
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
        wgt_centralWidget = new QWidget(centralWidget);
        wgt_centralWidget->setObjectName(QStringLiteral("wgt_centralWidget"));
        wgt_centralWidget->setGeometry(QRect(0, 0, 361, 235));
        btn_functionTools = new QToolButton(centralWidget);
        btn_functionTools->setObjectName(QStringLiteral("btn_functionTools"));
        btn_functionTools->setGeometry(QRect(170, 410, 267, 19));
        btn_functionTools->setStyleSheet(QLatin1String("QToolButton{\n"
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
        btn_upperItems = new QToolButton(centralWidget);
        btn_upperItems->setObjectName(QStringLiteral("btn_upperItems"));
        btn_upperItems->setGeometry(QRect(630, 480, 268, 17));
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
        btn_displayTools_2 = new QToolButton(centralWidget);
        btn_displayTools_2->setObjectName(QStringLiteral("btn_displayTools_2"));
        btn_displayTools_2->setGeometry(QRect(310, 200, 22, 167));
        btn_displayTools_2->setStyleSheet(QLatin1String("QToolButton{\n"
"border-image: url(:/images/btn_displayTools.png);\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"border-image: url(:/images/btn_displayTools_h.png);\n"
"}\n"
"QToolButton:pressed{\n"
"border-image: url(:/images/btn_displayTools_h.png);\n"
"}"));
        btn_functionTools_2 = new QToolButton(centralWidget);
        btn_functionTools_2->setObjectName(QStringLiteral("btn_functionTools_2"));
        btn_functionTools_2->setGeometry(QRect(190, 270, 267, 19));
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
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        btn_displayTools->setText(QString());
#ifndef QT_NO_SHORTCUT
        btn_displayTools->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn_functionTools->setText(QString());
#ifndef QT_NO_SHORTCUT
        btn_functionTools->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn_upperItems->setText(QString());
#ifndef QT_NO_SHORTCUT
        btn_upperItems->setShortcut(QApplication::translate("MainWindow", "Ctrl+U", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn_displayTools_2->setText(QString());
#ifndef QT_NO_SHORTCUT
        btn_displayTools_2->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn_functionTools_2->setText(QString());
#ifndef QT_NO_SHORTCUT
        btn_functionTools_2->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
