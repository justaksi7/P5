/********************************************************************************
** Form generated from reading UI file 'bookingdetails.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKINGDETAILS_H
#define UI_BOOKINGDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bookingDetails
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *Flug;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *flugID;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_13;
    QLineEdit *flugAirline;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *flugFromDate;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLineEdit *flugToDate;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLineEdit *flugFromDest;
    QLineEdit *fromName;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_10;
    QLineEdit *flugToDest;
    QLineEdit *toName;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_12;
    QLineEdit *flugClass;
    QHBoxLayout *horizontalLayout_34;
    QLabel *label_11;
    QLineEdit *flugPrice;
    QWidget *Zug;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_14;
    QLineEdit *zugID;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_22;
    QLineEdit *zugClass;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_16;
    QLineEdit *zugFromDate;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_24;
    QLineEdit *zugPrice;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_17;
    QLineEdit *zugToDate;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_18;
    QLineEdit *zugFrom;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_19;
    QLineEdit *zugTo;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_20;
    QLineEdit *zugDeparture;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_21;
    QLineEdit *zugArrival;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_23;
    QListWidget *zugCS;
    QWidget *Mietwagen;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_30;
    QLineEdit *carPickUp;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_32;
    QLineEdit *carPrice;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_27;
    QLineEdit *carClass;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_31;
    QLineEdit *carReturn;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_33;
    QLineEdit *carCompany;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_28;
    QLineEdit *carFromDate;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_29;
    QLineEdit *carToDate;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_25;
    QLineEdit *carID;
    QWidget *Hotel;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_39;
    QLineEdit *hotelTown;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_40;
    QLineEdit *hotelFromDate;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_42;
    QLineEdit *hotelPrice;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_41;
    QLineEdit *hotelToDate;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_38;
    QLineEdit *hotelClass;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_34;
    QLineEdit *hotelID;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_36;
    QLineEdit *hotelHotel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *bookingDetails)
    {
        if (bookingDetails->objectName().isEmpty())
            bookingDetails->setObjectName("bookingDetails");
        bookingDetails->resize(744, 679);
        gridLayout = new QGridLayout(bookingDetails);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(bookingDetails);
        tabWidget->setObjectName("tabWidget");
        Flug = new QWidget();
        Flug->setObjectName("Flug");
        gridLayout_3 = new QGridLayout(Flug);
        gridLayout_3->setObjectName("gridLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(Flug);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        flugID = new QLineEdit(Flug);
        flugID->setObjectName("flugID");
        flugID->setReadOnly(true);

        horizontalLayout->addWidget(flugID);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_13 = new QLabel(Flug);
        label_13->setObjectName("label_13");

        horizontalLayout_2->addWidget(label_13);

        flugAirline = new QLineEdit(Flug);
        flugAirline->setObjectName("flugAirline");

        horizontalLayout_2->addWidget(flugAirline);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_7 = new QLabel(Flug);
        label_7->setObjectName("label_7");

        horizontalLayout_3->addWidget(label_7);

        flugFromDate = new QLineEdit(Flug);
        flugFromDate->setObjectName("flugFromDate");

        horizontalLayout_3->addWidget(flugFromDate);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_8 = new QLabel(Flug);
        label_8->setObjectName("label_8");

        horizontalLayout_4->addWidget(label_8);

        flugToDate = new QLineEdit(Flug);
        flugToDate->setObjectName("flugToDate");

        horizontalLayout_4->addWidget(flugToDate);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_9 = new QLabel(Flug);
        label_9->setObjectName("label_9");

        horizontalLayout_5->addWidget(label_9);

        flugFromDest = new QLineEdit(Flug);
        flugFromDest->setObjectName("flugFromDest");

        horizontalLayout_5->addWidget(flugFromDest);

        fromName = new QLineEdit(Flug);
        fromName->setObjectName("fromName");

        horizontalLayout_5->addWidget(fromName);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label_10 = new QLabel(Flug);
        label_10->setObjectName("label_10");

        horizontalLayout_18->addWidget(label_10);

        flugToDest = new QLineEdit(Flug);
        flugToDest->setObjectName("flugToDest");

        horizontalLayout_18->addWidget(flugToDest);

        toName = new QLineEdit(Flug);
        toName->setObjectName("toName");

        horizontalLayout_18->addWidget(toName);


        verticalLayout_2->addLayout(horizontalLayout_18);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setObjectName("horizontalLayout_32");
        label_12 = new QLabel(Flug);
        label_12->setObjectName("label_12");

        horizontalLayout_32->addWidget(label_12);

        flugClass = new QLineEdit(Flug);
        flugClass->setObjectName("flugClass");

        horizontalLayout_32->addWidget(flugClass);


        verticalLayout_2->addLayout(horizontalLayout_32);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setObjectName("horizontalLayout_34");
        label_11 = new QLabel(Flug);
        label_11->setObjectName("label_11");

        horizontalLayout_34->addWidget(label_11);

        flugPrice = new QLineEdit(Flug);
        flugPrice->setObjectName("flugPrice");

        horizontalLayout_34->addWidget(flugPrice);


        verticalLayout_2->addLayout(horizontalLayout_34);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);

        QIcon icon;
        icon.addFile(QString::fromUtf8("flight.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/flight.png"), QSize(), QIcon::Normal, QIcon::On);
        tabWidget->addTab(Flug, icon, QString());
        Zug = new QWidget();
        Zug->setObjectName("Zug");
        gridLayout_2 = new QGridLayout(Zug);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_14 = new QLabel(Zug);
        label_14->setObjectName("label_14");

        horizontalLayout_7->addWidget(label_14);

        zugID = new QLineEdit(Zug);
        zugID->setObjectName("zugID");
        zugID->setReadOnly(true);

        horizontalLayout_7->addWidget(zugID);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_22 = new QLabel(Zug);
        label_22->setObjectName("label_22");

        horizontalLayout_15->addWidget(label_22);

        zugClass = new QLineEdit(Zug);
        zugClass->setObjectName("zugClass");

        horizontalLayout_15->addWidget(zugClass);


        verticalLayout_3->addLayout(horizontalLayout_15);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");

        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_16 = new QLabel(Zug);
        label_16->setObjectName("label_16");

        horizontalLayout_9->addWidget(label_16);

        zugFromDate = new QLineEdit(Zug);
        zugFromDate->setObjectName("zugFromDate");

        horizontalLayout_9->addWidget(zugFromDate);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_24 = new QLabel(Zug);
        label_24->setObjectName("label_24");

        horizontalLayout_16->addWidget(label_24);

        zugPrice = new QLineEdit(Zug);
        zugPrice->setObjectName("zugPrice");

        horizontalLayout_16->addWidget(zugPrice);


        verticalLayout_3->addLayout(horizontalLayout_16);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_17 = new QLabel(Zug);
        label_17->setObjectName("label_17");

        horizontalLayout_10->addWidget(label_17);

        zugToDate = new QLineEdit(Zug);
        zugToDate->setObjectName("zugToDate");

        horizontalLayout_10->addWidget(zugToDate);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_18 = new QLabel(Zug);
        label_18->setObjectName("label_18");

        horizontalLayout_11->addWidget(label_18);

        zugFrom = new QLineEdit(Zug);
        zugFrom->setObjectName("zugFrom");

        horizontalLayout_11->addWidget(zugFrom);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_19 = new QLabel(Zug);
        label_19->setObjectName("label_19");

        horizontalLayout_12->addWidget(label_19);

        zugTo = new QLineEdit(Zug);
        zugTo->setObjectName("zugTo");

        horizontalLayout_12->addWidget(zugTo);


        verticalLayout_3->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_20 = new QLabel(Zug);
        label_20->setObjectName("label_20");

        horizontalLayout_13->addWidget(label_20);

        zugDeparture = new QLineEdit(Zug);
        zugDeparture->setObjectName("zugDeparture");

        horizontalLayout_13->addWidget(zugDeparture);


        verticalLayout_3->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_21 = new QLabel(Zug);
        label_21->setObjectName("label_21");

        horizontalLayout_14->addWidget(label_21);

        zugArrival = new QLineEdit(Zug);
        zugArrival->setObjectName("zugArrival");

        horizontalLayout_14->addWidget(zugArrival);


        verticalLayout_3->addLayout(horizontalLayout_14);


        verticalLayout_5->addLayout(verticalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_23 = new QLabel(Zug);
        label_23->setObjectName("label_23");

        horizontalLayout_6->addWidget(label_23);

        zugCS = new QListWidget(Zug);
        zugCS->setObjectName("zugCS");
        zugCS->setEditTriggers(QAbstractItemView::AllEditTriggers);

        horizontalLayout_6->addWidget(zugCS);


        verticalLayout_5->addLayout(horizontalLayout_6);


        gridLayout_2->addLayout(verticalLayout_5, 0, 0, 1, 1);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8("train.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/train.jpg"), QSize(), QIcon::Normal, QIcon::On);
        tabWidget->addTab(Zug, icon1, QString());
        Mietwagen = new QWidget();
        Mietwagen->setObjectName("Mietwagen");
        layoutWidget_3 = new QWidget(Mietwagen);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(20, 10, 881, 571));
        gridLayout_4 = new QGridLayout(layoutWidget_3);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        label_30 = new QLabel(layoutWidget_3);
        label_30->setObjectName("label_30");

        horizontalLayout_23->addWidget(label_30);

        carPickUp = new QLineEdit(layoutWidget_3);
        carPickUp->setObjectName("carPickUp");

        horizontalLayout_23->addWidget(carPickUp);


        gridLayout_4->addLayout(horizontalLayout_23, 5, 0, 1, 1);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        label_32 = new QLabel(layoutWidget_3);
        label_32->setObjectName("label_32");

        horizontalLayout_25->addWidget(label_32);

        carPrice = new QLineEdit(layoutWidget_3);
        carPrice->setObjectName("carPrice");

        horizontalLayout_25->addWidget(carPrice);


        gridLayout_4->addLayout(horizontalLayout_25, 7, 0, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        label_27 = new QLabel(layoutWidget_3);
        label_27->setObjectName("label_27");

        horizontalLayout_19->addWidget(label_27);

        carClass = new QLineEdit(layoutWidget_3);
        carClass->setObjectName("carClass");

        horizontalLayout_19->addWidget(carClass);


        gridLayout_4->addLayout(horizontalLayout_19, 1, 0, 1, 1);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        label_31 = new QLabel(layoutWidget_3);
        label_31->setObjectName("label_31");

        horizontalLayout_24->addWidget(label_31);

        carReturn = new QLineEdit(layoutWidget_3);
        carReturn->setObjectName("carReturn");

        horizontalLayout_24->addWidget(carReturn);


        gridLayout_4->addLayout(horizontalLayout_24, 6, 0, 1, 1);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        label_33 = new QLabel(layoutWidget_3);
        label_33->setObjectName("label_33");

        horizontalLayout_20->addWidget(label_33);

        carCompany = new QLineEdit(layoutWidget_3);
        carCompany->setObjectName("carCompany");

        horizontalLayout_20->addWidget(carCompany);


        gridLayout_4->addLayout(horizontalLayout_20, 2, 0, 1, 1);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        label_28 = new QLabel(layoutWidget_3);
        label_28->setObjectName("label_28");

        horizontalLayout_21->addWidget(label_28);

        carFromDate = new QLineEdit(layoutWidget_3);
        carFromDate->setObjectName("carFromDate");

        horizontalLayout_21->addWidget(carFromDate);


        gridLayout_4->addLayout(horizontalLayout_21, 3, 0, 1, 1);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        label_29 = new QLabel(layoutWidget_3);
        label_29->setObjectName("label_29");

        horizontalLayout_22->addWidget(label_29);

        carToDate = new QLineEdit(layoutWidget_3);
        carToDate->setObjectName("carToDate");

        horizontalLayout_22->addWidget(carToDate);


        gridLayout_4->addLayout(horizontalLayout_22, 4, 0, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        label_25 = new QLabel(layoutWidget_3);
        label_25->setObjectName("label_25");

        horizontalLayout_17->addWidget(label_25);

        carID = new QLineEdit(layoutWidget_3);
        carID->setObjectName("carID");
        carID->setReadOnly(true);

        horizontalLayout_17->addWidget(carID);


        gridLayout_4->addLayout(horizontalLayout_17, 0, 0, 1, 1);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8("car.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/car.png"), QSize(), QIcon::Normal, QIcon::On);
        tabWidget->addTab(Mietwagen, icon2, QString());
        Hotel = new QWidget();
        Hotel->setObjectName("Hotel");
        gridLayout_7 = new QGridLayout(Hotel);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName("horizontalLayout_29");
        label_39 = new QLabel(Hotel);
        label_39->setObjectName("label_39");

        horizontalLayout_29->addWidget(label_39);

        hotelTown = new QLineEdit(Hotel);
        hotelTown->setObjectName("hotelTown");

        horizontalLayout_29->addWidget(hotelTown);


        gridLayout_5->addLayout(horizontalLayout_29, 3, 0, 1, 1);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName("horizontalLayout_28");
        label_40 = new QLabel(Hotel);
        label_40->setObjectName("label_40");

        horizontalLayout_28->addWidget(label_40);

        hotelFromDate = new QLineEdit(Hotel);
        hotelFromDate->setObjectName("hotelFromDate");

        horizontalLayout_28->addWidget(hotelFromDate);


        gridLayout_5->addLayout(horizontalLayout_28, 4, 0, 1, 1);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName("horizontalLayout_26");
        label_42 = new QLabel(Hotel);
        label_42->setObjectName("label_42");

        horizontalLayout_26->addWidget(label_42);

        hotelPrice = new QLineEdit(Hotel);
        hotelPrice->setObjectName("hotelPrice");

        horizontalLayout_26->addWidget(hotelPrice);


        gridLayout_5->addLayout(horizontalLayout_26, 6, 0, 1, 1);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName("horizontalLayout_27");
        label_41 = new QLabel(Hotel);
        label_41->setObjectName("label_41");

        horizontalLayout_27->addWidget(label_41);

        hotelToDate = new QLineEdit(Hotel);
        hotelToDate->setObjectName("hotelToDate");

        horizontalLayout_27->addWidget(hotelToDate);


        gridLayout_5->addLayout(horizontalLayout_27, 5, 0, 1, 1);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName("horizontalLayout_30");
        label_38 = new QLabel(Hotel);
        label_38->setObjectName("label_38");

        horizontalLayout_30->addWidget(label_38);

        hotelClass = new QLineEdit(Hotel);
        hotelClass->setObjectName("hotelClass");

        horizontalLayout_30->addWidget(hotelClass);


        gridLayout_5->addLayout(horizontalLayout_30, 2, 0, 1, 1);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setObjectName("horizontalLayout_33");
        label_34 = new QLabel(Hotel);
        label_34->setObjectName("label_34");

        horizontalLayout_33->addWidget(label_34);

        hotelID = new QLineEdit(Hotel);
        hotelID->setObjectName("hotelID");
        hotelID->setReadOnly(true);

        horizontalLayout_33->addWidget(hotelID);


        gridLayout_5->addLayout(horizontalLayout_33, 0, 0, 1, 1);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName("horizontalLayout_31");
        label_36 = new QLabel(Hotel);
        label_36->setObjectName("label_36");

        horizontalLayout_31->addWidget(label_36);

        hotelHotel = new QLineEdit(Hotel);
        hotelHotel->setObjectName("hotelHotel");

        horizontalLayout_31->addWidget(hotelHotel);


        gridLayout_5->addLayout(horizontalLayout_31, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_5, 0, 0, 1, 1);

        QIcon icon3;
        icon3.addFile(QString::fromUtf8("hotel.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/hotel.png"), QSize(), QIcon::Normal, QIcon::On);
        tabWidget->addTab(Hotel, icon3, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(bookingDetails);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(bookingDetails);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, bookingDetails, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, bookingDetails, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(bookingDetails);
    } // setupUi

    void retranslateUi(QDialog *bookingDetails)
    {
        bookingDetails->setWindowTitle(QCoreApplication::translate("bookingDetails", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("bookingDetails", "ID:", nullptr));
        label_13->setText(QCoreApplication::translate("bookingDetails", "Airline:", nullptr));
        label_7->setText(QCoreApplication::translate("bookingDetails", "From Date:", nullptr));
        label_8->setText(QCoreApplication::translate("bookingDetails", "To Date:", nullptr));
        label_9->setText(QCoreApplication::translate("bookingDetails", "From:", nullptr));
        label_10->setText(QCoreApplication::translate("bookingDetails", "To:", nullptr));
        label_12->setText(QCoreApplication::translate("bookingDetails", "Class:", nullptr));
        label_11->setText(QCoreApplication::translate("bookingDetails", "Price:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Flug), QCoreApplication::translate("bookingDetails", "Flugbuchung", nullptr));
        label_14->setText(QCoreApplication::translate("bookingDetails", "ID:", nullptr));
        label_22->setText(QCoreApplication::translate("bookingDetails", "Class:", nullptr));
        label_16->setText(QCoreApplication::translate("bookingDetails", "From Date:", nullptr));
        label_24->setText(QCoreApplication::translate("bookingDetails", "Price", nullptr));
        label_17->setText(QCoreApplication::translate("bookingDetails", "To Date:", nullptr));
        label_18->setText(QCoreApplication::translate("bookingDetails", "From:", nullptr));
        label_19->setText(QCoreApplication::translate("bookingDetails", "To:", nullptr));
        label_20->setText(QCoreApplication::translate("bookingDetails", "Departure:", nullptr));
        label_21->setText(QCoreApplication::translate("bookingDetails", "Arrival:", nullptr));
        label_23->setText(QCoreApplication::translate("bookingDetails", "Connecting Stations:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Zug), QCoreApplication::translate("bookingDetails", "Zugbuchung", nullptr));
        label_30->setText(QCoreApplication::translate("bookingDetails", "Pickup Location:", nullptr));
        label_32->setText(QCoreApplication::translate("bookingDetails", "Price:", nullptr));
        label_27->setText(QCoreApplication::translate("bookingDetails", "Class", nullptr));
        label_31->setText(QCoreApplication::translate("bookingDetails", "Return Location:", nullptr));
        label_33->setText(QCoreApplication::translate("bookingDetails", "Company:", nullptr));
        label_28->setText(QCoreApplication::translate("bookingDetails", "From Date", nullptr));
        label_29->setText(QCoreApplication::translate("bookingDetails", "To Date:", nullptr));
        label_25->setText(QCoreApplication::translate("bookingDetails", "ID:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Mietwagen), QCoreApplication::translate("bookingDetails", "Mietwagenbuchung", nullptr));
        label_39->setText(QCoreApplication::translate("bookingDetails", "Town:", nullptr));
        label_40->setText(QCoreApplication::translate("bookingDetails", "From Date:", nullptr));
        label_42->setText(QCoreApplication::translate("bookingDetails", "Price:", nullptr));
        label_41->setText(QCoreApplication::translate("bookingDetails", "To Date:", nullptr));
        label_38->setText(QCoreApplication::translate("bookingDetails", "Class:", nullptr));
        label_34->setText(QCoreApplication::translate("bookingDetails", "ID:", nullptr));
        label_36->setText(QCoreApplication::translate("bookingDetails", "Hotel:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Hotel), QCoreApplication::translate("bookingDetails", "Hotelbuchung", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bookingDetails: public Ui_bookingDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKINGDETAILS_H
