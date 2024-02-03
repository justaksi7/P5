#ifndef TRAVELAGENCYUI_H
#define TRAVELAGENCYUI_H

#include <QMainWindow>
#include "TravelAgency.h"
#include "check.h"
#include "consistencychecksui.h"
#include "errorsui.h"

QT_BEGIN_NAMESPACE
namespace Ui { class TravelAgencyUI; }
QT_END_NAMESPACE

class TravelAgencyUI : public QMainWindow
{
    Q_OBJECT

public:
    TravelAgencyUI(shared_ptr<TravelAgency>inTravelAgency=nullptr,QWidget *parent = nullptr);
    ~TravelAgencyUI();
    Check check;
    public slots:
    void onRun_Checks();
private slots:
    void on_actionEinlesen_triggered();

    void on_actionSuchen_triggered();

    void on_tableWidget_cellDoubleClicked(int row, int column);

    void on_tableWidget_2_cellDoubleClicked(int row, int column);

    void on_actionSpeichern_triggered();

    void on_actionSettings_triggered();

    void set_Checks(std::vector<bool>checks);



private:
    Ui::TravelAgencyUI *ui;
    shared_ptr< TravelAgency> inTravelAgency;
};
#endif // TRAVELAGENCYUI_H
