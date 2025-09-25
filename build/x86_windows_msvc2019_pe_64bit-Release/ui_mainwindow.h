/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *AboutBtn;
    QAction *autoshutdownbtn;
    QAction *actiontest_window;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *buttonsArea;
    QPushButton *SaveBtn;
    QPushButton *AddAFile;
    QScrollArea *ScrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QVBoxLayout *VerticalSpaceBox;
    QSpacerItem *verticalSplitor;
    QMenuBar *menuBar;
    QMenu *About;
    QMenu *menu;
    QMenu *menutest;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(874, 603);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/IconApp/App-Icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(1.000000000000000);
        MainWindow->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        AboutBtn = new QAction(MainWindow);
        AboutBtn->setObjectName(QString::fromUtf8("AboutBtn"));
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("QIcon::ThemeIcon::ContactNew")));
        AboutBtn->setIcon(icon1);
        autoshutdownbtn = new QAction(MainWindow);
        autoshutdownbtn->setObjectName(QString::fromUtf8("autoshutdownbtn"));
        autoshutdownbtn->setCheckable(true);
        actiontest_window = new QAction(MainWindow);
        actiontest_window->setObjectName(QString::fromUtf8("actiontest_window"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonsArea = new QHBoxLayout();
        buttonsArea->setObjectName(QString::fromUtf8("buttonsArea"));
        SaveBtn = new QPushButton(centralwidget);
        SaveBtn->setObjectName(QString::fromUtf8("SaveBtn"));
        SaveBtn->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setPointSize(13);
        SaveBtn->setFont(font);

        buttonsArea->addWidget(SaveBtn);

        AddAFile = new QPushButton(centralwidget);
        AddAFile->setObjectName(QString::fromUtf8("AddAFile"));
        AddAFile->setMinimumSize(QSize(0, 50));
        AddAFile->setMaximumSize(QSize(50, 16777215));
        QFont font1;
        font1.setPointSize(24);
        AddAFile->setFont(font1);

        buttonsArea->addWidget(AddAFile);


        gridLayout->addLayout(buttonsArea, 1, 0, 1, 1);

        ScrollArea = new QScrollArea(centralwidget);
        ScrollArea->setObjectName(QString::fromUtf8("ScrollArea"));
        ScrollArea->setAutoFillBackground(true);
        ScrollArea->setStyleSheet(QString::fromUtf8("background-image: url(:/IconApp/App-Logo.png);"));
        ScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 854, 503));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        VerticalSpaceBox = new QVBoxLayout();
        VerticalSpaceBox->setObjectName(QString::fromUtf8("VerticalSpaceBox"));

        gridLayout_2->addLayout(VerticalSpaceBox, 0, 0, 1, 1);

        verticalSplitor = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSplitor, 1, 0, 1, 1);

        ScrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(ScrollArea, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 874, 21));
        About = new QMenu(menuBar);
        About->setObjectName(QString::fromUtf8("About"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menutest = new QMenu(menuBar);
        menutest->setObjectName(QString::fromUtf8("menutest"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(About->menuAction());
        menuBar->addAction(menutest->menuAction());
        About->addAction(AboutBtn);
        menu->addAction(autoshutdownbtn);
        menutest->addAction(actiontest_window);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\330\252\330\247\330\250\331\204\331\210 \330\247\330\271\331\204\330\247\331\206\330\247\330\252", nullptr));
        AboutBtn->setText(QApplication::translate("MainWindow", "\330\252\331\210\330\263\330\271\331\207 \330\257\331\207\331\206\330\257\331\207", nullptr));
        autoshutdownbtn->setText(QApplication::translate("MainWindow", "\331\201\330\271\330\247\331\204 \330\250\330\247\330\264\330\257", nullptr));
        actiontest_window->setText(QApplication::translate("MainWindow", "test window", nullptr));
        SaveBtn->setText(QApplication::translate("MainWindow", "\330\260\330\256\333\214\330\261\331\207 \330\247\330\267\331\204\330\247\330\271\330\247\330\252", nullptr));
        AddAFile->setText(QApplication::translate("MainWindow", "+", nullptr));
        About->setTitle(QApplication::translate("MainWindow", "\330\257\330\261\330\250\330\247\330\261\331\207 ", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\330\256\330\247\331\205\331\210\330\264\333\214 \330\256\331\210\330\257\332\251\330\247\330\261", nullptr));
        menutest->setTitle(QApplication::translate("MainWindow", "test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
