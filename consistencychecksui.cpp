#include "consistencychecksui.h"
#include "ui_consistencychecksui.h"

consistencyChecksUI::consistencyChecksUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::consistencyChecksUI)
{
    ui->setupUi(this);
    for(int i=0;i<4;i++)
    {
        consistencyChecks.push_back(true);
    }
}

consistencyChecksUI::~consistencyChecksUI()
{
    delete ui;
}

void consistencyChecksUI::on_buttonBox_accepted()
{
    consistencyChecks[0]=ui->checkBox->isChecked();
    consistencyChecks[1]=ui->checkBox_2->isChecked();
    consistencyChecks[2]=ui->checkBox_3->isChecked();
    consistencyChecks[3]=ui->checkBox_4->isChecked();
    emit returnChecks(consistencyChecks);
}

