#include "loading.h"
#include "ui_loading.h"

Loading::Loading(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Loading)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::MSWindowsFixedSizeDialogHint); //Set window to fixed size
    this->setStyleSheet("background-color: black;");

    ui->Question_label->setStyleSheet("QLabel {font: 12pt; color : white; background-color: gray}");
    ui->Question_label->setText(" Was soll mit dem aktuellen Programm passieren?");

    // Define Pictures
    // Button Pictures
    QPixmap Button_Keep_Program_pm(":/images/images/Button_Keep_Program.png");
    QPixmap Button_Reject_Program_pm(":/images/images/Button_Reject_Program.png");
    QPixmap Button_Abort_pm(":/images/images/Button_Abort.png");

    // Define Icons
    // Button Icons
    QIcon Button_Keep_Program_Icon(Button_Keep_Program_pm);
    QIcon Button_Reject_Program_Icon(Button_Reject_Program_pm);
    QIcon Button_Abort_Icon(Button_Abort_pm);

    // Set Icons on Buttons
    ui->Button_Keep_Program->setIcon(Button_Keep_Program_Icon);
    ui->Button_Reject_Program->setIcon(Button_Reject_Program_Icon);
    ui->Button_Abort->setIcon(Button_Abort_Icon);

    // Correct Icon Size
    // for Button Size
    ui->Button_Keep_Program->setIconSize(Button_Keep_Program_pm.rect().size());
    ui->Button_Reject_Program->setIconSize(Button_Reject_Program_pm.rect().size());
    ui->Button_Abort->setIconSize(Button_Abort_pm.rect().size());

    // Set Button Stylesheets (Keine Umrandung, Keine Punktlinie beim anklicken)
    ui->Button_Keep_Program->setStyleSheet("border: none; outline: none;");
    ui->Button_Reject_Program->setStyleSheet("border: none; outline: none;");
    ui->Button_Abort->setStyleSheet("border: none; outline: none;");

    // Change Button Options
    ui->Button_Abort->setShortcut(QKeySequence(Qt::Key_Escape));

}

Loading::~Loading()
{
    delete ui;
}

void Loading::on_Button_Keep_Program_clicked()
{
    // emit true Flag, the User Wants to keep the current Program
    emit SendLoadingOptions(true);
    emit SendDialogClosing();
}
void Loading::on_Button_Reject_Program_clicked()
{
    // emit false Flag, the User does`t want to keep the current Program
    emit SendLoadingOptions(false);
    emit SendDialogClosing();
}
void Loading::on_Button_Abort_clicked()
{
    emit SendDialogClosing();
}
