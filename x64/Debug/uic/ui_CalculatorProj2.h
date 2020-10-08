/********************************************************************************
** Form generated from reading UI file 'CalculatorProj2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORPROJ2_H
#define UI_CALCULATORPROJ2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorProjClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_subtract;
    QPushButton *pushButton_Divide;
    QPushButton *pushButton_8;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_5;
    QPushButton *pushButton_Multiply;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_9;
    QPushButton *pushButton_1;
    QPushButton *pushButton_4;
    QPushButton *pushButton_Decimal;
    QPushButton *pushButton_7;
    QPushButton *pushButton_Add;
    QPushButton *pushButton_ChangeSign;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_Equals;
    QLabel *label;
    QPushButton *pushButton_0;

    void setupUi(QMainWindow *CalculatorProjClass)
    {
        if (CalculatorProjClass->objectName().isEmpty())
            CalculatorProjClass->setObjectName(QString::fromUtf8("CalculatorProjClass"));
        CalculatorProjClass->resize(336, 467);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CalculatorProjClass->sizePolicy().hasHeightForWidth());
        CalculatorProjClass->setSizePolicy(sizePolicy);
        CalculatorProjClass->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color:white;"));
        centralWidget = new QWidget(CalculatorProjClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_subtract = new QPushButton(centralWidget);
        pushButton_subtract->setObjectName(QString::fromUtf8("pushButton_subtract"));
        sizePolicy.setHeightForWidth(pushButton_subtract->sizePolicy().hasHeightForWidth());
        pushButton_subtract->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(18);
        pushButton_subtract->setFont(font);

        gridLayout->addWidget(pushButton_subtract, 3, 3, 1, 1);

        pushButton_Divide = new QPushButton(centralWidget);
        pushButton_Divide->setObjectName(QString::fromUtf8("pushButton_Divide"));
        sizePolicy.setHeightForWidth(pushButton_Divide->sizePolicy().hasHeightForWidth());
        pushButton_Divide->setSizePolicy(sizePolicy);
        pushButton_Divide->setFont(font);

        gridLayout->addWidget(pushButton_Divide, 1, 3, 1, 1);

        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setFont(font);

        gridLayout->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        sizePolicy.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy);
        pushButton_clear->setFont(font);

        gridLayout->addWidget(pushButton_clear, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setFont(font);

        gridLayout->addWidget(pushButton_5, 3, 1, 1, 1);

        pushButton_Multiply = new QPushButton(centralWidget);
        pushButton_Multiply->setObjectName(QString::fromUtf8("pushButton_Multiply"));
        sizePolicy.setHeightForWidth(pushButton_Multiply->sizePolicy().hasHeightForWidth());
        pushButton_Multiply->setSizePolicy(sizePolicy);
        pushButton_Multiply->setFont(font);

        gridLayout->addWidget(pushButton_Multiply, 2, 3, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFont(font);

        gridLayout->addWidget(pushButton_2, 4, 1, 1, 1);

        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setFont(font);

        gridLayout->addWidget(pushButton_6, 3, 2, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font);

        gridLayout->addWidget(pushButton_3, 4, 2, 1, 1);

        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setFont(font);

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setFont(font);

        gridLayout->addWidget(pushButton_1, 4, 0, 1, 1);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFont(font);

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 1);

        pushButton_Decimal = new QPushButton(centralWidget);
        pushButton_Decimal->setObjectName(QString::fromUtf8("pushButton_Decimal"));
        sizePolicy.setHeightForWidth(pushButton_Decimal->sizePolicy().hasHeightForWidth());
        pushButton_Decimal->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(28);
        pushButton_Decimal->setFont(font1);

        gridLayout->addWidget(pushButton_Decimal, 5, 2, 1, 1);

        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setFont(font);

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_Add = new QPushButton(centralWidget);
        pushButton_Add->setObjectName(QString::fromUtf8("pushButton_Add"));
        sizePolicy.setHeightForWidth(pushButton_Add->sizePolicy().hasHeightForWidth());
        pushButton_Add->setSizePolicy(sizePolicy);
        pushButton_Add->setFont(font);

        gridLayout->addWidget(pushButton_Add, 4, 3, 1, 1);

        pushButton_ChangeSign = new QPushButton(centralWidget);
        pushButton_ChangeSign->setObjectName(QString::fromUtf8("pushButton_ChangeSign"));
        sizePolicy.setHeightForWidth(pushButton_ChangeSign->sizePolicy().hasHeightForWidth());
        pushButton_ChangeSign->setSizePolicy(sizePolicy);
        pushButton_ChangeSign->setFont(font);

        gridLayout->addWidget(pushButton_ChangeSign, 1, 1, 1, 1);

        pushButton_percent = new QPushButton(centralWidget);
        pushButton_percent->setObjectName(QString::fromUtf8("pushButton_percent"));
        sizePolicy.setHeightForWidth(pushButton_percent->sizePolicy().hasHeightForWidth());
        pushButton_percent->setSizePolicy(sizePolicy);
        pushButton_percent->setFont(font);

        gridLayout->addWidget(pushButton_percent, 1, 2, 1, 1);

        pushButton_Equals = new QPushButton(centralWidget);
        pushButton_Equals->setObjectName(QString::fromUtf8("pushButton_Equals"));
        sizePolicy.setHeightForWidth(pushButton_Equals->sizePolicy().hasHeightForWidth());
        pushButton_Equals->setSizePolicy(sizePolicy);
        pushButton_Equals->setFont(font);

        gridLayout->addWidget(pushButton_Equals, 5, 3, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(label, 0, 0, 1, 4);

        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);
        pushButton_0->setFont(font);

        gridLayout->addWidget(pushButton_0, 5, 0, 1, 2);

        CalculatorProjClass->setCentralWidget(centralWidget);

        retranslateUi(CalculatorProjClass);

        QMetaObject::connectSlotsByName(CalculatorProjClass);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatorProjClass)
    {
        CalculatorProjClass->setWindowTitle(QCoreApplication::translate("CalculatorProjClass", "CalculatorProj", nullptr));
        pushButton_subtract->setText(QCoreApplication::translate("CalculatorProjClass", "-", nullptr));
        pushButton_Divide->setText(QCoreApplication::translate("CalculatorProjClass", "/", nullptr));
        pushButton_8->setText(QCoreApplication::translate("CalculatorProjClass", "8", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("CalculatorProjClass", "C", nullptr));
        pushButton_5->setText(QCoreApplication::translate("CalculatorProjClass", "5", nullptr));
        pushButton_Multiply->setText(QCoreApplication::translate("CalculatorProjClass", "X", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CalculatorProjClass", "2", nullptr));
        pushButton_6->setText(QCoreApplication::translate("CalculatorProjClass", "6", nullptr));
        pushButton_3->setText(QCoreApplication::translate("CalculatorProjClass", "3", nullptr));
        pushButton_9->setText(QCoreApplication::translate("CalculatorProjClass", "9", nullptr));
        pushButton_1->setText(QCoreApplication::translate("CalculatorProjClass", "1", nullptr));
        pushButton_4->setText(QCoreApplication::translate("CalculatorProjClass", "4", nullptr));
        pushButton_Decimal->setText(QCoreApplication::translate("CalculatorProjClass", ".", nullptr));
        pushButton_7->setText(QCoreApplication::translate("CalculatorProjClass", "7", nullptr));
        pushButton_Add->setText(QCoreApplication::translate("CalculatorProjClass", "+", nullptr));
        pushButton_ChangeSign->setText(QCoreApplication::translate("CalculatorProjClass", "+/-", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("CalculatorProjClass", "%", nullptr));
        pushButton_Equals->setText(QCoreApplication::translate("CalculatorProjClass", "=", nullptr));
        label->setText(QCoreApplication::translate("CalculatorProjClass", "TextLabel", nullptr));
        pushButton_0->setText(QCoreApplication::translate("CalculatorProjClass", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatorProjClass: public Ui_CalculatorProjClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORPROJ2_H
