#ifndef CHECK_H
#define CHECK_H
#include "TravelAgency.h"
#include<memory>

class Check{
public:
    shared_ptr<TravelAgency>travelAgency;
    void operator()();
    void checkTravelsDisjunct();
    void checkNoMissingHotels();
    void checkNoOverlappingHotels();
    void checkNoOverlappingRentalCars();
    void checkForChanges();
    Check(shared_ptr<TravelAgency>inTravelAgency);
    ~Check();
};


#endif // CHECK_H
