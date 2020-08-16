#include "alt_panel.h"
#include "ui_alt_panel.h"
#include"QStandardItemModel"
#include"QScrollBar"

Alt_Panel::Alt_Panel(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Alt_Panel)
{
    ui->setupUi(this);


    //1，构造Model，这里示例具有3层关系的model构造过程

        QStandardItemModel* model = new QStandardItemModel(ui->treeView);

        model->setHorizontalHeaderLabels(QStringList()<<QStringLiteral("序号") << QStringLiteral("名称"));     //设置列头

        for(int i=0;i<5;i++)

        {

            //一级节点，加入mModel

            QList<QStandardItem*> items1;

            QStandardItem* item1 = new QStandardItem(QString::number(i));

            QStandardItem* item2 = new QStandardItem(QStringLiteral("一级节点"));

            items1.append(item1);

            items1.append(item2);

            model->appendRow(items1);



            for(int j=0;j<5;j++)

            {

                //二级节点,加入第1个一级节点

                QList<QStandardItem*> items2;

                QStandardItem* item3 = new QStandardItem(QString::number(j));

                QStandardItem* item4 = new QStandardItem(QStringLiteral("二级节点"));

                items2.append(item3);

                items2.append(item4);

                item1->appendRow(items2);



                for(int k=0;k<5;k++)

                {

                    //三级节点,加入第1个二级节点

                    QList<QStandardItem*> items3;

                    QStandardItem* item5 = new QStandardItem(QString::number(k));

                    QStandardItem* item6 = new QStandardItem(QStringLiteral("三级节点"));

                    items3.append(item5);

                    items3.append(item6);

                    item3->appendRow(items3);

                }

            }

        }

        //2，给QTreeView应用model

        ui->treeView->setModel(model);
        ui->treeView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//去掉横的滚动条
         ui->treeView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);//去掉横的滚动条
         ui->treeView->verticalScrollBar()->setStyleSheet("QScrollBar:vertical{\
                                                          background-color: rgba(255, 255, 255, 0);\
                                                          border-image: url(:/images/BeamD_.png);\
                                                          width:30px;\
                                                          max-height:180px;\
                                                          }\
                                                          QScrollBar::handle:vertical {\
                                                          max-width:30px;\
                                                          max-height:3px;\
                                                              image: url(:/images/handle.png);\
                                                          \
                                                          }\
                                                          QScrollBar::sub-page,QScrollBar::add-page{\
                                                          background-color: rgba(255, 255, 255, 0);\
                                                          }\
                                                          \
                                                          QScrollBar::add-line:vertical{\
                                                          background-color: rgba(255, 255, 255, 0);\
                                                          }\
                                                          QScrollBar::sub-line:vertical{"
                                                           "background-color: rgba(255, 255, 255, 0);\
                                                           }");
}

Alt_Panel::~Alt_Panel()
{
    delete ui;
}
