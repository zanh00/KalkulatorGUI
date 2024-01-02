#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"
#include <vector>
#include <string>
#include "Element.h"
#include "defines.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindowClass; };
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void displayElement(std::string element);
    ~MainWindow();

private:
    Ui::MainWindowClass *ui;

    std::vector<Element>* numbers = new std::vector<Element>();
    std::vector<char>* operators = new std::vector<char>();
    std::string tempNumber;
    int currentPriority;
    int currentBranch[5] = {0, 0, 0, 0, 0};
    bool lastCalledOperator = true;
    bool mustCallOperator = false; //after close bracket operator must be called; additionaly it insures that last element in brackets gets proper priority -
    // since priority decreases when close breacket is pressed but priority assign (to the element) happens after operator call (after close bracket)

    void operatorCalled(char op);

public slots:
    void on_number0_clicked();
    void on_number1_clicked();
    void on_number2_clicked();
    void on_number3_clicked();
    void on_number4_clicked();
    void on_number5_clicked();
    void on_number6_clicked();
    void on_number7_clicked();
    void on_number8_clicked();
    void on_number9_clicked();
    void on_plusButton_clicked();
    void on_minusButton_clicked();
    void on_multipButton_clicked();
    void on_divButton_clicked();
    void on_resultButton_clicked();
    void on_decimalPoint_clicked();
    void on_clearButton_clicked();
    void on_openBracket_clicked();
    void on_closeBracket_clicked();

};


