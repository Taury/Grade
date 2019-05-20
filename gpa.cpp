#include "gpa.h"
#include "ui_gpa.h"
#include <QListWidget>
#include <QSize>
#include <QDebug>

GPA::GPA(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GPA)
{
    ui->setupUi(this);

    QListWidget *listWidget_grade100 = new QListWidget(ui->tableWidget);
    QListWidget *listWidget_GPA100 = new QListWidget(ui->tableWidget);
    listWidget_grade100->setFrameShape(QFrame::NoFrame);
    listWidget_GPA100->setFrameShape(QFrame::NoFrame);

    listWidget_grade100->addItem("[60,100]");
    listWidget_grade100->addItem("[0,60)");
    listWidget_GPA100->addItem("绩点=(分数/10)-5");
    listWidget_GPA100->addItem("0.0");

    QSize itemHeight;
    itemHeight.setHeight(30);
    int listcnt = listWidget_grade100->count();
    for(int i=0; i<listcnt; i++)
    {
        listWidget_grade100->item(i)->setTextAlignment(Qt::AlignCenter);
        listWidget_grade100->item(i)->setSizeHint(listWidget_grade100->size());
        listWidget_GPA100->item(i)->setTextAlignment(Qt::AlignCenter);
        listWidget_GPA100->item(i)->setSizeHint(itemHeight);
    }

    //取消列表滚动
    listWidget_grade100->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    listWidget_GPA100->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    listWidget_grade100->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
    listWidget_GPA100->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);

    //tableWidget单元格添加listWidget
    ui->tableWidget->setCellWidget(0,1,listWidget_grade100);
    ui->tableWidget->setCellWidget(0,2,listWidget_GPA100);
    ui->tableWidget->setCellWidget(1,1,ui->listWidget_grade5);
    ui->tableWidget->setCellWidget(1,2,ui->listWidget_GPA5);
    ui->tableWidget->setCellWidget(2,1,ui->listWidget_grade2);
    ui->tableWidget->setCellWidget(2,2,ui->listWidget_GPA2);

    ui->tableWidget->setRowHeight(0,60);
    ui->tableWidget->setRowHeight(1,150);
    ui->tableWidget->setRowHeight(2,60);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

GPA::~GPA()
{
    delete ui;
}
