#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>

#include "Player.h"
#include "Heart.h"

class Game: public QGraphicsView{
public:
    Game(QWidget * parent=0);

    Game *game;
    QGraphicsScene * scene;
    Player * player;
    Heart *heart;
    Enemy *enemy;
    QMediaPlayer *music;

};

#endif // GAME_H
