#ifndef GAME2_H
#define GAME2_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>

#include "Player1.h"
#include "Player2.h"
#include "Heart.h"

class Game2: public QGraphicsView{
public:
    Game2(QWidget * parent=0);

    QGraphicsScene * scene;
    Player1 * player1;
    Player2 * player2;
    Heart *heart1;
    Heart *heart2;
    QMediaPlayer *music2;

};

#endif // GAME2_H
