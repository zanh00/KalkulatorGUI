/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *number7;
    QPushButton *number8;
    QPushButton *number9;
    QPushButton *deleteButton;
    QPushButton *clearButton;
    QPushButton *number4;
    QPushButton *number5;
    QPushButton *number6;
    QPushButton *multipButton;
    QPushButton *divButton;
    QPushButton *number1;
    QPushButton *number2;
    QPushButton *number3;
    QPushButton *minusButton;
    QPushButton *plusButton;
    QPushButton *number0;
    QPushButton *decimalPoint;
    QPushButton *openBracket;
    QPushButton *resultButton;
    QPushButton *closeBracket;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName("MainWindowClass");
        MainWindowClass->resize(657, 708);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName("centralWidget");
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(144, 240, 421, 211));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        number7 = new QPushButton(layoutWidget);
        number7->setObjectName("number7");

        gridLayout->addWidget(number7, 0, 0, 1, 1);

        number8 = new QPushButton(layoutWidget);
        number8->setObjectName("number8");

        gridLayout->addWidget(number8, 0, 1, 1, 1);

        number9 = new QPushButton(layoutWidget);
        number9->setObjectName("number9");

        gridLayout->addWidget(number9, 0, 2, 1, 1);

        deleteButton = new QPushButton(layoutWidget);
        deleteButton->setObjectName("deleteButton");

        gridLayout->addWidget(deleteButton, 0, 3, 1, 1);

        clearButton = new QPushButton(layoutWidget);
        clearButton->setObjectName("clearButton");
        clearButton->setIconSize(QSize(16, 16));

        gridLayout->addWidget(clearButton, 0, 4, 1, 1);

        number4 = new QPushButton(layoutWidget);
        number4->setObjectName("number4");

        gridLayout->addWidget(number4, 1, 0, 1, 1);

        number5 = new QPushButton(layoutWidget);
        number5->setObjectName("number5");

        gridLayout->addWidget(number5, 1, 1, 1, 1);

        number6 = new QPushButton(layoutWidget);
        number6->setObjectName("number6");

        gridLayout->addWidget(number6, 1, 2, 1, 1);

        multipButton = new QPushButton(layoutWidget);
        multipButton->setObjectName("multipButton");

        gridLayout->addWidget(multipButton, 1, 3, 1, 1);

        divButton = new QPushButton(layoutWidget);
        divButton->setObjectName("divButton");

        gridLayout->addWidget(divButton, 1, 4, 1, 1);

        number1 = new QPushButton(layoutWidget);
        number1->setObjectName("number1");
        QFont font;
        font.setBold(true);
        number1->setFont(font);

        gridLayout->addWidget(number1, 2, 0, 1, 1);

        number2 = new QPushButton(layoutWidget);
        number2->setObjectName("number2");

        gridLayout->addWidget(number2, 2, 1, 1, 1);

        number3 = new QPushButton(layoutWidget);
        number3->setObjectName("number3");

        gridLayout->addWidget(number3, 2, 2, 1, 1);

        minusButton = new QPushButton(layoutWidget);
        minusButton->setObjectName("minusButton");

        gridLayout->addWidget(minusButton, 2, 3, 1, 1);

        plusButton = new QPushButton(layoutWidget);
        plusButton->setObjectName("plusButton");

        gridLayout->addWidget(plusButton, 2, 4, 1, 1);

        number0 = new QPushButton(layoutWidget);
        number0->setObjectName("number0");
        number0->setFont(font);

        gridLayout->addWidget(number0, 3, 0, 1, 1);

        decimalPoint = new QPushButton(layoutWidget);
        decimalPoint->setObjectName("decimalPoint");
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        decimalPoint->setFont(font1);

        gridLayout->addWidget(decimalPoint, 3, 1, 1, 1);

        openBracket = new QPushButton(layoutWidget);
        openBracket->setObjectName("openBracket");

        gridLayout->addWidget(openBracket, 3, 2, 1, 1);

        resultButton = new QPushButton(layoutWidget);
        resultButton->setObjectName("resultButton");

        gridLayout->addWidget(resultButton, 3, 3, 1, 1);

        closeBracket = new QPushButton(layoutWidget);
        closeBracket->setObjectName("closeBracket");

        gridLayout->addWidget(closeBracket, 3, 4, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 200, 381, 21));
        label->setLayoutDirection(Qt::RightToLeft);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 657, 22));
        MainWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindowClass);
        mainToolBar->setObjectName("mainToolBar");
        MainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName("statusBar");
        MainWindowClass->setStatusBar(statusBar);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QCoreApplication::translate("MainWindowClass", "MainWindow", nullptr));
        number7->setText(QCoreApplication::translate("MainWindowClass", "7", nullptr));
        number8->setText(QCoreApplication::translate("MainWindowClass", "8", nullptr));
        number9->setText(QCoreApplication::translate("MainWindowClass", "9", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindowClass", "DEL", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindowClass", "AC", nullptr));
        number4->setText(QCoreApplication::translate("MainWindowClass", "4", nullptr));
        number5->setText(QCoreApplication::translate("MainWindowClass", "5", nullptr));
        number6->setText(QCoreApplication::translate("MainWindowClass", "6", nullptr));
        multipButton->setText(QCoreApplication::translate("MainWindowClass", "X", nullptr));
        divButton->setText(QCoreApplication::translate("MainWindowClass", "\303\267", nullptr));
        number1->setText(QCoreApplication::translate("MainWindowClass", "1", nullptr));
        number2->setText(QCoreApplication::translate("MainWindowClass", "2", nullptr));
        number3->setText(QCoreApplication::translate("MainWindowClass", "3", nullptr));
        minusButton->setText(QCoreApplication::translate("MainWindowClass", "-", nullptr));
        plusButton->setText(QCoreApplication::translate("MainWindowClass", "+", nullptr));
        number0->setText(QCoreApplication::translate("MainWindowClass", "0", nullptr));
        decimalPoint->setText(QCoreApplication::translate("MainWindowClass", ".", nullptr));
        openBracket->setText(QCoreApplication::translate("MainWindowClass", "(", nullptr));
        resultButton->setText(QCoreApplication::translate("MainWindowClass", "=", nullptr));
        closeBracket->setText(QCoreApplication::translate("MainWindowClass", ")", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
