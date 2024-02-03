/********************************************************************************
** Form generated from reading UI file 'errorsui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORSUI_H
#define UI_ERRORSUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_errorsUI
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *listWidget;

    void setupUi(QDialog *errorsUI)
    {
        if (errorsUI->objectName().isEmpty())
            errorsUI->setObjectName("errorsUI");
        errorsUI->resize(400, 300);
        gridLayout = new QGridLayout(errorsUI);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(errorsUI);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        listWidget = new QListWidget(errorsUI);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(errorsUI);

        QMetaObject::connectSlotsByName(errorsUI);
    } // setupUi

    void retranslateUi(QDialog *errorsUI)
    {
        errorsUI->setWindowTitle(QCoreApplication::translate("errorsUI", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("errorsUI", "Consistency checks errors:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class errorsUI: public Ui_errorsUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORSUI_H
