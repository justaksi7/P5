#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_buttonBox_accepted()
{
    this->gesuchteID=ui->spinBox->text().toLong();
    this->acceptted=true;
}


void Dialog::on_buttonBox_rejected()
{
    this->acceptted=false;
}

