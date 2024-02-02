#include "travelagencyui.h"
#include "ui_travelagencyui.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDialog>
#include "dialog.h"
#include "bookingdetails.h"
#include <QDesktopServices>
#include <QUrl>

TravelAgencyUI::TravelAgencyUI(TravelAgency* inTravelAgency,QWidget *parent)
    : QMainWindow(parent)
    ,inTravelAgency(inTravelAgency)
    , ui(new Ui::TravelAgencyUI)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnWidth(0,100);
    ui->tableWidget->setColumnWidth(1,100);
    ui->tableWidget->setColumnWidth(2,100);
}

TravelAgencyUI::~TravelAgencyUI()
{
    delete ui;
}

void TravelAgencyUI::on_actionEinlesen_triggered()
{
    QString jsonname;
    jsonname=QFileDialog::getOpenFileName();
    inTravelAgency->readFile(jsonname.toStdString());
    QMessageBox msg;
    msg.setWindowTitle("Read File");
    msg.setText(QString::fromStdString(inTravelAgency->einlesenMeldung));
    msg.exec();
}


void TravelAgencyUI::on_actionSuchen_triggered()
{
    Dialog dialog(this);
    dialog.exec();
    if(dialog.acceptted==true)
    {
    ui->idLineEdit->setText(QString::fromStdString(to_string(dialog.gesuchteID)));
    string name=inTravelAgency->findCustomer(dialog.gesuchteID)->firstName+
                +" "+inTravelAgency->findCustomer(dialog.gesuchteID)->lastName;
    ui->nameLineEdit->setText(QString::fromStdString(name));
    inTravelAgency->setTravels(dialog.gesuchteID,ui->tableWidget);
    }
    else
    {
        dialog.close();
    }
}


void TravelAgencyUI::on_tableWidget_cellDoubleClicked(int row, int column)
{
    ui->reiseID->setText(ui->tableWidget->item(row,column)->text());
    inTravelAgency->setBookings(ui->tableWidget->item(row,column)->text().toLong(),ui->tableWidget_2);
    json geojson;
    json features;
    for(const auto& booking:inTravelAgency->findTravel(ui->tableWidget->item(row,column)->text().toLong())->travelBookings)
    {
        features.push_back(booking->setgeojson());
    }
    geojson={
        {"type", "FeatureCollection"},
        {"features",features}
    };
    string a="http://townsendjennings.com/geo/?geojson=";
    string b=geojson.dump();
    string c=a+b;
    //QDesktopServices::openUrl(QUrl(QString::fromStdString(c),QUrl::TolerantMode));

    QMessageBox::information(nullptr,"VertexTable",inTravelAgency->findTravel(ui->reiseID->text().toLong())->VertexDatastring);
}


void TravelAgencyUI::on_tableWidget_2_cellDoubleClicked(int row, int column)
{
    bookingDetails b(make_shared<TravelAgency>(*inTravelAgency),inTravelAgency->findTravel(ui->reiseID->text().toLong())->travelBookings[row]);
    b.exec();
}


void TravelAgencyUI::on_actionSpeichern_triggered()
{
    inTravelAgency->writeFile(QFileDialog::getOpenFileName().toStdString());
}

