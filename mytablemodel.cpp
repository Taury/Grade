#include "mytablemodel.h"

MyTableModel::MyTableModel(QObject *parent, QSqlDatabase db) : QSqlTableModel(parent,db)
{

}


MyTableModel::~MyTableModel()
{

}

QVariant MyTableModel::data(const QModelIndex &index, int role) const
{
    QVariant value  = QSqlTableModel::data(index, role);
    if(Qt::TextAlignmentRole == role)
    {
        value   = int(Qt::AlignCenter | Qt::AlignHCenter);
        return value;
    }
}

