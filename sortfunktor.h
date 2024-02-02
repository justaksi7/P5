#ifndef SORTFUNKTOR_H
#define SORTFUNKTOR_H
#include "booking.h"

class SortFunktor
{
public:
    enum SortierParameter{
        ID=0, PRICE=1, STARTDATE=2,ENDDATE=3
    };
    SortFunktor(SortFunktor::SortierParameter parameter = STARTDATE);
    bool operator()(shared_ptr<Booking> booking1, shared_ptr<Booking> booking2);
private:
   SortFunktor::SortierParameter sortierParameter = STARTDATE;
};

#endif // SORTFUNKTOR_H
