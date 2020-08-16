/********************************************************************************
** Form generated from reading UI file 'down_toolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWN_TOOLBAR_H
#define UI_DOWN_TOOLBAR_H

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

class Ui_Down_ToolBar
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolButton *btn_down_read;
    QToolButton *btn_down_out;
    QToolButton *btn_down_chart;

    void setupUi(QFrame *Down_ToolBar)
    {
        if (Down_ToolBar->objectName().isEmpty())
            Down_ToolBar->setObjectName(QStringLiteral("Down_ToolBar"));
        Down_ToolBar->resize(260, 60);
        Down_ToolBar->setStyleSheet(QLatin1String("#Down_ToolBar\n"
"{border-image: url(:/down);}"));
        Down_ToolBar->setFrameShape(QFrame::StyledPanel);
        Down_ToolBar->setFrameShadow(QFrame::Raised);
        widget = new QWidget(Down_ToolBar);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, -1, 191, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_down_read = new QToolButton(widget);
        btn_down_read->setObjectName(QStringLiteral("btn_down_read"));
        btn_down_read->setMinimumSize(QSize(32, 32));
        btn_down_read->setStyleSheet(QLatin1String("QToolButton{\n"
"border-image: url(:/images/read.png);\n"
"}\n"
"QToolButton:hover{\n"
"border-image: url(:/images/read_h.png);\n"
"}\n"
""));

        horizontalLayout->addWidget(btn_down_read);

        btn_down_out = new QToolButton(widget);
        btn_down_out->setObjectName(QStringLiteral("btn_down_out"));
        btn_down_out->setMinimumSize(QSize(32, 32));
        btn_down_out->setStyleSheet(QLatin1String("QToolButton{\n"
"border-image: url(:/images/out.png);\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"border-image: url(:/images/out_h.png);\n"
"}"));

        horizontalLayout->addWidget(btn_down_out);

        btn_down_chart = new QToolButton(widget);
        btn_down_chart->setObjectName(QStringLiteral("btn_down_chart"));
        btn_down_chart->setMinimumSize(QSize(32, 32));
        btn_down_chart->setStyleSheet(QLatin1String("QToolButton{\n"
"border-image: url(:/images/chart.png);\n"
"}\n"
"QToolButton:hover{\n"
"border-image: url(:/images/chart_h.png);\n"
"}"));

        horizontalLayout->addWidget(btn_down_chart);


        retranslateUi(Down_ToolBar);

        QMetaObject::connectSlotsByName(Down_ToolBar);
    } // setupUi

    void retranslateUi(QFrame *Down_ToolBar)
    {
        Down_ToolBar->setWindowTitle(QApplication::translate("Down_ToolBar", "Frame", Q_NULLPTR));
        btn_down_read->setText(QString());
        btn_down_out->setText(QString());
        btn_down_chart->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Down_ToolBar: public Ui_Down_ToolBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWN_TOOLBAR_H
