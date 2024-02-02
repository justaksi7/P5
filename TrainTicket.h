#ifndef TRAINTICKET_H
#define TRAINTICKET_H
#include "Booking.h"

class ConnectingStation{
public:
    string stationName;
    double longtitude;
    double latitude;
};
class TrainTicket :public Booking
{
private:
    std::string fromDestination;
    std::string toDestination;
    std::string departureTime;
    std::string arrivalTime;
    std::vector<ConnectingStation>connectingStations;
    string bookingClass;
    double fromStationLatitude;
    double fromStationLongtitude;
    double toStationLatitude;
    double toStationLongtitude;
public:
    friend class bookingDetails;
    friend class TravelAgency;
    void setID(string inID);
    void setPrice(double inPrice);
    void setFromDate(string inFromdate);
    void setToDate(string inToDate);
    void setFromStation(string inFromStation);
    void setToStation(string inToStation);
    void setDepartureTime(string inDepartureTime);
    void setArrivalTime(string inArrivalTime);
    string getID();
    double getPrice();
    string getFromDate();
    string getToDate();
    string getFromStation();
    string getToStation();
    string getDepartureTime();
    string getArrivalTime();
    string getConnectingStations();
    long getTravelId();
    json setgeojson();
    TrainTicket();
    TrainTicket(string inID, string inFromDate, string intoDate, double inPrice, string inFromStation, string inToStation,
                string inArrivalTime, string inDepartureTime, vector<string>inConnectingStations, long inTravelId, string inBookingClass);
    std::string showDetails();
    ~TrainTicket(){}
};

#endif // TRAINTICKET_H
