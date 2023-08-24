#ifndef AI_H
#define AI_H

#include <QWidget>

#include "Game.h"
#include "Game2.h"

namespace Ui {
class Ai;
}

class Ai : public QWidget
{
    Q_OBJECT

public:
    explicit Ai(QWidget *parent = nullptr);
    ~Ai();

    Game *game;
    Game2 *game2;

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::Ai *ui;
};

#endif // AI_H
