/********************************************************************************
** Form generated from reading UI file 'CalculatorProj.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORPROJ_H
#define UI_CALCULATORPROJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorProjClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_ChangeSign;
    QPushButton *pushButton_Divide;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_8;
    QPushButton *pushButton_Multiply;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_3;
    QPushButton *pushButton_Add;
    QPushButton *pushButton_5;
    QPushButton *pushButton_subtract;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_1;
    QPushButton *pushButton_6;
    QPushButton *pushButton_0;
    QPushButton *pushButton_Decimal;
    QPushButton *pushButton_Equals;

    void setupUi(QMainWindow *CalculatorProjClass)
    {
        if (CalculatorProjClass->objectName().isEmpty())
            CalculatorProjClass->setObjectName(QString::fromUtf8("CalculatorProjClass"));
        CalculatorProjClass->resize(241, 382);
        CalculatorProjClass->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color:white;"));
        centralWidget = new QWidget(CalculatorProjClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 241, 61));
        QFont font;
        font.setPointSize(19);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(0, 80, 61, 61));
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(215,215,215);\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_ChangeSign = new QPushButton(centralWidget);
        pushButton_ChangeSign->setObjectName(QString::fromUtf8("pushButton_ChangeSign"));
        pushButton_ChangeSign->setGeometry(QRect(60, 80, 61, 61));
        pushButton_ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(215,215,215);\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_Divide = new QPushButton(centralWidget);
        pushButton_Divide->setObjectName(QString::fromUtf8("pushButton_Divide"));
        pushButton_Divide->setGeometry(QRect(180, 80, 61, 61));
        pushButton_Divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        pushButton_percent = new QPushButton(centralWidget);
        pushButton_percent->setObjectName(QString::fromUtf8("pushButton_percent"));
        pushButton_percent->setGeometry(QRect(120, 80, 61, 61));
        pushButton_percent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(215,215,215);\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(60, 140, 61, 61));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_Multiply = new QPushButton(centralWidget);
        pushButton_Multiply->setObjectName(QString::fromUtf8("pushButton_Multiply"));
        pushButton_Multiply->setGeometry(QRect(180, 140, 61, 61));
        pushButton_Multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 140, 61, 61));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(120, 140, 61, 61));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 260, 61, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_Add = new QPushButton(centralWidget);
        pushButton_Add->setObjectName(QString::fromUtf8("pushButton_Add"));
        pushButton_Add->setGeometry(QRect(180, 260, 61, 61));
        pushButton_Add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(60, 200, 61, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_subtract = new QPushButton(centralWidget);
        pushButton_subtract->setObjectName(QString::fromUtf8("pushButton_subtract"));
        pushButton_subtract->setGeometry(QRect(180, 200, 61, 61));
        pushButton_subtract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 260, 61, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 200, 61, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(0, 260, 61, 61));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(120, 200, 61, 61));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(0, 320, 121, 61));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_Decimal = new QPushButton(centralWidget);
        pushButton_Decimal->setObjectName(QString::fromUtf8("pushButton_Decimal"));
        pushButton_Decimal->setGeometry(QRect(120, 320, 61, 61));
        pushButton_Decimal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(215,215,215);\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_Equals = new QPushButton(centralWidget);
        pushButton_Equals->setObjectName(QString::fromUtf8("pushButton_Equals"));
        pushButton_Equals->setGeometry(QRect(180, 320, 61, 61));
        pushButton_Equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        CalculatorProjClass->setCentralWidget(centralWidget);

        retranslateUi(CalculatorProjClass);

        QMetaObject::connectSlotsByName(CalculatorProjClass);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatorProjClass)
    {
        CalculatorProjClass->setWindowTitle(QCoreApplication::translate("CalculatorProjClass", "CalculatorProj", nullptr));
        label->setText(QCoreApplication::translate("CalculatorProjClass", "0", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("CalculatorProjClass", "C", nullptr));
        pushButton_ChangeSign->setText(QCoreApplication::translate("CalculatorProjClass", "+/-", nullptr));
        pushButton_Divide->setText(QCoreApplication::translate("CalculatorProjClass", "/", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("CalculatorProjClass", "%", nullptr));
        pushButton_8->setText(QCoreApplication::translate("CalculatorProjClass", "8", nullptr));
        pushButton_Multiply->setText(QCoreApplication::translate("CalculatorProjClass", "X", nullptr));
        pushButton_7->setText(QCoreApplication::translate("CalculatorProjClass", "7", nullptr));
        pushButton_9->setText(QCoreApplication::translate("CalculatorProjClass", "9", nullptr));
        pushButton_3->setText(QCoreApplication::translate("CalculatorProjClass", "3", nullptr));
        pushButton_Add->setText(QCoreApplication::translate("CalculatorProjClass", "+", nullptr));
        pushButton_5->setText(QCoreApplication::translate("CalculatorProjClass", "5", nullptr));
        pushButton_subtract->setText(QCoreApplication::translate("CalculatorProjClass", "-", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CalculatorProjClass", "2", nullptr));
        pushButton_4->setText(QCoreApplication::translate("CalculatorProjClass", "4", nullptr));
        pushButton_1->setText(QCoreApplication::translate("CalculatorProjClass", "1", nullptr));
        pushButton_6->setText(QCoreApplication::translate("CalculatorProjClass", "6", nullptr));
        pushButton_0->setText(QCoreApplication::translate("CalculatorProjClass", "0", nullptr));
        pushButton_Decimal->setText(QCoreApplication::translate("CalculatorProjClass", ".", nullptr));
        pushButton_Equals->setText(QCoreApplication::translate("CalculatorProjClass", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatorProjClass: public Ui_CalculatorProjClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORPROJ_H
