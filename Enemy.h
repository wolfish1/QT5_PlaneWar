#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QMediaPlayer>

#include "Bullet2.h"

class Enemy: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT

    Bullet2 *bullet2;

public:
    Enemy(QGraphicsItem * parent=0);
    QMediaPlayer *bulletsound;

public slots:
    void move();
    void shoot();

};

#endif // ENEMY_H
