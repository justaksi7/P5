#ifndef TRAVELAGENCYUI_H
#define TRAVELAGENCYUI_H

#include <QMainWindow>
#include "TravelAgency.h"
#include "check.h"
QT_BEGIN_NAMESPACE
namespace Ui { class TravelAgencyUI; }
QT_END_NAMESPACE

class TravelAgencyUI : public QMainWindow
{
    Q_OBJECT

public:
    TravelAgencyUI(TravelAgency *inTravelAgency=nullptr,QWidget *parent = nullptr);
    ~TravelAgencyUI();
    Check check;
private slots:
    void on_actionEinlesen_triggered();

    void on_actionSuchen_triggered();

    void on_tableWidget_cellDoubleClicked(int row, int column);

    void on_tableWidget_2_cellDoubleClicked(int row, int column);

    void on_actionSpeichern_triggered();

private:
    Ui::TravelAgencyUI *ui;
    TravelAgency* inTravelAgency;
};
#endif // TRAVELAGENCYUI_H
