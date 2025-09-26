#include "formforexceltable.h"
#include "ui_formforexceltable.h"

FormForExcelTable::FormForExcelTable(MainWindow *mwPtr, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormForExcelTable)
    , mainWindowPtr(mwPtr)
{
    ui->setupUi(this);
}

FormForExcelTable::~FormForExcelTable()
{
    delete ui;
}

void FormForExcelTable::setListData(int id, QString day, QTime time, QTime endtime, QString FileAddress)
{
    ui->IdLbl->setText(QString::number(id));
    ui->DayLbl->setText(day);
    ui->TimeLbl->setText(time.toString());
    ui->EndTimeLbl->setText(endtime.toString());
    ui->FileNameLbl->setText(FileAddress);
}


void FormForExcelTable::on_DeleteBtn_clicked()
{
    auto &items = mainWindowPtr->listOfItems;
    for (auto it = items.begin(); it != items.end(); )
    {
        int id = (*it)->Id;

        QString queryStr = QString("DELETE FROM infotable WHERE id = %1").arg(id);
        QSqlQuery query(mainWindowPtr->mydb);

        if (!query.exec(queryStr)) {
            QMessageBox::critical(this, "خطا", "نمیتوان شناسه را در دیتابیس پیدا کرد");
            return;
        }

        it = items.erase(it); // erase returns the next valid iterator
    }
    emit itemsChanged();
}
