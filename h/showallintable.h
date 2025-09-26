#ifndef SHOWALLINTABLE_H
#define SHOWALLINTABLE_H

#include <QMainWindow>
#include <QString>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QScrollBar>
#include <QTimer>
#include <QScreen>
#include <QDebug>
#include <QPropertyAnimation>
#include <QPainter>

#include <xlsxdocument.h>
#include <xlsxcell.h>

namespace Ui {
class ShowAllInTable;
}

class ShowAllInTable : public QMainWindow
{
    Q_OBJECT

public:
    explicit ShowAllInTable(QWidget *parent = nullptr);
    ~ShowAllInTable();
    void runExcel(const QString &fileformat);
    void startAutoScroll();
    void set_file_name_on_board(const QString &filename);
    QPropertyAnimation *Animation;
    QPixmap pix;

private slots:
    void autoScroll();
    void resizeColumn(int column);
    void resizeRow(int row);
    void restartAnimation();

private:
    Ui::ShowAllInTable *ui;
    QTimer *timer;
};

#endif // SHOWALLINTABLE_H
