/********************************************************************************
** Form generated from reading UI file 'alt_panel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALT_PANEL_H
#define UI_ALT_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Alt_Panel
{
public:
    QFrame *big_frame;
    QVBoxLayout *verticalLayout;
    QTreeView *treeView;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QToolButton *btn_alt_add;
    QToolButton *btn_alt_begin;
    QToolButton *btn_alt_delete;

    void setupUi(QFrame *Alt_Panel)
    {
        if (Alt_Panel->objectName().isEmpty())
            Alt_Panel->setObjectName(QStringLiteral("Alt_Panel"));
        Alt_Panel->resize(360, 240);
        Alt_Panel->setStyleSheet(QLatin1String("#Alt_Panel{\n"
"border-image: url(:/panel);\n"
"background-color: rgba(255, 255, 255, 0);\n"
"\n"
"}"));
        Alt_Panel->setFrameShape(QFrame::StyledPanel);
        Alt_Panel->setFrameShadow(QFrame::Raised);
        big_frame = new QFrame(Alt_Panel);
        big_frame->setObjectName(QStringLiteral("big_frame"));
        big_frame->setGeometry(QRect(19, 15, 331, 220));
        verticalLayout = new QVBoxLayout(big_frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        treeView = new QTreeView(big_frame);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setStyleSheet(QLatin1String("QHeaderView::section { \n"
"height:22px; \n"
"color:rgb(194, 167, 93);\n"
"	border-image: url(:/images/label_4.png);\n"
"/*border-left:0px solid gray; \n"
"border-right:1px solid gray; \n"
"border-top:0px solid gray; \n"
"border-bottom:0px solid gray;*/\n"
" }\n"
"\n"
"\n"
"#treeView{\n"
"border-image: url(:/images/label_3.png);\n"
"}\n"
"QTreeView::item{\n"
"height:30px;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"background-color: rgb(85, 255, 127);\n"
"}"));

        verticalLayout->addWidget(treeView);

        frame = new QFrame(big_frame);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 42));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(0);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 2, 0, 0);
        btn_alt_add = new QToolButton(frame);
        btn_alt_add->setObjectName(QStringLiteral("btn_alt_add"));
        btn_alt_add->setMinimumSize(QSize(32, 32));
        btn_alt_add->setStyleSheet(QLatin1String("#btn_alt_add {\n"
"border-image: url(:/add);\n"
"}\n"
"\n"
"#btn_alt_add:hover {\n"
"border-image: url(:/add_h);\n"
"}"));

        horizontalLayout->addWidget(btn_alt_add);

        btn_alt_begin = new QToolButton(frame);
        btn_alt_begin->setObjectName(QStringLiteral("btn_alt_begin"));
        btn_alt_begin->setMinimumSize(QSize(32, 32));
        btn_alt_begin->setStyleSheet(QLatin1String("#btn_alt_begin{\n"
"border-image: url(:/stop);\n"
"}\n"
"#btn_alt_begin:hover{\n"
"border-image: url(:/stop_h);\n"
"}\n"
"#btn_alt_begin:pressed{\n"
"border-image: url(:/begin_h);\n"
"}"));

        horizontalLayout->addWidget(btn_alt_begin);

        btn_alt_delete = new QToolButton(frame);
        btn_alt_delete->setObjectName(QStringLiteral("btn_alt_delete"));
        btn_alt_delete->setMinimumSize(QSize(32, 32));
        btn_alt_delete->setStyleSheet(QLatin1String("#btn_alt_delete {\n"
"border-image: url(:/delete);\n"
"}\n"
"#btn_alt_delete:hover {\n"
"border-image: url(:/delete_h);\n"
"}\n"
"#btn_alt_delete:pressed {\n"
"border-image: url(:/delete_p);\n"
"}"));

        horizontalLayout->addWidget(btn_alt_delete);


        verticalLayout->addWidget(frame);


        retranslateUi(Alt_Panel);

        QMetaObject::connectSlotsByName(Alt_Panel);
    } // setupUi

    void retranslateUi(QFrame *Alt_Panel)
    {
        Alt_Panel->setWindowTitle(QApplication::translate("Alt_Panel", "Frame", Q_NULLPTR));
        btn_alt_add->setText(QString());
#ifndef QT_NO_SHORTCUT
        btn_alt_add->setShortcut(QApplication::translate("Alt_Panel", "Del", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn_alt_begin->setText(QString());
        btn_alt_delete->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Alt_Panel: public Ui_Alt_Panel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALT_PANEL_H
