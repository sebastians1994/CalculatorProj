#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CalculatorProj.h"

class CalculatorProj : public QMainWindow
{
    Q_OBJECT

public:
    CalculatorProj(QWidget *parent = Q_NULLPTR);
    ~CalculatorProj();

private:
    Ui::CalculatorProjClass *ui;

private slots:
    void digit_pressed();
    void on_pushButton_Decimal_released();
    void unary_operation_pressed();
    void on_pushButton_clear_released();
    void on_pushButton_Equals_released();
    void binary_operation_pressed();
};
