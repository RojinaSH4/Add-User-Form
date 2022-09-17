#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_savee_clicked()
{

    QString first, last, job, age;

        first = ui->namef->text();
        last = ui->namel->text();
        job = ui->jobb->text();
        age = ui->agee->text();

    ui->listWidget->addItem(first);
    ui->listWidget->addItem(last);
    ui->listWidget->addItem(job);
    ui->listWidget->addItem(age);
    ui->listWidget->addItem(" ");

   ui->namef->clear();
   ui->namel->clear();
   ui->jobb->clear();
   ui->agee->clear();
}

void Form::on_deletee_clicked()
{
    QListWidgetItem *it = ui->listWidget->takeItem(ui->listWidget->currentRow());
        delete it;
}

void Form::on_pushButton_clicked()
{
    close();
}
