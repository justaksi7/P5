#ifndef ERRORSUI_H
#define ERRORSUI_H

#include <QDialog>

namespace Ui {
class errorsUI;
}

class errorsUI : public QDialog
{
    Q_OBJECT

public:
    explicit errorsUI(std::vector<QString>inerrors,QWidget *parent = nullptr);
    ~errorsUI();

private:
    std::vector<QString>errors;
    Ui::errorsUI *ui;
};

#endif // ERRORSUI_H
