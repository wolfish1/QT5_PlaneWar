#include <QGraphicsScene>
#include <QKeyEvent>

#include "Player.h"
#include "Ai.h"

extern Ai *ai;
Player::Player(QGraphicsItem *parent): QGraphicsPixmapItem(parent){
    // 設定子彈發射音效
    bulletsound = new QMediaPlayer();
    bulletsound->setMedia(QUrl("qrc:/sounds/bullet.mp3"));

    // 設定玩家圖片
    setPixmap(QPixmap(":/images/player.png"));
}

void Player::keyPressEvent(QKeyEvent *event){
    // 接收鍵盤指令
    if (event->key() == Qt::Key_Up){
        if (pos().y() > 0)
        setPos(x(),y()-10);
    }
    else if (event->key() == Qt::Key_Down){
        if (pos().y()  < 580)
        setPos(x(),y()+10);
    }
    else if (event->key() == Qt::Key_Space){
        // 創造子彈
        Bullet * bullet = new Bullet();
        bullet->setPos(x()-80,y()+20);
        scene()->addItem(bullet);

        // 放子彈音效
        if (bulletsound->state() == QMediaPlayer::PlayingState){
            bulletsound->setPosition(0);
        }
        else if (bulletsound->state() == QMediaPlayer::StoppedState){
            bulletsound->play();
        }

    }
}
