#include "bookingdetails.h"
#include "travelagencyui.h"
#include "ui_bookingdetails.h"
#include "TravelAgency.h"
#include "QInputDialog"

bookingDetails::bookingDetails(shared_ptr<TravelAgency> inTravelAgency,shared_ptr<Booking> inBooking,QWidget *parent) :
    QDialog(parent),airports(inTravelAgency->airports),ui(new Ui::bookingDetails),
    booking(inBooking)
{
    ui->setupUi(this);
    setDetails();
    emit this->runChecks();
}

bookingDetails::~bookingDetails()
{
    delete ui;
}

void bookingDetails::setDetails()
{
    if(dynamic_pointer_cast<FlightBooking>(booking))
    {
        ui->tabWidget->setTabEnabled(0,true);
        ui->tabWidget->setTabEnabled(1,false);
        ui->tabWidget->setTabEnabled(2,false);
        ui->tabWidget->setTabEnabled(3,false);
        shared_ptr<FlightBooking> f=dynamic_pointer_cast<FlightBooking>(booking);
        ui->flugAirline->setText(QString::fromStdString(f->airline));
        if(f->bookingClass=="F")
        {
            ui->flugClass->setText("First");
        }
        else if(f->bookingClass=="Y")
        {
            ui->flugClass->setText("Economy");
        }
        else if(f->bookingClass=="W")
        {
            ui->flugClass->setText("Premium Economy");
        }
        else if(f->bookingClass=="J")
        {
            ui->flugClass->setText("Business");
        }
        else
        {
            ui->flugClass->setText("Fehler beim einlesen des typs!");
        }
        ui->flugFromDate->setText(QString::fromStdString(f->fromDate));
        ui->flugFromDest->setText(QString::fromStdString(f->fromDestination));
        ui->flugID->setText(QString::fromStdString(f->id));
        ui->flugPrice->setText(QString::number(f->price));
        ui->flugToDate->setText(QString::fromStdString(f->toDate));
        ui->flugToDest->setText(QString::fromStdString(f->toDestination));
    }

    else if(dynamic_pointer_cast<HotelBooking>(booking))
    {
        ui->tabWidget->setTabEnabled(3,true);
        ui->tabWidget->setTabEnabled(1,false);
        ui->tabWidget->setTabEnabled(2,false);
        ui->tabWidget->setTabEnabled(0,false);
        shared_ptr<HotelBooking> h=dynamic_pointer_cast<HotelBooking>(booking);
        if(h->roomType=="EZ")
        {
            ui->hotelClass->setText("Einzelzimmer");
        }
        else if(h->roomType=="DZ")
        {
            ui->hotelClass->setText("Doppelzimmer");
        }
        else if(h->roomType=="SU")
        {
            ui->hotelClass->setText("Suite");
        }
        else if(h->roomType=="AP")
        {
            ui->hotelClass->setText("Appartment");
        }
        else
        {
            ui->hotelClass->setText("Falscher Typ");
        }
        ui->hotelFromDate->setText(QString::fromStdString(h->fromDate));
        ui->hotelHotel->setText(QString::fromStdString(h->hotel));
        ui->hotelID->setText(QString::fromStdString(h->id));
        ui->hotelPrice->setText(QString::number(h->price));
        ui->hotelToDate->setText(QString::fromStdString(h->toDate));
        ui->hotelTown->setText(QString::fromStdString(h->town));
    }
    else if(dynamic_pointer_cast<TrainTicket>(booking))
    {
        ui->tabWidget->setTabEnabled(1,true);
        ui->tabWidget->setTabEnabled(2,false);
        ui->tabWidget->setTabEnabled(0,false);
        ui->tabWidget->setTabEnabled(3,false);
        shared_ptr<TrainTicket>t=dynamic_pointer_cast<TrainTicket>(booking);
        ui->zugArrival->setText(QString::fromStdString(t->arrivalTime));
        if(t->bookingClass=="SSP1")
        {
            ui->zugClass->setText("Supersparpreis 1.Klasse");
        }
        else if(t->bookingClass=="SSP2")
        {
            ui->zugClass->setText("Supersparpreis 2.Klasse");
        }
        else if(t->bookingClass=="SP1")
        {
            ui->zugClass->setText("Sparpreis 1.Klasse");
        }
        else if(t->bookingClass=="SP2")
        {
            ui->zugClass->setText("Sparpreis 2.Klasse");
        }
        else if(t->bookingClass=="FP1")
        {
            ui->zugClass->setText("Flexpreis 1.Klasse");
        }
        else if(t->bookingClass=="FP1")
        {
            ui->zugClass->setText("Flexpreis 2.Klasse");
        }
        for(const auto& station:t->connectingStations)
        {
            ui->zugCS->addItem(QString::fromStdString(station.stationName));
            ui->zugCS->editItem(ui->zugCS->currentItem());
        }
        ui->zugDeparture->setText(QString::fromStdString(t->departureTime));
        ui->zugFrom->setText(QString::fromStdString(t->fromDestination));
        ui->zugFromDate->setText(QString::fromStdString(t->fromDate));
        ui->zugID->setText(QString::fromStdString(t->id));
        ui->zugPrice->setText(QString::number(t->price));
        ui->zugTo->setText(QString::fromStdString(t->toDestination));
        ui->zugToDate->setText(QString::fromStdString(t->toDate));
    }
    else if(dynamic_pointer_cast<RentalCarReservation>(booking))
    {
        ui->tabWidget->setTabEnabled(2,true);
        ui->tabWidget->setTabEnabled(0,false);
        ui->tabWidget->setTabEnabled(2,false);
        ui->tabWidget->setTabEnabled(3,false);
        shared_ptr<RentalCarReservation> r=dynamic_pointer_cast<RentalCarReservation>(booking);
        ui->carClass->setText(QString::fromStdString(r->vehicleClass));
        ui->carCompany->setText(QString::fromStdString(r->company));
        ui->carFromDate->setText(QString::fromStdString(r->fromDate));
        ui->carID->setText(QString::fromStdString(r->id));
        ui->carPickUp->setText(QString::fromStdString(r->pickupLocation));
        ui->carPrice->setText(QString::number(r->price));
        ui->carReturn->setText(QString::fromStdString(r->returnLocation));
        ui->carToDate->setText(QString::fromStdString(r->toDate));
    }
}


