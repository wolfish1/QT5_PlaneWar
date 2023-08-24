#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <QLabel>
#include <QThread>
#include <QDebug>

#include "Bullet.h"
#include "Ai.h"
#include "End.h"

extern Ai *ai; // 設定為全域變數
extern End *end;
Bullet::Bullet(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    // 設定背景
    setPixmap(QPixmap(":/images/bullet.png"));


    // 讓子彈隨時間移動
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    // start the timer
    timer->start(50);
}

void Bullet::move(){
    // 建立colliding_item作為子彈碰撞物件
    QList<QGraphicsItem *> colliding_items = collidingItems();

    // 若碰撞物件為左方玩家，則將子彈與玩家都消除
    for (int i = 0, n = colliding_items.size(); i < n; ++i){
        if (typeid(*(colliding_items[i])) == typeid(Enemy) || typeid(*(colliding_items[i])) == typeid(Player2)){

            // 讓子彈從螢幕消失
            scene()->removeItem(this);

            // 刪除子彈
            delete this;

            //如果碰撞到左方玩家，玩家生命--
            if(typeid(*(colliding_items[i])) == typeid(Enemy)){
                delete ai->game->player;
                delete ai->game->enemy;
                ai->game->music->stop();
                ai->game->close();
                end = new End();
                end->show();
            }
            else {
                ai->game2->heart2->decrease();
                if(ai->game2->heart2->getHealth() == 0){
                    delete ai->game2->player1;
                    delete ai->game2->player2;
                    ai->game2->music2->stop();
                    ai->game2->close();
                    end = new End();
                    end->show();
                }
            }

            return;
        }
    }

    // 子彈位移距離
    setPos(x()-10 ,y());
    // 如果子彈超出畫面就消除
    if (pos().y() < 0 || pos().x() > 1000){
        scene()->removeItem(this);
        delete this;
    }
}
