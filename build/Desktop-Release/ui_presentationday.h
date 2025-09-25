/********************************************************************************
** Form generated from reading UI file 'presentationday.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESENTATIONDAY_H
#define UI_PRESENTATIONDAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PresentationDay
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *Day;
    QTimeEdit *Time;
    QTimeEdit *EndTime;
    QHBoxLayout *AddressBar;
    QPushButton *Addressbtn;
    QLineEdit *Addresstxt;
    QPushButton *Okbtn;
    QPushButton *Cancelbtn;

    void setupUi(QDialog *PresentationDay)
    {
        if (PresentationDay->objectName().isEmpty())
            PresentationDay->setObjectName(QString::fromUtf8("PresentationDay"));
        PresentationDay->resize(650, 222);
        verticalLayout = new QVBoxLayout(PresentationDay);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Day = new QComboBox(PresentationDay);
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->setObjectName(QString::fromUtf8("Day"));
        Day->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setPointSize(14);
        Day->setFont(font);

        verticalLayout->addWidget(Day);

        Time = new QTimeEdit(PresentationDay);
        Time->setObjectName(QString::fromUtf8("Time"));
        Time->setFont(font);

        verticalLayout->addWidget(Time);

        EndTime = new QTimeEdit(PresentationDay);
        EndTime->setObjectName(QString::fromUtf8("EndTime"));
        EndTime->setFont(font);
        EndTime->setTime(QTime(20, 0, 0));

        verticalLayout->addWidget(EndTime);

        AddressBar = new QHBoxLayout();
        AddressBar->setObjectName(QString::fromUtf8("AddressBar"));
        Addressbtn = new QPushButton(PresentationDay);
        Addressbtn->setObjectName(QString::fromUtf8("Addressbtn"));
        Addressbtn->setMaximumSize(QSize(50, 30));
        QFont font1;
        font1.setPointSize(11);
        Addressbtn->setFont(font1);

        AddressBar->addWidget(Addressbtn);

        Addresstxt = new QLineEdit(PresentationDay);
        Addresstxt->setObjectName(QString::fromUtf8("Addresstxt"));
        Addresstxt->setMaximumSize(QSize(16777215, 30));
        QFont font2;
        font2.setPointSize(15);
        Addresstxt->setFont(font2);

        AddressBar->addWidget(Addresstxt);


        verticalLayout->addLayout(AddressBar);

        Okbtn = new QPushButton(PresentationDay);
        Okbtn->setObjectName(QString::fromUtf8("Okbtn"));

        verticalLayout->addWidget(Okbtn);

        Cancelbtn = new QPushButton(PresentationDay);
        Cancelbtn->setObjectName(QString::fromUtf8("Cancelbtn"));

        verticalLayout->addWidget(Cancelbtn);


        retranslateUi(PresentationDay);

        QMetaObject::connectSlotsByName(PresentationDay);
    } // setupUi

    void retranslateUi(QDialog *PresentationDay)
    {
        PresentationDay->setWindowTitle(QApplication::translate("PresentationDay", "\330\247\330\266\330\247\331\201\331\207 \332\251\330\261\330\257\331\206 \330\250\331\207 \331\204\333\214\330\263\330\252", nullptr));
        Day->setItemText(0, QApplication::translate("PresentationDay", "\330\264\331\206\330\250\331\207", nullptr));
        Day->setItemText(1, QApplication::translate("PresentationDay", "\333\214\332\251\330\264\331\206\330\250\331\207", nullptr));
        Day->setItemText(2, QApplication::translate("PresentationDay", "\330\257\331\210\330\264\331\206\330\250\331\207", nullptr));
        Day->setItemText(3, QApplication::translate("PresentationDay", "\330\263\331\207\330\264\331\206\330\250\331\207", nullptr));
        Day->setItemText(4, QApplication::translate("PresentationDay", "\332\206\331\207\330\247\330\261\330\264\331\206\330\250\331\207", nullptr));
        Day->setItemText(5, QApplication::translate("PresentationDay", "\331\276\331\206\330\254\330\264\331\206\330\250\331\207", nullptr));
        Day->setItemText(6, QApplication::translate("PresentationDay", "\330\254\331\205\330\271\331\207", nullptr));

        Time->setDisplayFormat(QApplication::translate("PresentationDay", "hh:mm:ss AP", nullptr));
        EndTime->setDisplayFormat(QApplication::translate("PresentationDay", "hh:mm:ss AP", nullptr));
        Addressbtn->setText(QApplication::translate("PresentationDay", "...", nullptr));
        Okbtn->setText(QApplication::translate("PresentationDay", "\330\253\330\250\330\252 \330\247\330\267\331\204\330\247\330\271\330\247\330\252", nullptr));
        Cancelbtn->setText(QApplication::translate("PresentationDay", "\330\247\331\206\330\265\330\261\330\247\331\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PresentationDay: public Ui_PresentationDay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESENTATIONDAY_H
