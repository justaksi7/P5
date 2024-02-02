#include "Travel.h"
#include <QDate>
#include "sortfunktor.h"
#include <algorithm>

long Travel::getid(){return id;}

void Travel::addBooking(shared_ptr<Booking>booking)
{
    travelBookings.push_back(booking);
}

void Travel::setCustomerID(int inCustomerID)
{
    this->customerId=inCustomerID;
}

Travel::Travel(long inid, long incustomerid)
{
    id=inid;customerId=incustomerid;
    this->graph=new Graph<shared_ptr<Booking>,20>;
}

long Travel::getCustomerID()
{
    return customerId;
}

string Travel::getStartDate()
{
    SortFunktor sortFunktor=SortFunktor(SortFunktor::STARTDATE);
    vector<shared_ptr<Booking>>s=travelBookings;
    sort(s.begin(),s.end(),sortFunktor);
    return s[0]->fromDate;
}
string Travel::getEndDate()
{
    SortFunktor sortFunktor=SortFunktor(SortFunktor::ENDDATE);
    vector<shared_ptr<Booking>>s=travelBookings;
    sort(s.begin(),s.end(),sortFunktor);
    return s[s.size()-1]->toDate;
}

