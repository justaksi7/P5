#include "consistencychecksui.h"
#include "ui_consistencychecksui.h"

consistencyChecksUI::consistencyChecksUI(shared_ptr<TravelAgency>inTravelAgency,QWidget *parent) :
    QDialog(parent),
    travelAgency(inTravelAgency)
    ,ui(new Ui::consistencyChecksUI)
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
    travelAgency->consistencyChecks[0]=ui->checkBox->isChecked();
    travelAgency->consistencyChecks[1]=ui->checkBox_2->isChecked();
    travelAgency->consistencyChecks[2]=ui->checkBox_3->isChecked();
    travelAgency->consistencyChecks[3]=ui->checkBox_4->isChecked();
}


void consistencyChecksUI::on_checkBox_stateChanged(int arg1)
{
    travelAgency->consistencyChecks[0]=arg1;
}


void consistencyChecksUI::on_checkBox_2_stateChanged(int arg1)
{
    travelAgency->consistencyChecks[1]=arg1;
}


void consistencyChecksUI::on_checkBox_3_stateChanged(int arg1)
{
    travelAgency->consistencyChecks[2]=arg1;
}


void consistencyChecksUI::on_checkBox_4_stateChanged(int arg1)
{
    travelAgency->consistencyChecks[3]=arg1;
}

