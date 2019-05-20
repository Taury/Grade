#ifndef MYTABLEMODEL_H
#define MYTABLEMODEL_H

#include <QSqlTableModel>

class MyTableModel : public QSqlTableModel
{
public:
    MyTableModel(QObject * parent = 0, QSqlDatabase db = QSqlDatabase());
    ~MyTableModel();
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
};

#endif // MYTABLEMODEL_H
