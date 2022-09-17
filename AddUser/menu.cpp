#include "menu.h"
#include "ui_menu.h"
#include "form.h"
#include "ui_form.h"

Menu::Menu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}


void Menu::on_pushButton_clicked()
{
    Form form;
    form.setModal(true);
    form.exec();
}

void Menu::on_pushButton_2_clicked()
{
    close();
}
