#include "Customer.h"

long Customer::getid(){return id;}

Customer::Customer(long inID, string inLastName, string inFirstName)
{
    id=inID;lastName=inLastName;firstName=inFirstName;
}

void Customer::addTravel(shared_ptr<Travel> travel)
{
    travelList.push_back(travel);
    travel->setCustomerID(this->id);
}

Customer::~Customer()
{

}