void bookingDetails::on_flugID_textChanged(const QString &arg1)
{

}

void bookingDetails::on_flugAirline_textChanged(const QString &arg1)
{
    shared_ptr<FlightBooking>f=dynamic_pointer_cast<FlightBooking>(booking);
    f->airline=arg1.toStdString();
}


void bookingDetails::on_flugFromDate_textChanged(const QString &arg1)
{
    shared_ptr<FlightBooking>f=dynamic_pointer_cast<FlightBooking>(booking);    f->fromDate=arg1.toStdString();
}


void bookingDetails::on_flugToDate_textChanged(const QString &arg1)
{
    shared_ptr<FlightBooking>f=dynamic_pointer_cast<FlightBooking>(booking);
    f->toDate=arg1.toStdString();
}


void bookingDetails::on_flugFromDest_textChanged(const QString &arg1)
{
    shared_ptr<FlightBooking>f=dynamic_pointer_cast<FlightBooking>(booking);
    f->fromDestination=arg1.toStdString();
    if(airports.contains(f->fromDestination))
    {
        ui->fromName->setText(QString::fromStdString(airports[f->fromDestination]->name));
        ui->fromName->setStyleSheet("color:black;"
                                    "");
    }
    else
    {
        ui->fromName->setText("Ungültiger IATA Code");
            ui->fromName->setStyleSheet("color:red;");
    }
    emit runChecks();
}


void bookingDetails::on_flugToDest_textChanged(const QString &arg1)
{
    shared_ptr<FlightBooking>f=dynamic_pointer_cast<FlightBooking>(booking);
    f->toDestination=arg1.toStdString();
    if(airports.contains(f->toDestination))
    {
        ui->toName->setText(QString::fromStdString(airports[f->toDestination]->name));
        ui->toName->setStyleSheet("color:black;");
    }
    else
    {
        ui->toName->setText("Ungültiger IATA Code");
            ui->toName->setStyleSheet("color:red;");
    }
}


void bookingDetails::on_flugClass_textChanged(const QString &arg1)
{
    shared_ptr<FlightBooking>f=dynamic_pointer_cast<FlightBooking>(booking);
    f->bookingClass=arg1.toStdString();
}


void bookingDetails::on_flugPrice_textChanged(const QString &arg1)
{
    shared_ptr<FlightBooking>f=dynamic_pointer_cast<FlightBooking>(booking);
    f->price=arg1.toDouble();
}

void bookingDetails::on_carID_textChanged(const QString &arg1)
{

}

void bookingDetails::on_carClass_textChanged(const QString &arg1)
{
    shared_ptr<RentalCarReservation>r=dynamic_pointer_cast<RentalCarReservation>(booking);
    r->vehicleClass=arg1.toStdString();
}


void bookingDetails::on_carCompany_textChanged(const QString &arg1)
{
    shared_ptr<RentalCarReservation>r=dynamic_pointer_cast<RentalCarReservation>(booking);
    r->company=arg1.toStdString();
}


void bookingDetails::on_carFromDate_textChanged(const QString &arg1)
{
    shared_ptr<RentalCarReservation>r=dynamic_pointer_cast<RentalCarReservation>(booking);
    r->fromDate=arg1.toStdString();
}


void bookingDetails::on_carToDate_textChanged(const QString &arg1)
{
    shared_ptr<RentalCarReservation>r=dynamic_pointer_cast<RentalCarReservation>(booking);
    r->toDate=arg1.toStdString();
}


