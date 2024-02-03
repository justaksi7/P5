/********************************************************************************
** Form generated from reading UI file 'consistencychecksui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSISTENCYCHECKSUI_H
#define UI_CONSISTENCYCHECKSUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>

QT_BEGIN_NAMESPACE

class Ui_consistencyChecksUI
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *consistencyChecksUI)
    {
        if (consistencyChecksUI->objectName().isEmpty())
            consistencyChecksUI->setObjectName("consistencyChecksUI");
        consistencyChecksUI->resize(400, 300);
        gridLayout_2 = new QGridLayout(consistencyChecksUI);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        checkBox = new QCheckBox(consistencyChecksUI);
        checkBox->setObjectName("checkBox");
        checkBox->setChecked(true);

        gridLayout->addWidget(checkBox, 0, 0, 1, 1);

        checkBox_2 = new QCheckBox(consistencyChecksUI);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setChecked(true);

        gridLayout->addWidget(checkBox_2, 1, 0, 1, 1);

        checkBox_3 = new QCheckBox(consistencyChecksUI);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setChecked(true);

        gridLayout->addWidget(checkBox_3, 2, 0, 1, 1);

        checkBox_4 = new QCheckBox(consistencyChecksUI);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setChecked(true);

        gridLayout->addWidget(checkBox_4, 3, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(consistencyChecksUI);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(consistencyChecksUI);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, consistencyChecksUI, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, consistencyChecksUI, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(consistencyChecksUI);
    } // setupUi

    void retranslateUi(QDialog *consistencyChecksUI)
    {
        consistencyChecksUI->setWindowTitle(QCoreApplication::translate("consistencyChecksUI", "Dialog", nullptr));
        checkBox->setText(QCoreApplication::translate("consistencyChecksUI", "Check overlapping travels", nullptr));
        checkBox_2->setText(QCoreApplication::translate("consistencyChecksUI", "Check missing hotels", nullptr));
        checkBox_3->setText(QCoreApplication::translate("consistencyChecksUI", "Check overlapping hotels", nullptr));
        checkBox_4->setText(QCoreApplication::translate("consistencyChecksUI", "Check overlapping rental car reservations", nullptr));
    } // retranslateUi

};

namespace Ui {
    class consistencyChecksUI: public Ui_consistencyChecksUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSISTENCYCHECKSUI_H
