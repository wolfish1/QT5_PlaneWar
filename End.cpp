#include "End.h"
#include "ui_End.h"

#include "Ai.h"
#include "Start.h"

extern Ai *ai;
extern Start *start;
End::End(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::End)
{
    ui->setupUi(this);
    setWindowTitle("飛機大戰");


}

End::~End()
{
    delete ui;
}

void End::on_pushButton_clicked()
{

    start = new Start();
    start->show();
    this->hide();
}

void End::on_pushButton_2_clicked()
{
    ai->close();
    this->close();
}
