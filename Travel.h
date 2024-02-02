#ifndef TRAVEL_H
#define TRAVEL_H
#include "Booking.h"
#include "FlightBooking.h"
#include "TrainTicket.h"
#include "RentalCarReservation.h"
#include "HotelBooking.h"
#include <algorithm>
#include "graph.h"

class Travel{
private:
    long id;
    long customerId;
    vector<shared_ptr<Booking>>travelBookings;
    Graph<shared_ptr<Booking>,20>*graph;

public:
    friend class SortFunktor;
    friend class TravelAgency;
    friend class TravelAgencyUI;
    friend class bookingDetails;
    friend class Check;
    Travel(){}
    Travel(long inid,long incustomerid);
    long getCustomerID();
    void setCustomerID(int inCustomerID);
    void addBooking(shared_ptr<Booking> booking);
    long getid();
    string getStartDate();
    string getEndDate();
    ~Travel(){}
};

#endif // TRAVEL_H
