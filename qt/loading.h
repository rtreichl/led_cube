#ifndef LOADING_H
#define LOADING_H

#include <QDialog>

namespace Ui {
class Loading;
}

class Loading : public QDialog
{
    Q_OBJECT

public:
    explicit Loading(QWidget *parent = 0);
    ~Loading();

private:
    Ui::Loading *ui;

signals:
    void SendLoadingOptions(bool LoadingOptions);
    void SendDialogClosing();

private slots:
    void on_Button_Keep_Program_clicked();
    void on_Button_Reject_Program_clicked();
    void on_Button_Abort_clicked();
};

#endif // LOADING_H
