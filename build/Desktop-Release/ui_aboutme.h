/********************************************************************************
** Form generated from reading UI file 'aboutme.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTME_H
#define UI_ABOUTME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AboutMe
{
public:
    QLabel *GitLink;
    QLabel *lbl_Image;

    void setupUi(QDialog *AboutMe)
    {
        if (AboutMe->objectName().isEmpty())
            AboutMe->setObjectName(QString::fromUtf8("AboutMe"));
        AboutMe->resize(465, 485);
        GitLink = new QLabel(AboutMe);
        GitLink->setObjectName(QString::fromUtf8("GitLink"));
        GitLink->setGeometry(QRect(10, 420, 441, 61));
        QFont font;
        font.setPointSize(16);
        GitLink->setFont(font);
        lbl_Image = new QLabel(AboutMe);
        lbl_Image->setObjectName(QString::fromUtf8("lbl_Image"));
        lbl_Image->setGeometry(QRect(10, 10, 441, 421));
        lbl_Image->setPixmap(QPixmap(QString::fromUtf8(":/IconApp/Picture_Profile.png")));

        retranslateUi(AboutMe);

        QMetaObject::connectSlotsByName(AboutMe);
    } // setupUi

    void retranslateUi(QDialog *AboutMe)
    {
        AboutMe->setWindowTitle(QApplication::translate("AboutMe", "Developer: Furry Foxy", nullptr));
        GitLink->setText(QApplication::translate("AboutMe", "My Github Link", nullptr));
        lbl_Image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutMe: public Ui_AboutMe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTME_H
