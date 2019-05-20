#ifndef GRADE_H
#define GRADE_H

#include <QMainWindow>
#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class Grade;
}

class Grade : public QMainWindow
{
    Q_OBJECT

public:
    explicit Grade(QWidget *parent = 0);

    ~Grade();

private slots:
    void on_pushButton_search_clicked();

    void on_pushButton_showAll_clicked();

    void on_comboBox_attr_activated(const QString &arg1);

    float cntGPA();

    void showGPA();

private:
    Ui::Grade *ui;

    QSqlDatabase gradeDb;

    QSqlQueryModel *model;

};

#endif // GRADE_H
