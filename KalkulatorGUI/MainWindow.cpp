#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowClass())
{
    ui->setupUi(this);
    currentPriority = 0;
}

void MainWindow::displayElement(std::string element)
{
    QString currentText = ui->label->text();
    currentText += element;
    ui->label->setText(currentText);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete numbers;
    delete operators;

}

void MainWindow::on_number0_clicked()
{
    if(!mustCallOperator)
    {
        tempNumber.push_back('0');
        displayElement("0");
        lastCalledOperator = false;
    }    
}

void MainWindow::on_number1_clicked()
{
    if(!mustCallOperator)
    {
        tempNumber.push_back('1');
        displayElement("1");
        lastCalledOperator = false;
    }
}

void MainWindow::on_number2_clicked()
{
    if(!mustCallOperator)
    {
        tempNumber.push_back('2');
        displayElement("2");
        lastCalledOperator = false;
    }
}

void MainWindow::on_number3_clicked()
{
    if(!mustCallOperator)
    {
        tempNumber.push_back('3');
        displayElement("3");
        lastCalledOperator = false;
    }
}

void MainWindow::on_number4_clicked()
{
    if(!mustCallOperator)
    {
        tempNumber.push_back('4');
        displayElement("4");
        lastCalledOperator = false;
    }
}

void MainWindow::on_number5_clicked()
{
    if(!mustCallOperator)
    {
        tempNumber.push_back('5');
        displayElement("5");
        lastCalledOperator = false;
    }
}

void MainWindow::on_number6_clicked()
{
    if(!mustCallOperator)
    {
        tempNumber.push_back('6');
        displayElement("6");
        lastCalledOperator = false;
    }
}

void MainWindow::on_number7_clicked()
{
    if(!mustCallOperator)
    {
        tempNumber.push_back('7');
        displayElement("7");
        lastCalledOperator = false;
    }
}

void MainWindow::on_number8_clicked()
{
    if(!mustCallOperator)
    {
        tempNumber.push_back('8');
        displayElement("8");
        lastCalledOperator = false;
    }
}

void MainWindow::on_number9_clicked()
{
    if(!mustCallOperator)
    {
        tempNumber.push_back('9');
        displayElement("9");
        lastCalledOperator = false;
    }
}

void MainWindow::on_plusButton_clicked()
{
    if(tempNumber != "")
    {
        displayElement("+");
        operatorCalled('+');
        mustCallOperator = false;
    }   
}

void MainWindow::on_minusButton_clicked()
{
    if(tempNumber != "")
    {
        displayElement("-");
        operatorCalled('-');
        mustCallOperator = false;
    }
}

void MainWindow::on_multipButton_clicked()
{
    if(tempNumber != "")
    {
        displayElement("*");
        operatorCalled('*');
        mustCallOperator = false;
    }
}

void MainWindow::on_divButton_clicked()
{
    if(tempNumber != "")
    {
        displayElement("/");
        operatorCalled('/');
        mustCallOperator = false;
    }
}

void MainWindow::on_resultButton_clicked()
{
    if(mustCallOperator)
    {
        numbers->push_back(Element(std::stof(tempNumber), currentPriority + 1, currentBranch[currentPriority + 1]));
        mustCallOperator = false;
    }
    else
    {
        numbers->push_back(Element(std::stof(tempNumber), currentPriority, currentBranch[currentPriority]));
    }
    tempNumber.clear();
    float result = calculateResult(numbers, operators);
    std::string r = std::to_string(result);
    QString rez = QString::fromStdString(r);
    ui->label->setText(rez);
}

void MainWindow::on_decimalPoint_clicked()
{
    tempNumber.push_back('.');
    displayElement(".");
}

void MainWindow::on_clearButton_clicked()
{
    numbers->clear();
    operators->clear();
    ui->label->clear();
    tempNumber.clear();
    currentPriority = 0;
    for (int i = 0; i < 5; i++)
    {
        currentBranch[i] = 0;
    }
}

void MainWindow::on_closeBracket_clicked()
{
    if((!lastCalledOperator) && (currentPriority > 0)) 
    {
        currentPriority --;
        displayElement(")");
        mustCallOperator = true;
    }
}

void MainWindow::on_openBracket_clicked()
{
    if((lastCalledOperator) && (currentPriority < 5))
    {
        currentPriority ++;
        currentBranch[currentPriority] ++;
        displayElement("(");
    }
}

void MainWindow::operatorCalled(char op)
{
    if(mustCallOperator)
    {
        numbers->push_back(Element(std::stof(tempNumber), currentPriority + 1, currentBranch[currentPriority + 1]));
        mustCallOperator = false;
    }
    else
    {
        numbers->push_back(Element(std::stof(tempNumber), currentPriority, currentBranch[currentPriority]));
    }
    operators->push_back(op);
    tempNumber.clear();
    lastCalledOperator = true;
}
