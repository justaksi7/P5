#include "TrainTicket.h"

TrainTicket::TrainTicket()
{
    type="TrainTicket";
}
TrainTicket::TrainTicket(string inID,string inFromDate,string intoDate,double inPrice,string inFromStation,
                         string inToStation,string inArrivalTime,string inDepartureTime,
                         vector<string>inConnectingStations,long inTravelId,string inBookingClass)
{
    id=inID;fromDate=inFromDate;toDate=intoDate,price=inPrice,fromDestination=inFromStation;toDestination=inToStation;
    arrivalTime=inArrivalTime;departureTime=inDepartureTime;type="TrainTicket";travelId=inTravelId;
    bookingClass=inBookingClass;
}
void TrainTicket::setArrivalTime(string inArrivalTime)
{arrivalTime=inArrivalTime;}
void TrainTicket::setDepartureTime(string inDepartureTime)
{departureTime=inDepartureTime;}
void TrainTicket::setFromDate(string inFromdate)
{fromDate=inFromdate;}
void TrainTicket::setFromStation(string inFromStation)
{fromDestination=inFromStation;}
void TrainTicket::setID(string inID)
{id=inID;}
void TrainTicket::setPrice(double inPrice)
{price=inPrice;}
void TrainTicket::setToDate(string inToDate)
{toDate=inToDate;}
void TrainTicket::setToStation(string inToStation)
{toDestination=inToStation;}
std::string TrainTicket::showDetails()
{
    string cstations="Connecting stations:\n";
    for(const auto& station:connectingStations)
    {
        cstations=cstations+station.stationName+" ";
    }
    string returnstring="Zugbuchung: \nID: "+id+"\nFrom: "+fromDestination+"\nTo: "+toDestination+"\nFrom date: "
                          +fromDate+"\nTo date: "+toDate+"\nArrival time: "+arrivalTime
                          +"\nDeparture time: "+departureTime+"\nPrice: "+to_string(price)+"\n"+cstations+"\n"+"\n";
    return returnstring;
}
string TrainTicket::getArrivalTime(){return arrivalTime;}
string TrainTicket::getConnectingStations(){
    string cs="";
    for(const auto& eintrag:connectingStations){
        cs=cs+eintrag.stationName+"\n";
    }
    return cs;
}
string TrainTicket::getDepartureTime(){return departureTime;}
string TrainTicket::getFromDate(){return fromDate;}
string TrainTicket::getFromStation(){return fromDestination;}
string TrainTicket::getID(){return id;}
double TrainTicket::getPrice(){return price;}
string TrainTicket::getToDate(){return toDate;}
string TrainTicket::getToStation(){return toDestination;}
long TrainTicket::getTravelId(){return travelId;}

json TrainTicket::setgeojson()
{
    vector<pair<double,double>>coordinates;
    vector<string>stationnames;
    coordinates.push_back({fromStationLongtitude,fromStationLatitude});
    for(const auto& station:connectingStations)
    {
        coordinates.push_back({station.longtitude,station.latitude});
    }
    coordinates.push_back({toStationLongtitude,toStationLatitude});
    for(const auto& station:connectingStations)
    {
        stationnames.push_back(station.stationName);
    }
    json geojson={
        {"type", "Feature"},
        {"geometry", {
                         {"type", "LineString"},
                      {"coordinates",coordinates}
                     }},
        {"properties", {
                           {"id",id},
                           {"Buchungstyp","Zugbuchung"},
                           {"fromStation",fromDestination},
                           {"Ueber",stationnames},
                           {"toStation", toDestination}
                       }}
    };
    return geojson;
}
