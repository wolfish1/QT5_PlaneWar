/********************************************************************************
** Form generated from reading UI file 'Ai.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AI_H
#define UI_AI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ai
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Ai)
    {
        if (Ai->objectName().isEmpty())
            Ai->setObjectName(QString::fromUtf8("Ai"));
        Ai->resize(1000, 700);
        Ai->setStyleSheet(QString::fromUtf8("background:url(:/images/sky2.jpg)"));
        pushButton = new QPushButton(Ai);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 360, 300, 110));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font.setPointSize(30);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(Ai);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(550, 360, 300, 110));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(Ai);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(390, 140, 241, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font1.setPointSize(37);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background:rgb(50, 107, 241)"));
        label_2 = new QLabel(Ai);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 1000, 700));
        label_2->raise();
        pushButton->raise();
        pushButton_2->raise();
        label->raise();

        retranslateUi(Ai);

        QMetaObject::connectSlotsByName(Ai);
    } // setupUi

    void retranslateUi(QWidget *Ai)
    {
        Ai->setWindowTitle(QApplication::translate("Ai", "Form", nullptr));
        pushButton->setText(QApplication::translate("Ai", "VS. AI", nullptr));
        pushButton_2->setText(QApplication::translate("Ai", "VS. Player", nullptr));
        label->setText(QApplication::translate("Ai", "\351\201\270\346\223\207\346\250\241\345\274\217", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Ai: public Ui_Ai {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AI_H
