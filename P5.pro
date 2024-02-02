QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++20

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Airport.cpp \
    Booking.cpp \
    C:/Users/justa/Downloads/Graph/algorithmen.cpp \
    Customer.cpp \
    FlightBooking.cpp \
    HotelBooking.cpp \
    RentalCarReservation.cpp \
    TrainTicket.cpp \
    Travel.cpp \
    TravelAgency.cpp \
    algorithmen.cpp \
    bookingdetails.cpp \
    check.cpp \
    dialog.cpp \
    main.cpp \
    mainwindow.cpp \
    sortfunktor.cpp \
    travelagencyui.cpp

HEADERS += \
    Airport.h \
    Booking.h \
    C:/Users/justa/Downloads/Graph/graph.h \
    Customer.h \
    FlightBooking.h \
    HotelBooking.h \
    RentalCarReservation.h \
    TrainTicket.h \
    Travel.h \
    TravelAgency.h \
    bookingdetails.h \
    check.h \
    dialog.h \
    graph.h \
    mainwindow.h \
    sortfunktor.h \
    travelagencyui.h

FORMS += \
    bookingdetails.ui \
    dialog.ui \
    mainwindow.ui \
    travelagencyui.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icons.qrc

DISTFILES += \
    car.png \
    flight.png \
    hotel.png \
    search.png \
    speichern.png \
    train.jpg
