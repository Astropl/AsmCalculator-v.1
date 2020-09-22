#include "info.h"
#include "ui_info.h"

Info::Info(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Info)
{
    ui->setupUi(this);

    ui->textEdit->setText("Pomysł - Łukasz Stański. \nWykonanie - Paweł Martys."
                          "\n\nASM (Appendicular Skeletal Muscle Mass) — suma mięśni szkieletowych kończyn górnych i dolnych (kilogramy) do kwadratu wzrostu (metry kwadratowe). Porównując uzyskane wyniki do osób młodych, uzyskano normę 7,26 kg/m2 dla mężczyzn oraz 5,45 kg/m2 dla kobiet. Pomiaru dokonano metodą DEXA, a obniżenie o co najmniej dwa odchylenia standardowe od średniej uzyskanej u zdrowej populacji definiowało sarkopenię.\n"
"SMI (Sceletal Muscle Index) — iloraz całkowitej masy mięśni i masy ciała wyrażony w procentach. Masa mięśniowa została oceniona przy zastosowaniu metody BIA. Punkt odcięcia wynosił 37% dla mężczyzn (31,5% < SMI < 37% — I klasa sarkopenii; SMI ≤ 31,5% — II klasa sarkopenii) oraz 27,6% dla kobiet (22,1% < SMI < 27,6% — I klasa sarkopenii, SMI  ≤ 22,1% — II klasa sarkopenii) ");

}

Info::~Info()
{
    delete ui;
}

void Info::on_pushButton_clicked()
{
    destroy();
}
