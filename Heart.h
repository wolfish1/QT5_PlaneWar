#ifndef HEART_H
#define HEART_H

#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QGraphicsTextItem>

class Heart: public QGraphicsTextItem{
    Q_OBJECT

    //End *end;

public:
    Heart(QGraphicsItem * parent=0);

    void decrease();
    int getHealth();

private:
    int health;
};

#endif // HEART_H
