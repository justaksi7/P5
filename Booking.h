#ifndef BOOKING_H
#define BOOKING_H
#include <string>
#include <vector>
#include "json.hpp"

using namespace std;
using json=nlohmann::json;

class Booking
{
protected:
    std::string id;
    double price;
    long travelId;
    string predecessor1="0";
    string predecessor2="0";
    std::string fromDate;
    std::string toDate;
    std::string customerFirstname;
    std::string customerLastname;
    long customerId;
public:
    friend class TravelAgency;
    friend class SortFunktor;
    friend class Travel;
    string type;
    Booking(){}
    virtual std::string showDetails()=0;
    string getid();
    void setTravelID(long intravelid);
    virtual json setgeojson()=0;
    virtual ~Booking(){}
};

#endif // BOOKING_H
