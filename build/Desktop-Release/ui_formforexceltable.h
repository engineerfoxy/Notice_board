/********************************************************************************
** Form generated from reading UI file 'formforexceltable.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMFOREXCELTABLE_H
#define UI_FORMFOREXCELTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormForExcelTable
{
public:
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *layoutItem;
    QLabel *IdLbl;
    QLabel *DayLbl;
    QLabel *TimeLbl;
    QLabel *EndTimeLbl;
    QLabel *FileNameLbl;
    QPushButton *DeleteBtn;

    void setupUi(QWidget *FormForExcelTable)
    {
        if (FormForExcelTable->objectName().isEmpty())
            FormForExcelTable->setObjectName(QString::fromUtf8("FormForExcelTable"));
        FormForExcelTable->resize(747, 83);
        horizontalLayout = new QHBoxLayout(FormForExcelTable);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        layoutItem = new QHBoxLayout();
        layoutItem->setObjectName(QString::fromUtf8("layoutItem"));
        IdLbl = new QLabel(FormForExcelTable);
        IdLbl->setObjectName(QString::fromUtf8("IdLbl"));
        IdLbl->setMaximumSize(QSize(80, 16777215));
        QFont font;
        font.setPointSize(20);
        IdLbl->setFont(font);
        IdLbl->setStyleSheet(QString::fromUtf8("background: none;"));

        layoutItem->addWidget(IdLbl);

        DayLbl = new QLabel(FormForExcelTable);
        DayLbl->setObjectName(QString::fromUtf8("DayLbl"));
        DayLbl->setMaximumSize(QSize(100, 16777215));
        DayLbl->setFont(font);
        DayLbl->setStyleSheet(QString::fromUtf8("background: none;"));

        layoutItem->addWidget(DayLbl);

        TimeLbl = new QLabel(FormForExcelTable);
        TimeLbl->setObjectName(QString::fromUtf8("TimeLbl"));
        TimeLbl->setMaximumSize(QSize(130, 16777215));
        TimeLbl->setFont(font);
        TimeLbl->setStyleSheet(QString::fromUtf8("background: none;"));

        layoutItem->addWidget(TimeLbl);

        EndTimeLbl = new QLabel(FormForExcelTable);
        EndTimeLbl->setObjectName(QString::fromUtf8("EndTimeLbl"));
        EndTimeLbl->setMaximumSize(QSize(130, 16777215));
        EndTimeLbl->setFont(font);
        EndTimeLbl->setStyleSheet(QString::fromUtf8("background: none;"));

        layoutItem->addWidget(EndTimeLbl);

        FileNameLbl = new QLabel(FormForExcelTable);
        FileNameLbl->setObjectName(QString::fromUtf8("FileNameLbl"));
        FileNameLbl->setFont(font);
        FileNameLbl->setStyleSheet(QString::fromUtf8("background: none;"));

        layoutItem->addWidget(FileNameLbl);

        DeleteBtn = new QPushButton(FormForExcelTable);
        DeleteBtn->setObjectName(QString::fromUtf8("DeleteBtn"));
        DeleteBtn->setMaximumSize(QSize(60, 50));
        QFont font1;
        font1.setPointSize(14);
        DeleteBtn->setFont(font1);

        layoutItem->addWidget(DeleteBtn);


        horizontalLayout->addLayout(layoutItem);


        retranslateUi(FormForExcelTable);

        QMetaObject::connectSlotsByName(FormForExcelTable);
    } // setupUi

    void retranslateUi(QWidget *FormForExcelTable)
    {
        FormForExcelTable->setWindowTitle(QApplication::translate("FormForExcelTable", "Form", nullptr));
        IdLbl->setText(QApplication::translate("FormForExcelTable", "ID", nullptr));
        DayLbl->setText(QApplication::translate("FormForExcelTable", "Day", nullptr));
        TimeLbl->setText(QApplication::translate("FormForExcelTable", "Time", nullptr));
        EndTimeLbl->setText(QApplication::translate("FormForExcelTable", "EndTime", nullptr));
        FileNameLbl->setText(QApplication::translate("FormForExcelTable", "FileName", nullptr));
        DeleteBtn->setText(QApplication::translate("FormForExcelTable", "\330\255\330\260\331\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormForExcelTable: public Ui_FormForExcelTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMFOREXCELTABLE_H
