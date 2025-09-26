/********************************************************************************
** Form generated from reading UI file 'showallintable.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWALLINTABLE_H
#define UI_SHOWALLINTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowAllInTable
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *banner;
    QLabel *FileName;
    QTableView *ExcelTable;
    QLabel *image;

    void setupUi(QMainWindow *ShowAllInTable)
    {
        if (ShowAllInTable->objectName().isEmpty())
            ShowAllInTable->setObjectName(QString::fromUtf8("ShowAllInTable"));
        ShowAllInTable->resize(885, 603);
        ShowAllInTable->setStyleSheet(QString::fromUtf8("background-image: url(:/IconApp/excel_bg.jpg);"));
        centralwidget = new QWidget(ShowAllInTable);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        banner = new QLabel(centralwidget);
        banner->setObjectName(QString::fromUtf8("banner"));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        banner->setFont(font);
        banner->setStyleSheet(QString::fromUtf8("color: White;\n"
"background:none;"));

        verticalLayout->addWidget(banner);

        FileName = new QLabel(centralwidget);
        FileName->setObjectName(QString::fromUtf8("FileName"));
        QFont font1;
        font1.setPointSize(35);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(true);
        FileName->setFont(font1);
        FileName->setAutoFillBackground(false);
        FileName->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        FileName->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(FileName);

        ExcelTable = new QTableView(centralwidget);
        ExcelTable->setObjectName(QString::fromUtf8("ExcelTable"));
        QFont font2;
        ExcelTable->setFont(font2);
        ExcelTable->setStyleSheet(QString::fromUtf8("background: white;\n"
"font-size: 24px;"));

        verticalLayout->addWidget(ExcelTable);


        gridLayout->addLayout(verticalLayout, 1, 2, 1, 1);

        image = new QLabel(centralwidget);
        image->setObjectName(QString::fromUtf8("image"));
        image->setStyleSheet(QString::fromUtf8("background: none;"));

        gridLayout->addWidget(image, 1, 0, 1, 1);

        ShowAllInTable->setCentralWidget(centralwidget);

        retranslateUi(ShowAllInTable);

        QMetaObject::connectSlotsByName(ShowAllInTable);
    } // setupUi

    void retranslateUi(QMainWindow *ShowAllInTable)
    {
        ShowAllInTable->setWindowTitle(QString());
        banner->setText(QApplication::translate("ShowAllInTable", "TextLabel", nullptr));
        FileName->setText(QApplication::translate("ShowAllInTable", "File Name", nullptr));
        image->setText(QApplication::translate("ShowAllInTable", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowAllInTable: public Ui_ShowAllInTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWALLINTABLE_H
