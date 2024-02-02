#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "Travel.h"

class Customer{
private:
    long id;
    string lastName;
    string firstName;
    vector<shared_ptr<Travel>>travelList;
public:
    friend class TravelAgencyUI;
    friend class TravelAgency;
    Customer(long inID,string inLastName,string inFirstName);
    void addTravel(shared_ptr<Travel> travel);
    long getid();
    ~Customer();
};
#endif // CUSTOMER_H
