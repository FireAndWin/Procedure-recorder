/********************************************************************************
** Form generated from reading UI file 'right_toolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIGHT_TOOLBAR_H
#define UI_RIGHT_TOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Right_ToolBar
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QToolButton *btn_right_hide;
    QToolButton *btn_right_relocate;
    QToolButton *btn_right_close;

    void setupUi(QFrame *Right_ToolBar)
    {
        if (Right_ToolBar->objectName().isEmpty())
            Right_ToolBar->setObjectName(QStringLiteral("Right_ToolBar"));
        Right_ToolBar->resize(50, 153);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Right_ToolBar->sizePolicy().hasHeightForWidth());
        Right_ToolBar->setSizePolicy(sizePolicy);
        Right_ToolBar->setMinimumSize(QSize(30, 0));
        Right_ToolBar->setMaximumSize(QSize(50, 16777215));
        Right_ToolBar->setStyleSheet(QStringLiteral("#Right_ToolBar{border-image: url(:/right);}"));
        Right_ToolBar->setFrameShape(QFrame::NoFrame);
        Right_ToolBar->setFrameShadow(QFrame::Plain);
        Right_ToolBar->setLineWidth(0);
        verticalLayout_2 = new QVBoxLayout(Right_ToolBar);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalWidget = new QWidget(Right_ToolBar);
        verticalWidget->setObjectName(QStringLiteral("verticalWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(verticalWidget->sizePolicy().hasHeightForWidth());
        verticalWidget->setSizePolicy(sizePolicy1);
        verticalWidget->setMaximumSize(QSize(1677215, 16777215));
        verticalWidget->setStyleSheet(QLatin1String("#verticalWidget{\n"
"border-image: url(:/right);\n"
"}"));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout->setContentsMargins(1, 16, 0, 15);
        btn_right_hide = new QToolButton(verticalWidget);
        btn_right_hide->setObjectName(QStringLiteral("btn_right_hide"));
        btn_right_hide->setMinimumSize(QSize(32, 32));
        btn_right_hide->setStyleSheet(QLatin1String("#btn_right_hide{\n"
"border-image: url(:/images/eye.png);\n"
"}\n"
"#btn_right_hide:hover{\n"
"border-image: url(:/images/eye_h.png);\n"
"}\n"
"#btn_right_hide:pressed{\n"
"border-image: url(:/images/eye_p.png);\n"
"}"));

        verticalLayout->addWidget(btn_right_hide);

        btn_right_relocate = new QToolButton(verticalWidget);
        btn_right_relocate->setObjectName(QStringLiteral("btn_right_relocate"));
        btn_right_relocate->setMinimumSize(QSize(32, 32));
        btn_right_relocate->setStyleSheet(QLatin1String("QToolButton{\n"
"border-image: url(:/images/location.png);\n"
"}\n"
"QToolButton:hover{\n"
"border-image: url(:/images/location_p.png);\n"
"}"));

        verticalLayout->addWidget(btn_right_relocate);

        btn_right_close = new QToolButton(verticalWidget);
        btn_right_close->setObjectName(QStringLiteral("btn_right_close"));
        btn_right_close->setMinimumSize(QSize(32, 32));
        btn_right_close->setStyleSheet(QLatin1String("QToolButton{\n"
"border-image: url(:/images/x.png);\n"
"}\n"
"QToolButton:hover{\n"
"border-image: url(:/images/x_p.png);\n"
"}"));

        verticalLayout->addWidget(btn_right_close);


        verticalLayout_2->addWidget(verticalWidget);


        retranslateUi(Right_ToolBar);

        QMetaObject::connectSlotsByName(Right_ToolBar);
    } // setupUi

    void retranslateUi(QFrame *Right_ToolBar)
    {
        Right_ToolBar->setWindowTitle(QApplication::translate("Right_ToolBar", "Frame", Q_NULLPTR));
        btn_right_hide->setText(QString());
        btn_right_relocate->setText(QString());
#ifndef QT_NO_SHORTCUT
        btn_right_relocate->setShortcut(QApplication::translate("Right_ToolBar", "Ctrl+L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn_right_close->setText(QString());
#ifndef QT_NO_SHORTCUT
        btn_right_close->setShortcut(QApplication::translate("Right_ToolBar", "Esc", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class Right_ToolBar: public Ui_Right_ToolBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIGHT_TOOLBAR_H
