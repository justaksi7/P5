#ifndef FLIGHTBOOKING_H
#define FLIGHTBOOKING_H
#include "Booking.h"

class FlightBooking :public Booking
{
private:
    std::string fromDestination;
    std::string toDestination;
    std::string airline;
    string bookingClass;
    string fromDestLatitude;
    string toDestLatitude;
    string fromDestLongtitude;
    string toDestLongtitude;
public:
    friend class bookingDetails;
    friend class TravelAgency;
    void setID(string inID);
    void setPrice(double inPrice);
    void setFromDate(string inFromdate);
    void setToDate(string inToDate);
    void setFromDestination(string inFromDestination);
    void setToDestination(string inToDestination);
    void setAirline(string inAirline);
    string getID();
    double getPrice();
    string getFromDate();
    string getToDate();
    string getFromDestination();
    string getToDestination();
    string getAirline();
    long getTravelId();
    string getBookingClass();
    json setgeojson();
    FlightBooking();
    FlightBooking(string inAirline, string inID, string inFromDate, string inToDate,
                  string inFromDest, string inToDest, double inPrice, long inTravelId, string inbookingClass);
    std::string showDetails();
    ~FlightBooking(){}
};

#endif // FLIGHTBOOKING_H
