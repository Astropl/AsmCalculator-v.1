#ifndef ASMCALCULATOR_H
#define ASMCALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class AsmCalculator; }
QT_END_NAMESPACE

class AsmCalculator : public QMainWindow
{
    Q_OBJECT

public:
    AsmCalculator(QWidget *parent = nullptr);
    ~AsmCalculator();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_actionO_programie_triggered();

    void on_pushButton_3_clicked();

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_actionZamknij_triggered();

private:
    Ui::AsmCalculator *ui;
};
#endif // ASMCALCULATOR_H
