#include "aboutme.h"
#include "ui_aboutme.h"

AboutMe::AboutMe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutMe)
{
    setFixedSize(465,485);
    ui->setupUi(this);
    ui->GitLink->setOpenExternalLinks(true);
    ui->GitLink->setText("<a href='https://github.com/furryfoxyofficial'> \
    Developed by love, for user of app</a>");
    ui->lbl_Image->setScaledContents(true);
}

AboutMe::~AboutMe()
{
    delete ui;
}
