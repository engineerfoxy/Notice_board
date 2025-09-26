#ifndef FORMFOREXCELTABLE_H
#define FORMFOREXCELTABLE_H

#include <QDateTime>
#include <QWidget>

#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>

#include "mainwindow.h"

namespace Ui {
class FormForExcelTable;
}

class FormForExcelTable : public QWidget
{
    Q_OBJECT

public:
    explicit FormForExcelTable(MainWindow *mwPtr, QWidget *parent = nullptr);
    ~FormForExcelTable();
    void setListData(int id, QString day, QTime time, QTime endtime, QString FileAddress);

signals:
    void itemsChanged();

private slots:
    void on_DeleteBtn_clicked();

private:
    Ui::FormForExcelTable *ui;
    MainWindow *mainWindowPtr;
};

#endif // FORMFOREXCELTABLE_H
