
#include "sortfunktor.h"
#include <QDate>

SortFunktor::SortFunktor(SortFunktor::SortierParameter parameter):sortierParameter(parameter)
{

}

bool SortFunktor::operator()(shared_ptr<Booking> booking1, shared_ptr<Booking> booking2){
    if (sortierParameter == PRICE)
        return booking1->price < booking2->price;
    else if (sortierParameter == ID)
        return booking1->id < booking2->id;
    else if (sortierParameter == STARTDATE)
        return QDate::fromString(QString::fromStdString(booking1->fromDate),"yyyymmdd")
               <QDate::fromString(QString::fromStdString(booking2->fromDate),"yyyymmdd");
    else if(sortierParameter==ENDDATE)
            return QDate::fromString(QString::fromStdString(booking1->toDate),"yyyymmdd")
            <QDate::fromString(QString::fromStdString(booking2->toDate),"yyyymmdd");
    else
        return false;
}
