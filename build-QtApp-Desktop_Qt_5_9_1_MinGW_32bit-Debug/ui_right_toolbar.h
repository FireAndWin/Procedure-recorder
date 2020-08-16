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

QT_BEGIN_NAMESPACE

class Ui_Right_ToolBar
{
public:
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QToolButton *btn_right_hide;
    QToolButton *btn_right_relocate;
    QToolButton *btn_right_close;

    void setupUi(QFrame *Right_ToolBar)
    {
        if (Right_ToolBar->objectName().isEmpty())
            Right_ToolBar->setObjectName(QStringLiteral("Right_ToolBar"));
        Right_ToolBar->resize(56, 153);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Right_ToolBar->sizePolicy().hasHeightForWidth());
        Right_ToolBar->setSizePolicy(sizePolicy);
        Right_ToolBar->setMaximumSize(QSize(56, 16777215));
        Right_ToolBar->setStyleSheet(QStringLiteral("#Right_ToolBar{border-image: url(:/right);}"));
        Right_ToolBar->setFrameShape(QFrame::StyledPanel);
        Right_ToolBar->setFrameShadow(QFrame::Raised);
        verticalFrame = new QFrame(Right_ToolBar);
        verticalFrame->setObjectName(QStringLiteral("verticalFrame"));
        verticalFrame->setGeometry(QRect(-10, 10, 41, 111));
        verticalFrame->setMaximumSize(QSize(41, 16777215));
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        btn_right_hide = new QToolButton(verticalFrame);
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

        btn_right_relocate = new QToolButton(verticalFrame);
        btn_right_relocate->setObjectName(QStringLiteral("btn_right_relocate"));
        btn_right_relocate->setMinimumSize(QSize(32, 32));
        btn_right_relocate->setStyleSheet(QStringLiteral("border-image: url(:/images/location.png);"));

        verticalLayout->addWidget(btn_right_relocate);

        btn_right_close = new QToolButton(verticalFrame);
        btn_right_close->setObjectName(QStringLiteral("btn_right_close"));
        btn_right_close->setMinimumSize(QSize(32, 32));
        btn_right_close->setStyleSheet(QStringLiteral("border-image: url(:/images/x.png);"));

        verticalLayout->addWidget(btn_right_close);


        retranslateUi(Right_ToolBar);

        QMetaObject::connectSlotsByName(Right_ToolBar);
    } // setupUi

    void retranslateUi(QFrame *Right_ToolBar)
    {
        Right_ToolBar->setWindowTitle(QApplication::translate("Right_ToolBar", "Frame", Q_NULLPTR));
        btn_right_hide->setText(QString());
        btn_right_relocate->setText(QString());
        btn_right_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Right_ToolBar: public Ui_Right_ToolBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIGHT_TOOLBAR_H
