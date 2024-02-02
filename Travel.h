#ifndef TRAVEL_H
#define TRAVEL_H
#include "Booking.h"
#include "FlightBooking.h"
#include "TrainTicket.h"
#include "RentalCarReservation.h"
#include "HotelBooking.h"
#include <algorithm>
#include "algorithmen.cpp"
#include <QString>

struct VertexData{
public:
    int VertexNumber;
    shared_ptr<Booking>booking;
    int endTime;
};

class Travel{
private:
    long id;
    long customerId;
    vector<shared_ptr<Booking>>travelBookings;
    Digraph<shared_ptr<Booking>,20>*graph=new Digraph<shared_ptr<Booking>,20>;
    vector<VertexData>VertexDataVector;
    QString VertexDatastring
;

public:
    friend class SortFunktor;
    friend class TravelAgency;
    friend class TravelAgencyUI;
    friend class bookingDetails;
    friend class Check;
    Travel(){}
    Travel(long inid,long incustomerid);
    shared_ptr<Booking> findBooking(string id);
    int findBookingIndex(string id);
    void sortVertexDataVector();
    void initializeGraph();
    long getCustomerID();
    void setCustomerID(int inCustomerID);
    void addBooking(shared_ptr<Booking> booking);
    long getid();
    string getStartDate();
    string getEndDate();
    ~Travel();
};

#endif // TRAVEL_H
