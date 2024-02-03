#include "errorsui.h"
#include "ui_errorsui.h"

errorsUI::errorsUI(std::vector<QString>inerrors,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::errorsUI)
{
    ui->setupUi(this);
    errors=inerrors;
    for(const auto& error:errors)
    {
        ui->listWidget->addItem(error);
    }
}

errorsUI::~errorsUI()
{
    delete ui;
}
