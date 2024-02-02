#include "TravelAgency.h"
#include <fstream>
#include <sortfunktor.h>
#include <QDate>
#include <QIcon>
#include "QTableWidget"
#include "QDesktopServices"
#include <QString>
#include <QUrl>

shared_ptr<Booking>TravelAgency::findBooking(string id){
    for(const auto& item:allBookings)
    {
        if(id==item->getid())
        {
            return item;
            break;
        }
    }
    return nullptr;
}

shared_ptr<Travel>TravelAgency::findTravel(long id){
    for(const auto& item:allTravels)
    {
        if(id==item->getid())
        {
            return item;
            break;
        }
    }
    return nullptr;
}

shared_ptr<Customer>TravelAgency::findCustomer(long id){
    for(const auto& item:allCustomers)
    {
        if(id==item->getid())
        {
            return item;
            break;
        }
    }
    return nullptr;
}
TravelAgency::~TravelAgency(){

}

bool TravelAgency::customerExists(long inid)
{
    bool found=false;
    for(const auto& customer:allCustomers)
    {
        if(customer->getid()==inid)
        {
            found=true;
        }
    }
    return found;
}
bool TravelAgency::travelExists(long inid)
{
    bool found=false;
    for(const auto& travel:allTravels)
    {
        if(travel->getid()==inid)
        {
            found=true;
        }
    }
    return found;
}
void TravelAgency::readFile(string inJSONname)
{
    if(inJSONname!=""){

        ifstream file(inJSONname);
        json jsonArray;
        file>>jsonArray;
        int flight=0;int train=0;int car=0;int hotel=0;
        jsonsize=jsonArray.size();
        if(jsonArray.is_array())
        {
            for(const auto& item:jsonArray)
            {
                long customerId=item["customerId"];
                long travelId=item["travelId"];
                string id=item["id"];
                string type=item["type"];
                if(customerExists(customerId)==false)
                {
                    allCustomers.push_back(make_shared<Customer>(customerId,item["customerLastName"],item["customerFirstName"]));
                }

                if(travelExists(travelId)==false)
                {
                    allTravels.push_back(make_shared<Travel>(travelId,customerId));
                }

                if(type=="Flight")
                {
                    flight++;
                    FlightBooking inFlightBooking(item["airline"],item["id"],item["fromDate"],item["toDate"],
                                                  item["fromDest"],item["toDest"],item["price"],
                                                  travelId,item["bookingClass"]);
                    if(item.contains("predecessor1")){inFlightBooking.predecessor1=item["predecessor1"];}
                    if(item.contains("predecessor2")){inFlightBooking.predecessor1=item["predecessor2"];}
                    inFlightBooking.type=type;
                    inFlightBooking.customerId=customerId;
                    inFlightBooking.travelId=travelId;
                    inFlightBooking.customerFirstname=item["customerFirstName"];
                    inFlightBooking.customerLastname=item["customerLastName"];
                    inFlightBooking.fromDestLatitude=item["fromDestLatitude"];
                    inFlightBooking.fromDestLongtitude=item["fromDestLongitude"];
                    inFlightBooking.toDestLatitude=item["toDestLatitude"];
                    inFlightBooking.toDestLongtitude=item["toDestLongitude"];
                    allBookings.push_back(make_shared<FlightBooking>(inFlightBooking));
                    findTravel(travelId)->addBooking(allBookings[allBookings.size()-1]);
                }
                else if(type=="Hotel")
                {
                    hotel++;
                    HotelBooking inHotelBooking(item["id"],item["fromDate"],item["toDate"],item["town"],
                                                item["hotel"],item["price"],travelId,item["roomType"]);
                    if(item.contains("predecessor1")){inHotelBooking.predecessor1=item["predecessor1"];}
                    if(item.contains("predecessor2")){inHotelBooking.predecessor1=item["predecessor2"];}
                    inHotelBooking.type=type;
                    inHotelBooking.customerId=customerId;
                    inHotelBooking.travelId=travelId;
                    inHotelBooking.customerFirstname=item["customerFirstName"];
                    inHotelBooking.customerLastname=item["customerLastName"];
                    inHotelBooking.hotelLatitude=item["hotelLatitude"];
                    inHotelBooking.hotelLongtitude=item["hotelLongitude"];
                    allBookings.push_back(make_shared<HotelBooking>(inHotelBooking));
                    findTravel(travelId)->addBooking(allBookings[allBookings.size()-1]);
                }
                else if(type=="RentalCar")
                {
                    car++;
                    RentalCarReservation inRentalCarReservation(id,item["fromDate"],item["toDate"],item["company"],
                                                                item["pickupLocation"],item["returnLocation"],
                                                                item["price"],travelId,item["vehicleClass"]);
                    if(item.contains("predecessor1")){inRentalCarReservation.predecessor1=item["predecessor1"];}
                    if(item.contains("predecessor2")){inRentalCarReservation.predecessor1=item["predecessor2"];}
                    inRentalCarReservation.type=type;
                    inRentalCarReservation.customerId=customerId;
                    inRentalCarReservation.travelId=travelId;
                    inRentalCarReservation.customerFirstname=item["customerFirstName"];
                    inRentalCarReservation.customerLastname=item["customerLastName"];
                    inRentalCarReservation.returnLatitude=item["returnLatitude"];
                    inRentalCarReservation.returnLongtitude=item["returnLongitude"];
                    inRentalCarReservation.pickupLatitude=item["pickupLatitude"];
                    //inRentalCarReservation.pickupLongtitude=item["pickupLongitude"];
                    allBookings.push_back(make_shared<RentalCarReservation>(inRentalCarReservation));
                    findTravel(travelId)->addBooking(allBookings[allBookings.size()-1]);
                }
                else if(type=="Train")
                {
                    train++;
                    vector<string>inConnectingStations;
                    TrainTicket inTrainTicket(id,item["fromDate"],item["toDate"],item["price"],item["fromStation"],
                                              item["toStation"],item["arrivalTime"],item["departureTime"],inConnectingStations,
                                              item["travelId"], item["ticketType"]);
                    if(item.contains("predecessor1")){inTrainTicket.predecessor1=item["predecessor1"];}
                    if(item.contains("predecessor2")){inTrainTicket.predecessor1=item["predecessor2"];}
                    inTrainTicket.type=type;
                    inTrainTicket.customerId=customerId;
                    inTrainTicket.travelId=travelId;
                    inTrainTicket.customerFirstname=item["customerFirstName"];
                    inTrainTicket.customerLastname=item["customerLastName"];
                    inTrainTicket.toStationLongtitude=item["toStationLongitude"];
                    inTrainTicket.toStationLatitude=item["toStationLatitude"];
                    inTrainTicket.fromStationLongtitude=item["fromStationLongitude"];
                    inTrainTicket.fromStationLatitude=item["fromStationLatitude"];
                    for(const auto& subitem:item["connectingStations"])
                    {
                        ConnectingStation cs;
                        cs.latitude=subitem["latitude"];
                        cs.longtitude=subitem["longitude"];
                        cs.stationName=subitem["stationName"];
                        inTrainTicket.connectingStations.push_back(cs);
                    }

                    allBookings.push_back(make_shared<TrainTicket>(inTrainTicket));
                    findTravel(travelId)->addBooking(allBookings[allBookings.size()-1]);
                }
            }
            for(const auto& travel:allTravels)
            {
                findCustomer(travel->getCustomerID())->addTravel(travel);
            }
            einlesenMeldung="Es wurden "+to_string(train)+" Zugbuchungen, "+to_string(car)+" Mietwagenbuchungen, "
                              +to_string(flight)+" Flugbuchungen "+to_string(hotel)+
                              " Hotelbuchungen gefunden. Es wurden "+to_string(this->gettravelsssite())+" Reisen und "+
                              to_string(this->getcustomerssize())+" Kunden angelegt. "+"Kunde 1 hat "+
                              to_string(this->findCustomer(1)->travelList.size())
                              +" Reisen, Reise 17 hat "+to_string(this->findTravel(17)->travelBookings.size())+" Buchungen";
        }
    }
    else{einlesenMeldung="Fehler";}
    ifstream iatafile("iatacodes.json");
    json iatajson;
    iatafile>>iatajson;
    for(const auto& item:iatajson)
    {
        string iata=item["iata_code"];
        Airport a;
        a.iata_code=iata;
        a.iso_country=item["iso_country"];
        a.municipality=item["municipality"];
        a.name=item["name"];
        airports.insert({iata,make_shared<Airport>(a)});
    }
}

