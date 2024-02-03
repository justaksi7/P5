#include "check.h"
#include <QMessageBox>
#include <QDate>
void Check::operator()()
{

}

void Check::checkTravelsDisjunct()
{
    QString message;
    for (const auto &travel1 : travelAgency->allTravels)
    {
        for (const auto &travel2 : travelAgency->allTravels)
        {
            if (travel1->customerId == travel2->customerId && travel1->id!= travel2->id)
            {

                if (QDate::fromString(QString::fromStdString(travel1->getEndDate()),"yyyyMMdd") >= QDate::fromString(QString::fromStdString(travel2->getStartDate()),"yyyyMMdd")
                    && QDate::fromString(QString::fromStdString(travel1->getEndDate()),"yyyyMMdd") <= QDate::fromString(QString::fromStdString(travel2->getEndDate()),"yyyyMMdd"))
                {
                    message = QString("Überlappung festgestellt zwischen Travel IDs %1 und %2 von Customer &3.")
                                       .arg(travel1->id)
                                       .arg(travel2->id)
                                       .arg(travel1->customerId);
                    travelAgency->errorVector.push_back(message);
                }
                else                 if (QDate::fromString(QString::fromStdString(travel1->getStartDate()),"yyyyMMdd") >= QDate::fromString(QString::fromStdString(travel2->getStartDate()),"yyyyMMdd")
                    && QDate::fromString(QString::fromStdString(travel1->getStartDate()),"yyyyMMdd") <= QDate::fromString(QString::fromStdString(travel2->getEndDate()),"yyyyMMdd"))
                {
                    message = QString("Überlappung festgestellt zwischen Travel IDs %1 und %2 von Customer &3.")
                                       .arg(travel1->id)
                                       .arg(travel2->id)
                                       .arg(travel1->customerId);
                    travelAgency->errorVector.push_back(message);
                }
            }
        }
    }
}

void Check::checkNoMissingHotels()
{
    QString message;

    for(const auto& travel:travelAgency->allTravels)
    {
        for(int i=0;i<travel->VertexDataVector.size();i++)
        {
            shared_ptr<Booking>temp1=travel->VertexDataVector[i].booking;
            for(int j=i+1;j<travel->VertexDataVector.size();j++)
            {
                shared_ptr<Booking>temp2=travel->VertexDataVector[j].booking;
                if(temp1!=dynamic_pointer_cast<RentalCarReservation>(temp1))
                {
                    if(QDate::fromString(QString::fromStdString(temp2->fromDate),"yyyyMMdd")
                       >QDate::fromString(QString::fromStdString(temp1->toDate),"yyyyMMdd"))
                    {
                        string stdmessage;
                        stdmessage="Missing hotel! Travel: "+to_string(temp1->travelId)
                                     +" between booking"+temp1->id+" and "+temp2->id;
                        message=QString::fromStdString(stdmessage);
                        travelAgency->errorVector.push_back(message);
                    }
                }
            }
        }
    }
}

void Check::checkNoOverlappingHotels()
{
    QString message;

    for(const auto& travel:travelAgency->allTravels)
    {
        for(int i=0;i<travel->VertexDataVector.size();i++)
        {
            shared_ptr<Booking>temp1=travel->VertexDataVector[i].booking;
            for(int j=i+1;j<travel->VertexDataVector.size();j++)
            {
                shared_ptr<Booking>temp2=travel->VertexDataVector[j].booking;
                if(temp1!=dynamic_pointer_cast<RentalCarReservation>(temp1))
                {
                    if(QDate::fromString(QString::fromStdString(temp2->fromDate),"yyyyMMdd")
                        <QDate::fromString(QString::fromStdString(temp1->toDate),"yyyyMMdd"))
                    {
                        string stdmessage;
                        stdmessage="Overlapping hotel! Travel: "+to_string(temp1->travelId)
                                     +" between booking"+temp1->id+" and "+temp2->id;
                        message=QString::fromStdString(stdmessage);
                        travelAgency->errorVector.push_back(message);
                    }
                }
            }
        }
    }
}

void Check::checkNoOverlappingRentalCars()
{
    QString message;

    for(const auto& travel:travelAgency->allTravels)
    {
        for(int i=0;i<travel->VertexDataVector.size();i++)
        {
            shared_ptr<Booking>temp1=travel->VertexDataVector[i].booking;
            for(int j=i+1;j<travel->VertexDataVector.size();j++)
            {
                shared_ptr<Booking>temp2=travel->VertexDataVector[j].booking;
                if(temp1!=dynamic_pointer_cast<HotelBooking>(temp1))
                {
                    if(QDate::fromString(QString::fromStdString(temp2->fromDate),"yyyyMMdd")
                        >QDate::fromString(QString::fromStdString(temp1->toDate),"yyyyMMdd"))
                    {
                        string stdmessage;
                        stdmessage="Overlapping Rental car reservation! Travel: "+to_string(temp1->travelId)
                                     +" between booking"+temp1->id+" and "+temp2->id;
                        message=QString::fromStdString(stdmessage);
                        travelAgency->errorVector.push_back(message);
                    }
                }
            }
        }
    }
}

void Check::checkForChanges()
{

}

Check::Check(shared_ptr<TravelAgency> inTravelAgency)
{
    this->travelAgency=inTravelAgency;
}

Check::~Check()
{

}
