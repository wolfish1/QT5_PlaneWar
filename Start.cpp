#include "Start.h"
#include "ui_Start.h"

#include "Ai.h"

Ai *ai;
Start::Start(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Start)
{
    ui->setupUi(this);
    setWindowTitle("飛機大戰");
}

Start::~Start()
{
    delete ui;
}

void Start::on_pushButton_clicked()
{
    ai = new Ai();
    ai->show();
    this->hide();
}

void Start::on_pushButton_3_clicked()
{
    this->close();
}
