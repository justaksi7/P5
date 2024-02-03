#ifndef BOOKINGDETAILS_H
#define BOOKINGDETAILS_H

#include <QDialog>
#include "Travel.h"
#include "TravelAgency.h"
#include "QListWidget"
#include "qabstractbutton.h"
namespace Ui {
class bookingDetails;
}

class bookingDetails : public QDialog
{
    Q_OBJECT

public:
    explicit bookingDetails(shared_ptr<TravelAgency>inTravelAgency,shared_ptr<Booking> inBooking, QWidget *parent = nullptr);
    map <string,shared_ptr<Airport>>airports;
    ~bookingDetails();
signals:
    void run_checks();

private slots:
    void on_hotelID_textChanged(const QString &arg1);

    void on_flugID_textChanged(const QString &arg1);

    void on_flugAirline_textChanged(const QString &arg1);

    void on_flugFromDate_textChanged(const QString &arg1);

    void on_flugToDate_textChanged(const QString &arg1);

    void on_flugFromDest_textChanged(const QString &arg1);

    void on_flugToDest_textChanged(const QString &arg1);

    void on_flugClass_textChanged(const QString &arg1);

    void on_flugPrice_textChanged(const QString &arg1);

    void on_carID_textChanged(const QString &arg1);

    void on_carClass_textChanged(const QString &arg1);

    void on_carCompany_textChanged(const QString &arg1);

    void on_carFromDate_textChanged(const QString &arg1);

    void on_carToDate_textChanged(const QString &arg1);

    void on_carPickUp_textChanged(const QString &arg1);

    void on_carReturn_textChanged(const QString &arg1);

    void on_carPrice_textChanged(const QString &arg1);

    void on_hotelHotel_textChanged(const QString &arg1);

    void on_hotelClass_textChanged(const QString &arg1);

    void on_hotelTown_textChanged(const QString &arg1);

    void on_hotelFromDate_textChanged(const QString &arg1);

    void on_hotelToDate_textChanged(const QString &arg1);

    void on_hotelPrice_textChanged(const QString &arg1);

    void on_zugClass_textChanged(const QString &arg1);

    void on_zugFromDate_textChanged(const QString &arg1);

    void on_zugPrice_textChanged(const QString &arg1);

    void on_zugToDate_textChanged(const QString &arg1);

    void on_zugFrom_textChanged(const QString &arg1);

    void on_zugTo_textChanged(const QString &arg1);

    void on_zugDeparture_textChanged(const QString &arg1);

    void on_zugArrival_textChanged(const QString &arg1);

    void on_zugCS_itemDoubleClicked(QListWidgetItem *item);

    void on_zugCS_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

    void on_zugCS_currentTextChanged(const QString &currentText);

    void on_buttonBox_accepted();

    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::bookingDetails *ui;
    shared_ptr<Booking> booking;
    void setDetails();
};

#endif // BOOKINGDETAILS_H
