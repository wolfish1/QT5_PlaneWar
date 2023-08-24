#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include <QMediaPlayer>
#include <QBrush>
#include <QImage>

#include "Game.h"
#include "Ai.h"

extern Ai *ai;
Game::Game(QWidget *parent){
    setWindowTitle("飛機大戰");

    // 製造一個場景
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1000,700); // 設一個1000*700的視窗
    setBackgroundBrush(QBrush(QImage(":/images/sky1.jpg")));

    // 將新創建的場景變為可視化的場景 (把水平和垂直拉桿關閉)
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1000,700);

    // 創建玩家
    player = new Player();
    player->setPos(750,250);
    //使QT擁有焦點，QWidget才可以接收鍵盤事件
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    // 新增玩家至場景
    scene->addItem(player);

    heart = new Heart();
    heart->setPos(heart->x()+820,heart->y()+10);
    scene->addItem(heart);

    // 生成敵人
    enemy = new Enemy();
    scene->addItem(enemy);

    // 播放背景音樂
    music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/sounds/bgm.mp3"));
    music->play();

    show();
}
