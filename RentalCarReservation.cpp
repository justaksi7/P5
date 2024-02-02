#include "RentalCarReservation.h"

RentalCarReservation::RentalCarReservation()
{
    type="RentalCarReservation";
}
RentalCarReservation::RentalCarReservation(string inID,string inFromDate, string inToDate,string inCompany,
                                           string inPickupLocation,string inReturnLocation,double inPrice,
                                           long inTravelId,string inVehicleClass)
{
    id=inID;fromDate=inFromDate;toDate=inToDate;company=inCompany;
    pickupLocation=inPickupLocation;returnLocation=inReturnLocation;
    price=inPrice;type="RentalCarReservation";travelId=inTravelId;
    vehicleClass=inVehicleClass;
}
void RentalCarReservation::setCompany(string inCompany)
{company=inCompany;}
void RentalCarReservation::setFromDate(string inFromdate)
{fromDate=inFromdate;}
void RentalCarReservation::setID(string inID)
{id=inID;}
void RentalCarReservation::setPickupLocation(string inPickupLocation)
{pickupLocation=inPickupLocation;}
void RentalCarReservation::setPrice(double inPrice)
{price=inPrice;}
void RentalCarReservation::setReturnLocation(string inReturnLocation)
{returnLocation=inReturnLocation;}
void RentalCarReservation::setToDate(string inToDate)
{toDate=inToDate;}
string RentalCarReservation::showDetails()
{
    string returnstring="Mietwagenbuchung: \nID: "+id+"\nCompany: "+company+"\nPickup location: "+pickupLocation
                          +"\nReturn location:"+returnLocation+"\nFrom date: "+fromDate+"\nTo date: "+toDate
                          +"\nPrice: "+to_string(price)+"\n"+"\n";
    return returnstring;
}
string RentalCarReservation::getCompany(){return company;}
string RentalCarReservation::getFromDate(){return toDate;}
string RentalCarReservation::getID(){return id;}
string RentalCarReservation::getPickupLocation(){return pickupLocation;}
double RentalCarReservation::getPrice(){return price;}
string RentalCarReservation::getReturnLocation(){return returnLocation;}
string RentalCarReservation::getToDate(){return toDate;}
long RentalCarReservation::getTravelId(){return travelId;}

json RentalCarReservation::setgeojson()
{
    json geojson;
    if(pickupLocation==returnLocation)
    {
        geojson={
            {"type", "Feature"},
            {"geometry", {
                             {"type", "Point"},
                             {"coordinates", {pickupLongtitude, pickupLatitude}}
                         }},
            {"properties", {
                               {"Buchungstyp","Mietwagenbuchung"},
                               {"id", id},
                               {"company",company},
                               {"pickupLocation", pickupLocation},
                               {"returnLocation", returnLocation}
                           }}
        };
    }
    else
    {
        geojson={
            {"type", "Feature"},
            {"geometry", {
                             {"type", "LineString"},
                             {"coordinates", {
                                                 {pickupLongtitude, pickupLatitude},
                                                 {returnLongtitude, returnLatitude}
                                             }}
                         }},
            {"properties", {
                               {"Buchungstyp", "Mietwagenbuchung"},
                               {"id", id},
                               {"company", company},
                               {"pickupLocation", pickupLocation},
                               {"returnLocation", returnLocation}
                           }}
        };
    }
    return geojson;
}
