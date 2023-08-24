#ifndef PLAYER1_H
#define PLAYER1_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QMediaPlayer>

#include "Bullet.h"
#include "Bullet2.h"

class Player1:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Player1(QGraphicsItem * parent=0);
    void keyPressEvent(QKeyEvent * event);
    QMediaPlayer * bulletsound;
};

#endif // PLAYER1_H
