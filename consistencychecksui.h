#ifndef CONSISTENCYCHECKSUI_H
#define CONSISTENCYCHECKSUI_H

#include <QDialog>

namespace Ui {
class consistencyChecksUI;
}

class consistencyChecksUI : public QDialog
{
    Q_OBJECT

public:
    explicit consistencyChecksUI(QWidget *parent = nullptr);
    ~consistencyChecksUI();
signals:
    void returnChecks(std::vector<bool>checks);


private slots:
    void on_buttonBox_accepted();

private:
    std::vector<bool> consistencyChecks;
    Ui::consistencyChecksUI *ui;
};

#endif // CONSISTENCYCHECKSUI_H
