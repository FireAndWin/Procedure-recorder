/********************************************************************************
** Form generated from reading UI file 'up_display.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UP_DISPLAY_H
#define UI_UP_DISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Up_Display
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLCDNumber *lcdNumber;

    void setupUi(QFrame *Up_Display)
    {
        if (Up_Display->objectName().isEmpty())
            Up_Display->setObjectName(QStringLiteral("Up_Display"));
        Up_Display->resize(240, 188);
        Up_Display->setStyleSheet(QLatin1String("#Up_Display{\n"
"border-image: url(:/images/fatherTimer_drawer_up_2.png);\n"
"}"));
        Up_Display->setFrameShape(QFrame::StyledPanel);
        Up_Display->setFrameShadow(QFrame::Raised);
        widget = new QWidget(Up_Display);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 28, 180, 150));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 0, 10, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(189, 161, 96);"));

        verticalLayout->addWidget(label);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMaximumSize(QSize(16777215, 32));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(13);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        comboBox->setFont(font1);
        comboBox->setStyleSheet(QString::fromUtf8("\n"
"/* \346\234\252\344\270\213\346\213\211\346\227\266\357\274\214QComboBox\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox {\n"
"border-image: url(:/images/label_2.png);\n"
"font: 13pt \"Arial\";\n"
"\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"background-color: rgb(58, 43, 87);\n"
"}\n"
"\n"
"\n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"\n"
"QComboBox QAbstractItemView::item {\n"
"border-image: url(:/images/listbox_back.png);\n"
"/*QFont font ( \342\200\234Microsoft YaHei\342\200\235,15,100); */\n"
"}\n"
"\n"
"\n"
"/* \344\270\213\346\213\211\346\241\206\346\240\267\345\274\217 */\n"
"QComboBox::drop-down {\n"
"background-color: rgba(255, 255, 255, 0);\n"
"width: 62px\n"
"}\n"
"\n"
"/* \344\270\213\346\213\211\347\256\255\345\244\264\346\240\267\345\274\217 */ QComboBox::down-arrow {\n"
"background-color: rgba(255, 255, 255, 0);\n"
"width:23px;\n"
""
                        "height:18px;\n"
"}\n"
"\n"
" QComboBox::down-arrow:pressed {\n"
"border-image: url(:/images/listbox_btn_pressed.png);\n"
"width:23px;\n"
"height:18px;\n"
"}\n"
"\n"
""));
        comboBox->setFrame(false);

        verticalLayout->addWidget(comboBox);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setMaximumSize(QSize(50, 16777215));
        comboBox_2->setStyleSheet(QString::fromUtf8("\n"
"/* \346\234\252\344\270\213\346\213\211\346\227\266\357\274\214QComboBox\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox {\n"
"color: rgb(189, 161, 91);\n"
"font: 13pt \"Arial\";\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"background-color: rgb(58, 43, 87);\n"
"}\n"
"\n"
"\n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\242\253\351\200\211\346\213\251\347\232\204\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"\n"
"QComboBox QAbstractItemView::item:selected {\n"
"color: rgb(55, 42, 82);\n"
"}\n"
"\n"
"/* \344\270\213\346\213\211\346\241\206\346\240\267\345\274\217 */\n"
"QComboBox::drop-down {\n"
"\n"
"}\n"
"\n"
"/* \344\270\213\346\213\211\347\256\255\345\244\264\346\240\267\345\274\217 */ QComboBox::down-arrow {\n"
"width:23px;\n"
"height:18px;\n"
"}\n"
"\n"
" QComboBox::down-arrow:pressed {\n"
"\n"
"}\n"
""));
        comboBox_2->setFrame(false);

        verticalLayout->addWidget(comboBox_2);

        lcdNumber = new QLCDNumber(widget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        verticalLayout->addWidget(lcdNumber);


        retranslateUi(Up_Display);

        QMetaObject::connectSlotsByName(Up_Display);
    } // setupUi

    void retranslateUi(QFrame *Up_Display)
    {
        Up_Display->setWindowTitle(QApplication::translate("Up_Display", "Frame", Q_NULLPTR));
        label->setText(QApplication::translate("Up_Display", "\347\210\266\351\241\271\347\233\256:", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Up_Display", "     \346\226\260\345\273\272\351\241\271  \347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Up_Display", "D:", Q_NULLPTR)
         << QApplication::translate("Up_Display", "H:", Q_NULLPTR)
         << QApplication::translate("Up_Display", "M:", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class Up_Display: public Ui_Up_Display {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UP_DISPLAY_H
