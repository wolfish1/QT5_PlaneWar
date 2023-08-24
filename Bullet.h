#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QObject>

class Bullet: public QObject,public QGraphicsPixmapItem {
    Q_OBJECT

    //End *end;

public:
    Bullet(QGraphicsItem * parent=0);

public slots:
    void move();
};

#endif // BULLET_H