void TravelAgency::writeFile(string inJSONname)
{
    if(inJSONname!=""){
        ofstream file(inJSONname);
        string jsonString;
        json jsonArray;
        for(const auto& booking:allBookings)
        {
            json jsonBooking;
            if(dynamic_pointer_cast<FlightBooking>(booking))
            {
                shared_ptr<FlightBooking> f=dynamic_pointer_cast<FlightBooking>(booking);

                jsonBooking["customerId"]=f->customerId;
                jsonBooking["travelId"]=f->travelId;
                jsonBooking["id"]=f->id;
                jsonBooking["customerLastName"]=f->customerLastname;
                jsonBooking["customerFirstName"]=f->customerFirstname;
                jsonBooking["fromDate"]=f->fromDate;
                jsonBooking["toDate"]=f->toDate;
                jsonBooking["fromDest"]=f->fromDestination;
                jsonBooking["toDest"]=f->toDestination;
                jsonBooking["type"]=f->type;
                jsonBooking["bookingClass"]=f->bookingClass;
                jsonBooking["price"]=f->price;
                jsonBooking["airline"]=f->airline;
                jsonBooking["fromDestLatitude"]=f->fromDestLatitude;
                jsonBooking["fromDestLongitude"]=f->fromDestLongtitude;
                jsonBooking["toDestLongitude"]=f->toDestLongtitude;
                jsonBooking["toDestLatitude"]=f->toDestLatitude;
                jsonArray.push_back(jsonBooking);
            }
            else if(dynamic_pointer_cast<HotelBooking>(booking))
            {
                shared_ptr<HotelBooking> h=dynamic_pointer_cast<HotelBooking>(booking);

                jsonBooking["customerId"]=h->customerId;
                jsonBooking["travelId"]=h->travelId;
                jsonBooking["id"]=h->id;
                jsonBooking["customerLastName"]=h->customerLastname;
                jsonBooking["customerFirstName"]=h->customerFirstname;
                jsonBooking["fromDate"]=h->fromDate;
                jsonBooking["toDate"]=h->toDate;
                jsonBooking["type"]=h->type;
                jsonBooking["price"]=h->price;
                jsonBooking["roomType"]=h->roomType;
                jsonBooking["town"]=h->town;
                jsonBooking["hotel"]=h->hotel;
                jsonBooking["hotelLatitude"]=h->hotelLatitude;
                jsonBooking["hotelLongitude"]=h->hotelLongtitude;
                jsonArray.push_back(jsonBooking);
            }
            else if(dynamic_pointer_cast<RentalCarReservation>(booking))
            {
                shared_ptr<RentalCarReservation> r=dynamic_pointer_cast<RentalCarReservation>(booking);

                jsonBooking["customerId"]=r->customerId;
                jsonBooking["travelId"]=r->travelId;
                jsonBooking["id"]=r->id;
                jsonBooking["customerLastName"]=r->customerLastname;
                jsonBooking["customerFirstName"]=r->customerFirstname;
                jsonBooking["fromDate"]=r->fromDate;
                jsonBooking["toDate"]=r->toDate;
                jsonBooking["type"]=r->type;
                jsonBooking["price"]=r->price;
                jsonBooking["vehicleClass"]=r->vehicleClass;
                jsonBooking["pickupLocation"]=r->pickupLocation;
                jsonBooking["returnLocation"]=r->returnLocation;
                jsonBooking["company"]=r->company;
                jsonBooking["pickupLongitude"]=r->pickupLongtitude;
                jsonBooking["pickupLatitude"]=r->pickupLatitude;
                jsonBooking["returnLatitude"]=r->returnLatitude;
                jsonBooking["returnLongitude"]=r->returnLongtitude;
                jsonArray.push_back(jsonBooking);
            }
            else if(dynamic_pointer_cast<TrainTicket>(booking))
            {
                shared_ptr<TrainTicket> t=dynamic_pointer_cast<TrainTicket>(booking);

                jsonBooking["customerId"]=t->customerId;
                jsonBooking["travelId"]=t->travelId;
                jsonBooking["id"]=t->id;
                jsonBooking["customerLastName"]=t->customerLastname;
                jsonBooking["customerFirstName"]=t->customerFirstname;
                jsonBooking["fromDate"]=t->fromDate;
                jsonBooking["toDate"]=t->toDate;
                jsonBooking["type"]=t->type;
                jsonBooking["price"]=t->price;
                jsonBooking["fromStation"]=t->fromDestination;
                jsonBooking["toStation"]=t->toDestination;
                jsonBooking["ticketType"]=t->bookingClass;
                jsonBooking["arrivalTime"]=t->arrivalTime;
                jsonBooking["departureTime"]=t->departureTime;
                jsonBooking["fromStationLatitude"]=t->fromStationLatitude;
                jsonBooking["fromStationLongitude"]=t->fromStationLongtitude;
                jsonBooking["toStationLatitude"]=t->toStationLatitude;
                jsonBooking["toStationLongitude"]=t->toStationLongtitude;
                json cs;
                for(const auto& item:t->connectingStations)
                {
                    json subitem;
                    subitem["stationName"]=item.stationName;
                    subitem["latitude"]=item.latitude;
                    subitem["longitude"]=item.longtitude;
                    cs.push_back(subitem);
                }
                jsonBooking["connectingStations"]=cs;
                jsonArray.push_back(jsonBooking);
            }

        }
        jsonString=jsonArray.dump(4);
        file<<std::setw(4)<<jsonArray<<std::endl;
        file.close();
    }
}
void TravelAgency::setTravels(long customerID, QTableWidget *travelsTable)
{
    travelsTable->clear();
    travelsTable->setRowCount(0);
    QStringList headers={"Reise ID","Beginn der Reise","Ende der Reise"};
    travelsTable->setHorizontalHeaderLabels(headers);
    travelsTable->setColumnWidth(0,175);
    travelsTable->setColumnWidth(1,175);
    travelsTable->setColumnWidth(2,175);
    int row=0;
    for(const auto& travel:this->findCustomer(customerID)->travelList)
    {
        travelsTable->insertRow(row);
        QTableWidgetItem *id=new QTableWidgetItem(QString::number(travel->getid()));
        QTableWidgetItem *startdate=new QTableWidgetItem(QString::fromStdString(travel->getStartDate()));
        QTableWidgetItem *enddate=new QTableWidgetItem(QString::fromStdString(travel->getEndDate()));
        travelsTable->setItem(row,0,id);
        travelsTable->setItem(row,1,startdate);
        travelsTable->setItem(row,2,enddate);
        row++;
    }
}
void TravelAgency::setBookings(long travelID, QTableWidget *bookingsTable)
{
    bookingsTable->clear();
    bookingsTable->setRowCount(0);
    QStringList headers={"Buchungstyp","Beginn der Buchung","Ende der Buchung","Preis"};
    bookingsTable->setHorizontalHeaderLabels(headers);
    bookingsTable->setColumnWidth(0,125);
    bookingsTable->setColumnWidth(1,125);
    bookingsTable->setColumnWidth(2,125);
    bookingsTable->setColumnWidth(3,125);
    int row=0;
    for(int i=findTravel(travelID)->travelBookings.size()-1;i>=0;i--)
    {
        shared_ptr<Booking> booking=findTravel(travelID)->travelBookings[i];
        bookingsTable->insertRow(row);
        if(dynamic_pointer_cast<RentalCarReservation>(booking))
        {
            QIcon iconitem=QIcon(":/car.png");
            QTableWidgetItem *icon;
            QTableWidgetItem *start;
            QTableWidgetItem *end;
            QTableWidgetItem *price;
            start=new QTableWidgetItem(QString::fromStdString(booking->fromDate));
            end=new QTableWidgetItem(QString::fromStdString(booking->toDate));
            icon=new QTableWidgetItem;
            price=new QTableWidgetItem(QString::number(booking->price));
            icon->setIcon(iconitem);
            bookingsTable->setItem(row,0,icon);
            bookingsTable->setItem(row,1,start);
            bookingsTable->setItem(row,2,end);
            bookingsTable->setItem(row,3,price);
        }
        else if(dynamic_pointer_cast<FlightBooking>(booking))
        {
            QIcon iconitem=QIcon(":/flight.png");
            QTableWidgetItem *icon;
            QTableWidgetItem *start;
            QTableWidgetItem *end;
            QTableWidgetItem *price;
            start=new QTableWidgetItem(QString::fromStdString(booking->fromDate));
            end=new QTableWidgetItem(QString::fromStdString(booking->toDate));
            icon=new QTableWidgetItem;
            price=new QTableWidgetItem(QString::number(booking->price));
            icon->setIcon(iconitem);
            bookingsTable->setItem(row,0,icon);
            bookingsTable->setItem(row,1,start);
            bookingsTable->setItem(row,2,end);
            bookingsTable->setItem(row,3,price);
        }
        else if(dynamic_pointer_cast<HotelBooking>(booking))
        {
            QIcon iconitem=QIcon(":/hotel.png");
            QTableWidgetItem *icon;
            QTableWidgetItem *start;
            QTableWidgetItem *end;
            QTableWidgetItem *price;
            start=new QTableWidgetItem(QString::fromStdString(booking->fromDate));
            end=new QTableWidgetItem(QString::fromStdString(booking->toDate));
            icon=new QTableWidgetItem;
            price=new QTableWidgetItem(QString::number(booking->price));
            icon->setIcon(iconitem);
            bookingsTable->setItem(row,0,icon);
            bookingsTable->setItem(row,1,start);
            bookingsTable->setItem(row,2,end);
            bookingsTable->setItem(row,3,price);
        }
        else if(dynamic_pointer_cast<TrainTicket>(booking))
        {
            QIcon iconitem=QIcon(":/train.jpg");
            QTableWidgetItem *icon;
            QTableWidgetItem *start;
            QTableWidgetItem *end;
            QTableWidgetItem *price;
            start=new QTableWidgetItem(QString::fromStdString(booking->fromDate));
            end=new QTableWidgetItem(QString::fromStdString(booking->toDate));
            icon=new QTableWidgetItem;
            price=new QTableWidgetItem(QString::number(booking->price));
            icon->setIcon(iconitem);
            bookingsTable->setItem(row,0,icon);
            bookingsTable->setItem(row,1,start);
            bookingsTable->setItem(row,2,end);
            bookingsTable->setItem(row,3,price);
        }
    }
}


