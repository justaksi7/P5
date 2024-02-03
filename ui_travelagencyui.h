/********************************************************************************
** Form generated from reading UI file 'travelagencyui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAVELAGENCYUI_H
#define UI_TRAVELAGENCYUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TravelAgencyUI
{
public:
    QAction *actionEinlesen;
    QAction *actionSuchen;
    QAction *actionSpeichern;
    QAction *actionSettings;
    QAction *actionErrors;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *reiseID;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *idLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QTableWidget *tableWidget_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *TravelAgencyUI)
    {
        if (TravelAgencyUI->objectName().isEmpty())
            TravelAgencyUI->setObjectName("TravelAgencyUI");
        TravelAgencyUI->resize(1168, 655);
        actionEinlesen = new QAction(TravelAgencyUI);
        actionEinlesen->setObjectName("actionEinlesen");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/speichern.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEinlesen->setIcon(icon);
        actionSuchen = new QAction(TravelAgencyUI);
        actionSuchen->setObjectName("actionSuchen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSuchen->setIcon(icon1);
        actionSpeichern = new QAction(TravelAgencyUI);
        actionSpeichern->setObjectName("actionSpeichern");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/speichern.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/speichern.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSpeichern->setIcon(icon2);
        actionSpeichern->setMenuRole(QAction::TextHeuristicRole);
        actionSettings = new QAction(TravelAgencyUI);
        actionSettings->setObjectName("actionSettings");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/settings.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSettings->setIcon(icon3);
        actionErrors = new QAction(TravelAgencyUI);
        actionErrors->setObjectName("actionErrors");
        centralwidget = new QWidget(TravelAgencyUI);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        reiseID = new QLineEdit(centralwidget);
        reiseID->setObjectName("reiseID");

        horizontalLayout_5->addWidget(reiseID);


        gridLayout->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        nameLineEdit = new QLineEdit(centralwidget);
        nameLineEdit->setObjectName("nameLineEdit");

        horizontalLayout->addWidget(nameLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        idLineEdit = new QLineEdit(centralwidget);
        idLineEdit->setObjectName("idLineEdit");

        horizontalLayout_2->addWidget(idLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        horizontalLayout_3->addWidget(tableWidget);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        tableWidget_2 = new QTableWidget(centralwidget);
        if (tableWidget_2->columnCount() < 4)
            tableWidget_2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        tableWidget_2->setObjectName("tableWidget_2");

        horizontalLayout_4->addWidget(tableWidget_2);


        gridLayout->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        TravelAgencyUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TravelAgencyUI);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1168, 22));
        TravelAgencyUI->setMenuBar(menubar);
        statusbar = new QStatusBar(TravelAgencyUI);
        statusbar->setObjectName("statusbar");
        TravelAgencyUI->setStatusBar(statusbar);
        toolBar = new QToolBar(TravelAgencyUI);
        toolBar->setObjectName("toolBar");
        TravelAgencyUI->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionEinlesen);
        toolBar->addSeparator();
        toolBar->addAction(actionSuchen);
        toolBar->addAction(actionSpeichern);
        toolBar->addAction(actionSettings);
        toolBar->addAction(actionErrors);

        retranslateUi(TravelAgencyUI);

        QMetaObject::connectSlotsByName(TravelAgencyUI);
    } // setupUi

    void retranslateUi(QMainWindow *TravelAgencyUI)
    {
        TravelAgencyUI->setWindowTitle(QCoreApplication::translate("TravelAgencyUI", "TravelAgencyUI", nullptr));
        actionEinlesen->setText(QCoreApplication::translate("TravelAgencyUI", "Einlesen", nullptr));
        actionSuchen->setText(QCoreApplication::translate("TravelAgencyUI", "Suchen", nullptr));
        actionSpeichern->setText(QCoreApplication::translate("TravelAgencyUI", "Speichern", nullptr));
        actionSettings->setText(QCoreApplication::translate("TravelAgencyUI", "actionSettings", nullptr));
        actionErrors->setText(QCoreApplication::translate("TravelAgencyUI", "Errors", nullptr));
        label_5->setText(QCoreApplication::translate("TravelAgencyUI", "Reise ID:", nullptr));
        label->setText(QCoreApplication::translate("TravelAgencyUI", "Kunde:", nullptr));
        label_2->setText(QCoreApplication::translate("TravelAgencyUI", "ID:", nullptr));
        label_3->setText(QCoreApplication::translate("TravelAgencyUI", "Reisen", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("TravelAgencyUI", "Reise", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("TravelAgencyUI", "Beginn der Reise", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("TravelAgencyUI", "Ende der Reise", nullptr));
        label_4->setText(QCoreApplication::translate("TravelAgencyUI", "Buchungen", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("TravelAgencyUI", "Buchungstyp", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("TravelAgencyUI", "Beginn der Reise", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("TravelAgencyUI", "Ende der Reise", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("TravelAgencyUI", "Preis", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("TravelAgencyUI", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TravelAgencyUI: public Ui_TravelAgencyUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAVELAGENCYUI_H
