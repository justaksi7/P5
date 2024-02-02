#include "check.h"
#include <QMessageBox>
#include <QDate>
void Check::operator()()
{

}

bool Check::checkTravelsDisjunct(QString &message)
{
    for (const auto &travel1 : travelAgency->allTravels)
    {
        for (const auto &travel2 : travelAgency->allTravels)
        {
            if (travel1->customerId == travel2->customerId && travel1->id!= travel2->id)
            {

                if (QDate::fromString(QString::fromStdString(travel1->getEndDate())) >= QDate::fromString(QString::fromStdString(travel2->getStartDate()))
                    && QDate::fromString(QString::fromStdString(travel1->getEndDate())) <= QDate::fromString(QString::fromStdString(travel2->getEndDate())))
                {

                    message = QString("Überlappung festgestellt zwischen Travel IDs %1 und %2 von Customer &3.")
                                       .arg(travel1->id)
                                       .arg(travel2->id)
                                       .arg(travel1->customerId);
                    return false;
                }
            }
        }
    }


    return true;
}

void Check::checkForChanges()
{
    QString errorMessage;
    if (!checkTravelsDisjunct(errorMessage))
    {

        //QMessageBox::critical(nullptr, "Überlappung festgestellt", errorMessage);
    }
}

Check::Check(shared_ptr<TravelAgency> inTravelAgency)
{
    this->travelAgency=inTravelAgency;
}
