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
};
