#include "grade.h"
#include "ui_grade.h"
#include <QDebug>
#include <QList>
#include <QComboBox>
#include <QDialog>
#include <QLabel>
#include <QGridLayout>
#include "mytablemodel.h"
#include "gpa.h"

Grade::Grade(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Grade)
{
    ui->setupUi(this);

    gradeDb = QSqlDatabase::addDatabase("QSQLITE");
    gradeDb.setDatabaseName("mydatabase.db");
    if(!gradeDb.open())
    {
        qDebug()<<"Open database failed!";
    }
    else
    {
        QSqlQuery query;
        query.exec("select sum(credits) from grade where grade>=60 and grade!='不及格' and grade!='不通过';");
        if(query.next())
        {
            ui->label_sum->setText(query.value(0).toString());
        }
        model = new MyTableModel(ui->tableView);
        model->setQuery("select * from grade;");

        model->setHeaderData(0,Qt::Horizontal,"课程");
        model->setHeaderData(1,Qt::Horizontal,"学分");
        model->setHeaderData(2,Qt::Horizontal,"性质");
        model->setHeaderData(3,Qt::Horizontal,"成绩");

        ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui->tableView->setModel(model);


        ui->label_gpa->setText(QString::number(cntGPA(),'f',2));
        connect(ui->action_GPA, SIGNAL(triggered(bool)), this, SLOT(showGPA()));
    }
}

float Grade::cntGPA()
{
    float creditSum = 0.0;
    qint8 subjectCnt = 0;
    float xuanxiu = 0.0;
    float xianxuan = 0.0;
    float tongxuan = 0.0;
    float fuhe = 0.0;
    float sutuo = 0.0;

    qint8 rows = model->rowCount();
    for(qint8 i=0; i<rows; i++)
    {
        QString attr = model->data(model->index(i,2)).toString();
        float credits = model->data(model->index(i,1)).toFloat();
        QString grade = model->data(model->index(i,3)).toString();

        if(attr == "选修")
        {
            if(xuanxiu >= 8.0)
                continue;
            xuanxiu += credits;
        }
        else if(attr == "限选")
        {
            if(xianxuan >= 16.0)
                continue;
            xianxuan += credits;
        }
        else if(attr == "通选")
        {
            if(tongxuan >= 4.0)
                continue;
            tongxuan += credits;
        }
        else if(attr == "复合")
        {
            if(fuhe >= 6.0)
                continue;
            fuhe += credits;
        }
        else if(attr == "素拓")
        {
            if(sutuo >= 6.0)
                continue;
            sutuo += credits;
        }

        if(grade == "优秀")
        {
            creditSum += 4.5;
        }
        else if(grade == "良好")
        {
            creditSum += 3.5;
        }
        else if(grade == "中等")
        {
            creditSum += 2.5;
        }
        else if(grade == "及格")
        {
            creditSum += 1.5;
        }
        else if(grade == "通过")
        {
            creditSum += 2.5;
        }
        else if(grade.toInt() >= 60)
        {
            creditSum += grade.toInt()/10.0-5.0;
        }
        subjectCnt++;
    }
    qDebug()<<"creditsum = " << creditSum << endl;
    qDebug()<<"subjectCnt = " << subjectCnt << endl;
    return creditSum/subjectCnt;
}

Grade::~Grade()
{
    delete ui;
}

void Grade::on_pushButton_search_clicked()
{
    model->setQuery(QString("select * from grade where subject like '%%1%';").arg(ui->lineEdit->text()));

    ui->tableView->setModel(model);
}

void Grade::on_pushButton_showAll_clicked()
{
    model->setQuery("select * from grade;");
     ui->tableView->setModel(model);
}

void Grade::on_comboBox_attr_activated(const QString &arg1)
{
     model->setQuery(QString("select * from grade where attr='%1';").arg(arg1));
     ui->tableView->setModel(model);
}

void Grade::showGPA()
{
    GPA *gpa = new GPA();
    gpa->show();

}
