/********************************************************************************
** Form generated from reading UI file 'End.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_END_H
#define UI_END_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_End
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *End)
    {
        if (End->objectName().isEmpty())
            End->setObjectName(QString::fromUtf8("End"));
        End->resize(1000, 700);
        End->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 78, 234, 255), stop:1 rgba(255, 255, 255, 255))"));
        label = new QLabel(End);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(370, 130, 251, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font.setPointSize(37);
        label->setFont(font);
        pushButton = new QPushButton(End);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 360, 300, 110));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font1.setPointSize(24);
        pushButton->setFont(font1);
        pushButton->setFocusPolicy(Qt::StrongFocus);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        pushButton_2 = new QPushButton(End);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(550, 360, 300, 110));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));

        retranslateUi(End);

        QMetaObject::connectSlotsByName(End);
    } // setupUi

    void retranslateUi(QWidget *End)
    {
        End->setWindowTitle(QApplication::translate("End", "Form", nullptr));
        label->setText(QApplication::translate("End", "\351\201\212\346\210\262\347\265\220\346\235\237", nullptr));
        pushButton->setText(QApplication::translate("End", "\345\233\236\344\270\273\351\240\201\351\235\242", nullptr));
        pushButton_2->setText(QApplication::translate("End", "\347\265\220\346\235\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class End: public Ui_End {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_END_H
