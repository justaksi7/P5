#include "mainwindow.h"
#include "travelagencyui.h"
#include "TravelAgency.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    shared_ptr<TravelAgency>inTravelAgency=make_shared<TravelAgency>();
    TravelAgencyUI w(inTravelAgency);
    w.show();
    return a.exec();
}
