#ifndef TRAVELAGENCY_H
#define TRAVELAGENCY_H
#include "Customer.h"
#include <QTableWidget>
#include <memory>
#include <map>
#include <Airport.h>

using namespace std;
using json=nlohmann::json;

class TravelAgency{
private:
    vector<shared_ptr<Booking>>allBookings;
    vector<shared_ptr<Customer>>allCustomers;
    vector<shared_ptr<Travel>>allTravels;
    map<string,shared_ptr<Airport>>airports;
public:
    TravelAgency(){}
    friend class TravelAgencyUI;
    friend class bookingDetails;
    friend class Check;
    void readFile(string inJSONname);
    void writeFile(string inJSONname);
    shared_ptr<Booking> findBooking(string id);
    shared_ptr<Travel> findTravel(long id);
    shared_ptr<Customer> findCustomer(long id);
    int jsonsize;
    int getbookingssize(){return allBookings.size();}
    int getcustomerssize(){return allCustomers.size();}
    int gettravelsssite(){return allTravels.size();}
    bool customerExists(long inid);
    bool travelExists(long inid);
    string einlesenMeldung;
    void setTravels(long customerID,QTableWidget* travelsTable);
    void setBookings(long travelID,QTableWidget* bookingsTable);
    void setDetails(TravelAgency* inTravelAgency,long travelid,int bookingindex);
    ~TravelAgency();
};

#endif // TRAVELAGENCY_H