void bookingDetails::on_carPickUp_textChanged(const QString &arg1)
{
    shared_ptr<RentalCarReservation>r=dynamic_pointer_cast<RentalCarReservation>(booking);
    r->pickupLocation=arg1.toStdString();
}


void bookingDetails::on_carReturn_textChanged(const QString &arg1)
{
    shared_ptr<RentalCarReservation>r=dynamic_pointer_cast<RentalCarReservation>(booking);;
    r->returnLocation=arg1.toStdString();
}


void bookingDetails::on_carPrice_textChanged(const QString &arg1)
{
    shared_ptr<RentalCarReservation>r=dynamic_pointer_cast<RentalCarReservation>(booking);
    r->price=arg1.toDouble();
}


void bookingDetails::on_hotelID_textChanged(const QString &arg1)
{

}

void bookingDetails::on_hotelHotel_textChanged(const QString &arg1)
{
    shared_ptr<HotelBooking> h=dynamic_pointer_cast<HotelBooking>(booking);
    h->hotel=arg1.toStdString();

}


void bookingDetails::on_hotelClass_textChanged(const QString &arg1)
{
    shared_ptr<HotelBooking> h=dynamic_pointer_cast<HotelBooking>(booking);
    h->roomType=arg1.toStdString();
}


void bookingDetails::on_hotelTown_textChanged(const QString &arg1)
{
    shared_ptr<HotelBooking> h=dynamic_pointer_cast<HotelBooking>(booking);
    h->town=arg1.toStdString();
}


void bookingDetails::on_hotelFromDate_textChanged(const QString &arg1)
{
    shared_ptr<HotelBooking> h=dynamic_pointer_cast<HotelBooking>(booking);
    h->fromDate=arg1.toStdString();
}


void bookingDetails::on_hotelToDate_textChanged(const QString &arg1)
{
    shared_ptr<HotelBooking> h=dynamic_pointer_cast<HotelBooking>(booking);
    h->toDate=arg1.toStdString();
}


void bookingDetails::on_hotelPrice_textChanged(const QString &arg1)
{
    shared_ptr<HotelBooking> h=dynamic_pointer_cast<HotelBooking>(booking);
    h->price=arg1.toDouble();
}


void bookingDetails::on_zugClass_textChanged(const QString &arg1)
{
    shared_ptr<TrainTicket> t=dynamic_pointer_cast<TrainTicket>(booking);
    t->bookingClass=arg1.toStdString();
}


void bookingDetails::on_zugFromDate_textChanged(const QString &arg1)
{
    shared_ptr<TrainTicket> t=dynamic_pointer_cast<TrainTicket>(booking);
    t->fromDate=arg1.toStdString();
}


void bookingDetails::on_zugPrice_textChanged(const QString &arg1)
{
    shared_ptr<TrainTicket> t=dynamic_pointer_cast<TrainTicket>(booking);
    t->price=arg1.toDouble();
}


void bookingDetails::on_zugToDate_textChanged(const QString &arg1)
{
    shared_ptr<TrainTicket> t=dynamic_pointer_cast<TrainTicket>(booking);
    t->toDate=arg1.toStdString();
}


void bookingDetails::on_zugFrom_textChanged(const QString &arg1)
{
    shared_ptr<TrainTicket> t=dynamic_pointer_cast<TrainTicket>(booking);
    t->fromDestination=arg1.toStdString();
}


void bookingDetails::on_zugTo_textChanged(const QString &arg1)
{
    shared_ptr<TrainTicket> t=dynamic_pointer_cast<TrainTicket>(booking);
    t->toDestination=arg1.toStdString();
}


void bookingDetails::on_zugDeparture_textChanged(const QString &arg1)
{
    shared_ptr<TrainTicket> t=dynamic_pointer_cast<TrainTicket>(booking);
    t->departureTime=arg1.toStdString();
}


void bookingDetails::on_zugArrival_textChanged(const QString &arg1)
{
    shared_ptr<TrainTicket> t=dynamic_pointer_cast<TrainTicket>(booking);
    t->arrivalTime=arg1.toStdString();
}


void bookingDetails::on_zugCS_itemDoubleClicked(QListWidgetItem *item)
{
    bool ok;
    QString newText = QInputDialog::getText(this, tr("Neuer Text"), tr("Geben Sie den neuen Text ein:"), QLineEdit::Normal, item->text(), &ok);

    if (ok && !newText.isEmpty())
    {
        item->setText(newText);
    }
    shared_ptr<TrainTicket> t=dynamic_pointer_cast<TrainTicket>(booking);
    t->connectingStations[ui->zugCS->currentRow()].stationName=item->text().toStdString();
}



void bookingDetails::on_buttonBox_accepted()
{
    emit runChecks();
}


void bookingDetails::on_buttonBox_clicked(QAbstractButton *button)
{
    emit runChecks();
}

