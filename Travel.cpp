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
    this->graph=new Digraph<shared_ptr<Booking>,20>;
}

shared_ptr<Booking> Travel::findBooking(string id)
{
    for(const auto& booking:travelBookings)
    {
        if(id==booking->id)
        {
            return booking;
        }
    }
}

int Travel::findBookingIndex(string id)
{
    for(int i=0;i<travelBookings.size();i++)
    {
        if(id==travelBookings[i]->id)
        {
            return i;
        }
    }
}

void Travel::sortVertexDataVector()
{
    initializeGraph();
    DepthFirstSearch(*graph);
    for(int i=0;i<VertexDataVector.size();i++)
    {
        VertexDataVector[i].endTime=graph->getEnd(i);
    }
    std::sort(VertexDataVector.begin(),VertexDataVector.end(),[](VertexData v1, VertexData v2)->bool
              {return v1.endTime<v2.endTime;});
    string s;
    for(int i=0;i<VertexDataVector.size();i++)
    {
        s=s+to_string(VertexDataVector[i].endTime)+" ";
    }
    VertexDatastring=QString::fromStdString(s);
}

void Travel::initializeGraph()
{
    //insert Verticies
    for(int i=0;i<travelBookings.size();i++)
    {
        graph->insertVertex(i,travelBookings[i]);
        VertexData v;
        VertexDataVector.push_back(v);
        VertexDataVector[i].booking=travelBookings[i];
        VertexDataVector[i].VertexNumber=i;
    }
    //insert Edges
    for(int i=0;i<travelBookings.size();i++)
    {
        int currentBooking=i;
        int p1;
        int p2;
        if(travelBookings[i]->predecessor1!="0")
        {
            p1=findBookingIndex(travelBookings[i]->predecessor1);
            graph->insertEdge(p1,currentBooking);
        }
        if(travelBookings[i]->predecessor2!="0")
        {
            p2=findBookingIndex(travelBookings[i]->predecessor2);
            graph->insertEdge(p2,currentBooking);
        }

    }
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

Travel::~Travel()
{
    delete graph;
}


