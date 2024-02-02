#ifndef RENTALCARRESERVATION_H
#define RENTALCARRESERVATION_H
#include "Booking.h"

class RentalCarReservation :public Booking
{
private:
    std::string pickupLocation;
    std::string returnLocation;
    std::string company;
    string vehicleClass;
    string pickupLatitude;
    string pickupLongtitude;
    string returnLatitude;
    string returnLongtitude;
public:
    friend class bookingDetails;
    friend class TravelAgency;
    void setID(string inID);
    void setPrice(double inPrice);
    void setFromDate(string inFromdate);
    void setToDate(string inToDate);
    void setPickupLocation(string inPickupLocation);
    void setReturnLocation(string inReturnLocation);
    void setCompany(string inCompany);
    string getID();
    double getPrice();
    string getFromDate();
    string getToDate();
    string getPickupLocation();
    string getReturnLocation();
    string getCompany();
    string showDetails();
    long getTravelId();
    json setgeojson();
    RentalCarReservation();
    RentalCarReservation(string inID, string inFromDate, string inToDate, string inCompany, string inPickupLocation
                         , string inReturnLocation, double inPrice, long inTravelId, string inVehicleClass);
    ~RentalCarReservation(){}
};

#endif // RENTALCARRESERVATION_H
