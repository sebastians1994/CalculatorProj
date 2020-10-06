#include "CalculatorProj.h"




double firstNum;
bool userisTypingSecondNumber = false;

CalculatorProj::CalculatorProj(QWidget *parent)
    : QMainWindow(parent) , ui(new Ui::CalculatorProjClass)
{
    ui->setupUi(this);

    connect(ui->pushButton_0, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_1, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_2, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_3, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_4, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_5, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_6, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_7, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_8, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_9, SIGNAL(released()), this, SLOT(digit_pressed()));

    connect(ui->pushButton_ChangeSign, SIGNAL(released()), this, SLOT(unary_operation_pressed()));

    connect(ui->pushButton_percent, SIGNAL(released()), this, SLOT(unary_operation_pressed()));
    connect(ui->pushButton_Add, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
    connect(ui->pushButton_subtract, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
    connect(ui->pushButton_Multiply, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
    connect(ui->pushButton_Divide, SIGNAL(released()), this, SLOT(binary_operation_pressed()));

    ui->pushButton_Add->setCheckable(true);
    ui->pushButton_subtract->setCheckable(true);
    ui->pushButton_Multiply->setCheckable(true);
    ui->pushButton_Divide->setCheckable(true);
 
}

CalculatorProj::~CalculatorProj()
{
  delete ui;
}

void CalculatorProj::digit_pressed()
{
    QPushButton* button = (QPushButton*)sender();

    double labelNumber;
    QString newLabel;

    if ((ui->pushButton_Add->isChecked() || ui->pushButton_subtract->isChecked() || ui->pushButton_Multiply->isChecked() ||
        ui->pushButton_Divide->isChecked()) && (!userisTypingSecondNumber))
    {
        labelNumber =  button->text().toDouble();
        userisTypingSecondNumber = true;

        newLabel = QString::number(labelNumber, 'g', 15);
    }
    
    else
    {
        if (ui->label->text().contains('.') && button->text() == "0")
        {
            newLabel = ui->label->text() + button->text();
        }
        else
        {
            labelNumber = (ui->label->text() + button->text()).toDouble();
            newLabel = QString::number(labelNumber, 'g', 15);
        }
       
    }

 
  


    ui->label->setText(newLabel);
}

void CalculatorProj::on_pushButton_Decimal_released()
{
    ui->label->setText(ui->label->text() + ".");
}

void CalculatorProj::unary_operation_pressed()
{
    double labelNumber;
    QString newLabel;

    QPushButton * button = (QPushButton*) sender();
    
    if (button->text() == "+/-")
        {
        labelNumber = ui->label->text().toDouble();
        labelNumber = labelNumber * -1;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
        }

    if (button->text() == "%")
    {
        labelNumber = ui->label->text().toDouble();
        labelNumber = labelNumber * 0.01;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
    }
}

void CalculatorProj::on_pushButton_clear_released()
{
    ui->pushButton_Add->setChecked(false);
    ui->pushButton_subtract->setChecked(false);
    ui->pushButton_Multiply->setChecked(false);
    ui->pushButton_Divide->setChecked(false);

    userisTypingSecondNumber = false;

    ui->label->setText("0");
}

void CalculatorProj::on_pushButton_Equals_released()
{
    double labelNumber, secondNum;

    secondNum = ui->label->text().toDouble();
    QString newLabel;
    
    if (ui->pushButton_Add->isChecked())
    {
        labelNumber = firstNum + secondNum;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
        ui->pushButton_Add->setChecked(false);
    }
    
    else if (ui->pushButton_subtract->isChecked())
    {
        labelNumber = firstNum - secondNum;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
        ui->pushButton_subtract->setChecked(false);
    }

    else if (ui->pushButton_Multiply->isChecked())
    {
        labelNumber = firstNum * secondNum;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
        ui->pushButton_Multiply->setChecked(false);
    }

    else if (ui->pushButton_Divide->isChecked())
    {
        labelNumber = firstNum / secondNum;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
        ui->pushButton_Divide->setChecked(false);
    }

    userisTypingSecondNumber = false;
}

void CalculatorProj::binary_operation_pressed()
{
    QPushButton* button = (QPushButton*)sender();

    firstNum = ui->label->text().toDouble();

    button->setChecked(true);
}