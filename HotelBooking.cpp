#include "HotelBooking.h"
HotelBooking::HotelBooking(){type="HotelBooking";}
HotelBooking::HotelBooking(string inID, string inFromDate, string inToDate, string inTown,
                           string inHotel, double inPrice, long inTravelId, string InRoomType)
{
    id=inID;fromDate=inFromDate;toDate=inToDate;town=inTown;
    hotel=inHotel;price=inPrice;type="HotelBooking";travelId=inTravelId;roomType=InRoomType;
}
void HotelBooking::setFromDate(string inFromdate)
{fromDate=inFromdate;}
void HotelBooking::setHotel(string inHotel)
{hotel=inHotel;}
void HotelBooking::setID(string inID)
{id=inID;}
void HotelBooking::setPrice(double inPrice)
{price=inPrice;}
void HotelBooking::setToDate(string inToDate)
{toDate=inToDate;}
void HotelBooking::setTown(string inTown)
{town=inTown;}
string HotelBooking::getID(){return id;}
string HotelBooking::getFromDate(){return fromDate;}
string HotelBooking::getHotel(){return hotel;}
string HotelBooking::getToDate(){return toDate;}
string HotelBooking::getTown(){return town;}
double HotelBooking::getPrice(){return price;}
long HotelBooking::getTravelId(){return travelId;}
string HotelBooking::showDetails()
{
    string returnstring="ID: "+id+"\nHotel: "+hotel+"\nTown: "+town+"\nFrom date: "+fromDate+"\nTo date: "+toDate
                          +"\nPrice: "+to_string(price)+"\n"+"\n";
    return returnstring;
}

json HotelBooking::setgeojson()
{
    json geojson={
        {"type", "Feature"},
        {"geometry", {
                         {"type", "Point"},
                         {"coordinates", {hotelLongtitude, hotelLatitude}}
                     }},
        {"properties", {
                           {"Buchungstyp","Hotelbuchung"},
                           {"id", id},
                           {"Hotel",hotel},
                       }}
    };
    return geojson;
}
