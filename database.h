#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQueryModel>
#include <QModelIndex>

#include "student.h"

class Database
{
public:
    static Database *Instance();
    static void Finalize();

    QAbstractItemModel* students() const;

    void addStudent(const Student& student);
    Student getStudent(QModelIndex index);
    void updateStudent(QModelIndex index, const Student& student);
    void removeStudent(QModelIndex index);

private:
    Database();

    static Database *instance;

    QSqlQuery getPaymentsQuery();

    QSqlDatabase db;
    QSqlTableModel *studentsModel;
    QSqlQueryModel *paymentsModel;
};

#endif // DATABASE_H
