#include <QGraphicsScene>
#include <QKeyEvent>

#include "Player1.h"
#include "Ai.h"

extern Ai *ai;
Player1::Player1(QGraphicsItem *parent): QGraphicsPixmapItem(parent){
    // 設定子彈發射音效
    bulletsound = new QMediaPlayer();
    bulletsound->setMedia(QUrl("qrc:/sounds/bullet.mp3"));

    // 設定玩家圖片
    setPixmap(QPixmap(":/images/player.png"));
}

void Player1::keyPressEvent(QKeyEvent *event){
        // 接收右方玩家鍵盤指令
        if (event->key() == Qt::Key_Up){
            if (this->pos().y() > 0)
            this->setPos(x(),y()-10);
        }
        else if (event->key() == Qt::Key_Down){
            if (this->pos().y()  < 700)
            this->setPos(x(),y()+10);
        }
        else if (event->key() == Qt::Key_Left){
        // 創造子彈
            Bullet *bullet = new Bullet();
            bullet->setPos(x()-80,y()+20);
            scene()->addItem(bullet);

            if (bulletsound->state() == QMediaPlayer::PlayingState){
                bulletsound->setPosition(0);
            }
            else if (bulletsound->state() == QMediaPlayer::StoppedState){
                bulletsound->play();
            }
        }
        // 接收左方玩家鍵盤指令
        else if (event->key() == Qt::Key_W){
            if (ai->game2->player2->pos().y() > 0)
            ai->game2->player2->setPos(ai->game2->player2->x(),ai->game2->player2->y()-10);
        }
        else if (event->key() == Qt::Key_S){
            if (ai->game2->player2->pos().y()  < 700)
            ai->game2->player2->setPos(ai->game2->player2->x(),ai->game2->player2->y()+10);
        }
        else if (event->key() == Qt::Key_D){
        // 創造子彈
            Bullet2 *bullet2 = new Bullet2();
            bullet2->setPos(ai->game2->player2->x()-20,ai->game2->player2->y()-100);
            scene()->addItem(bullet2);

            // 子彈音效
            if (bulletsound->state() == QMediaPlayer::PlayingState){
                bulletsound->setPosition(0);
            }
            else if (bulletsound->state() == QMediaPlayer::StoppedState){
                bulletsound->play();
            }
        }

}
