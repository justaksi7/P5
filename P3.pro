QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Booking.cpp \
    Customer.cpp \
    FlightBooking.cpp \
    HotelBooking.cpp \
    RentalCarReservation.cpp \
    TrainTicket.cpp \
    Travel.cpp \
    TravelAgency.cpp \
    bookingdetails.cpp \
    dialog.cpp \
    main.cpp \
    mainwindow.cpp \
    sortfunktor.cpp \
    travelagencyui.cpp

HEADERS += \
    Booking.h \
    Customer.h \
    FlightBooking.h \
    HotelBooking.h \
    RentalCarReservation.h \
    TrainTicket.h \
    Travel.h \
    TravelAgency.h \
    bookingdetails.h \
    dialog.h \
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
    P3.pro.user \
    search.png
