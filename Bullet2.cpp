#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <QMediaPlayer>

#include "Bullet2.h"
#include "Ai.h"
#include "End.h"

extern Ai *ai;
extern End *end;
Bullet2::Bullet2(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    //匯入圖形
    setPixmap(QPixmap(":/images/bullet2.png"));


    //將move()與Bullet連結
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    //每50毫秒做位移
    timer->start(50);
}

void Bullet2::move(){
    // 建立colliding_item作為子彈碰撞物件
    QList<QGraphicsItem *> colliding_items = collidingItems();

    // 若碰撞物件為右方玩家，則將子彈與玩家都消除
    for (int i = 0, n = colliding_items.size(); i < n; ++i){
        if (typeid(*(colliding_items[i])) == typeid(Player) || typeid(*(colliding_items[i])) == typeid(Player1)){
            if(typeid(*(colliding_items[i])) == typeid(Player)){
                ai->game->heart->decrease();
                if(ai->game->heart->getHealth() == 0){
                    delete ai->game->player;
                    delete ai->game->enemy;
                    ai->game->music->stop();
                    ai->game->close();
                    end = new End();
                    end->show();
                }
            }
            else {
                ai->game2->heart1->decrease();
                if(ai->game2->heart1->getHealth() == 0){
                    delete ai->game2->player2;
                    delete ai->game2->player1;
                    ai->game2->music2->stop();
                    ai->game2->close();
                    end = new End();
                    end->show();
                }
            }

            // 從畫面移除玩家、子彈
            scene()->removeItem(this);

            //刪除玩家與子彈以節省內存
            delete this;

            return;
        }
    }

    //子彈位移距離
    setPos(x()+10 ,y());

    // 如果子彈超出畫面就消除
    if (pos().x() < 0 || pos().x() > 1000){
        scene()->removeItem(this);
        delete this;
    }
}
