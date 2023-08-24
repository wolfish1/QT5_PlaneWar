#include "Ai.h"
#include "ui_Ai.h"

extern Ai *ai;

Ai::Ai(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ai)
{
    ui->setupUi(this);
    setWindowTitle("飛機大戰");
}

Ai::~Ai()
{
    delete ui;
}

void Ai::on_pushButton_clicked()
{
    game = new Game();
    game->show();
    this->hide();
}

void Ai::on_pushButton_2_clicked()
{
    game2 = new Game2();
    game2->show();
    this->hide();
}
