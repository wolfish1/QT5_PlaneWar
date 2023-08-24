#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>
#include <QThread>

#include "Enemy.h"
#include "Ai.h"

extern Ai *ai;

//Enemy *enemy;
Enemy::Enemy(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    //匯入圖片
    setPixmap(QPixmap(":/images/enemy.png"));

    // 設定子彈發射音效
    bulletsound = new QMediaPlayer();
    bulletsound->setMedia(QUrl("qrc:/sounds/bullet.mp3"));

    //生成敵人
    setPos(200,400);
    setRotation(180);

    //將move()與enemy連結
    QTimer * timer = new QTimer(this);
    QTimer * timer2 = new QTimer(this);
    //QThread::msleep(2000);

    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    connect(timer2,SIGNAL(timeout()),this,SLOT(shoot()));

    //每次位移的時間
    timer->start(150);
    timer2->start(1500);
}

void Enemy::move(){
    int random_y = rand() % 1000;
    for(int i=0;i<4;i++){
        if(random_y>=500)// 移動敵方
        {
            if(y()>600)setPos(x(),y()-10);
            else setPos(x(),y()+10);
        }
        else if(random_y<500){
            if(y()<100)setPos(x(),y()+10);
            else setPos(x(),y()-10);
        }
    }

}

void Enemy::shoot(){
    Bullet2 *bullet2 = new Bullet2();
    bullet2->setPos(x()-40,y()-100);
    scene()->addItem(bullet2);

    // 放子彈音效
    if (bulletsound->state() == QMediaPlayer::PlayingState){
        bulletsound->setPosition(0);
    }
    else if (bulletsound->state() == QMediaPlayer::StoppedState){
        bulletsound->play();
    }
}
