#ifndef CONSISTENCYCHECKSUI_H
#define CONSISTENCYCHECKSUI_H

#include <QDialog>
#include "TravelAgency.h"

namespace Ui {
class consistencyChecksUI;
}

class consistencyChecksUI : public QDialog
{
    Q_OBJECT

public:
    explicit consistencyChecksUI(shared_ptr<TravelAgency>inTravelAgency,QWidget *parent = nullptr);
    ~consistencyChecksUI();
    std::vector<bool> consistencyChecks;
signals:
    void returnChecks(std::vector<bool>checks);


private slots:
    void on_buttonBox_accepted();

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

private:
    shared_ptr<TravelAgency>travelAgency;
    Ui::consistencyChecksUI *ui;
};

#endif // CONSISTENCYCHECKSUI_H
