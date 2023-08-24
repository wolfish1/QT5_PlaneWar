#include <QGraphicsScene>
#include <QKeyEvent>

#include "Player2.h"
#include "Ai.h"

extern Ai *ai;
Player2::Player2(QGraphicsItem *parent): QGraphicsPixmapItem(parent){

    // 設定玩家圖片
    setPixmap(QPixmap(":/images/enemy.png"));
    setRotation(180);
}
