#include "asmcalculator.h"
#include "info.h"
#include "ui_asmcalculator.h"
#include <math.h>
#include <QDoubleValidator>
#include <QMessageBox>
#include <iostream>
#include <iomanip>


using namespace std;

//double wzrost, wzrostKwadrat, prawaReka, lewaReka, prawaNoga, lewaNoga, wartoscASM, wartoscSMI;

AsmCalculator::AsmCalculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AsmCalculator)
{
    ui->setupUi(this);
    ui->radioButton->setChecked(true);
    // QDoubleValidator::StandardNotation;
//    ui->lineEdit->setValidator(new QDoubleValidator(0, 1, 2, this));
//    ui->lineEdit_2->setValidator(new QDoubleValidator(0, 1, 4, this));
//    ui->lineEdit_3->setValidator(new QDoubleValidator(0, 1, 2, this));
//    ui->lineEdit_4->setValidator(new QDoubleValidator(0, 1, 2, this));
//    ui->lineEdit_5->setValidator(new QDoubleValidator(0, 1, 2, this));


    //ui->label_14->setText("<img src=:/Logo.jpg>") ;           //("Logo.jpg");
}

AsmCalculator::~AsmCalculator()
{
    delete ui;
}

void AsmCalculator::on_pushButton_clicked()
{
    //Obliczanie
    //TOD: obliczanie w zwiazku z płciąo
    //
    float wzrost = 0, wzrostKwadrat = 0, prawaReka = 0, lewaReka = 0, prawaNoga = 0, lewaNoga = 0,
           wartoscASM = 0, wartoscSMI = 0;

    wzrost = ui->lineEdit->text().toDouble();
    prawaReka = ui->lineEdit_2->text().toDouble();
    lewaReka = ui->lineEdit_3->text().toDouble();
    prawaNoga = ui->lineEdit_4->text().toDouble();
    lewaNoga = ui->lineEdit_5->text().toDouble();

    wartoscSMI = double(prawaReka) + double(lewaReka) + double(prawaNoga) + double(lewaNoga);
    QString stringSmi = "Twoje SMI: ";
    QString stringAsm = " Twój wynik ASM to: ";
    ui->label_7->setText(QString::number(wartoscSMI));
    //Obliczanie wrzostu do kewadratu//
    wzrost = wzrost / 100;
    wzrostKwadrat = pow(wzrost, 2.0);
    setprecision (2);
        wartoscASM = (double(wartoscSMI) / double(wzrostKwadrat));

    ui->label_6->setText(QString::number(wartoscASM));
    string plec, normaASM;
    if (ui->radioButton->isChecked())
    {plec = "Kobieta";
        normaASM = "5,45";
    }else
    {
        plec ="Mężczyzna";
        normaASM = "7,26";
    }
    cout<<"Twoja płec to :" + plec<<endl;
    QString QPlec = plec.c_str();
 QString QnormaAsm = normaASM.c_str();
 QMessageBox::information(this, "Informacja", "Twój ASM wynosi: " +std::Setprecision(2) (QString::number(wartoscASM)) + "\nTwoja płeć to : " + (QPlec)
                                                     + "\nDla Twojej płci norma wynosi: "+ QnormaAsm +" kg/m2");


    // ui->label_6->setText(stringAsm+wartoscASM);
}

void AsmCalculator::on_pushButton_2_clicked()
{
    //QMessageBox msg;
    QMessageBox::information(this, "Podziękowanie", "Dziekujemy za wybranie naszego programu");
    destroy();
}

void AsmCalculator::on_actionO_programie_triggered()
{
    Info *info = new Info();
    info->show();
}

void AsmCalculator::on_pushButton_3_clicked()
{}
//{ double wzrost = 0, wzrostKwadrat = 0, prawaReka = 0, lewaReka = 0, prawaNoga = 0, lewaNoga = 0,
//           wartoscASM = 0, wartoscSMI = 0;
//    wzrost = ui->lineEdit->text().toDouble();
//    prawaReka = ui->lineEdit_2->text().toDouble();
//    lewaReka = ui->lineEdit_3->text().toDouble();
//    prawaNoga = ui->lineEdit_4->text().toDouble();
//    lewaNoga = ui->lineEdit_5->text().toDouble();

//    double temp1 = double(prawaReka)+double(lewaReka);
//    //ui->label_13->setText(QString::number( temp1));
//}

void AsmCalculator::on_lineEdit_2_textChanged(const QString &arg1)
{
    QVariant editText;
    int dlugoscTextu = ui->lineEdit_2->maxLength();
    editText= ui->lineEdit_2->text();


    for(int i=0;i<=dlugoscTextu;i++)
    {
        cout<<"dlugosc tekstu to: "<<endl;
    }
}

void AsmCalculator::on_actionZamknij_triggered()
{
    on_pushButton_2_clicked();
}
