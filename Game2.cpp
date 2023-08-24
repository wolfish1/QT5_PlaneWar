#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include <QMediaPlayer>
#include <QBrush>
#include <QImage>

#include "Game2.h"
#include "Ai.h"

extern Ai *ai;
Game2::Game2(QWidget *parent){
    setWindowTitle("飛機大戰");

    // create the scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1000,700); // 設一個1000*700的視窗
    setBackgroundBrush(QBrush(QImage(":/images/sky1.jpg")));

    // 將新創建的場景變為可視化的場景 (把水平和垂直拉桿關閉)
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1000,700);


    // 創建玩家
    player1 = new Player1();
    player1->setPos(750,250);
    // 使QT擁有焦點，QWidget才可以接收鍵盤事件
    player1->setFlag(QGraphicsItem::ItemIsFocusable);
    player1->setFocus();
    // 新增玩家至場景
    scene->addItem(player1);
//-----------------------------------
    player2 = new Player2();
    player2->setPos(210,350);
    // 使QT擁有焦點，QWidget才可以接收鍵盤事件
    player2->setFlag(QGraphicsItem::ItemIsFocusable);
    // 新增玩家至場景
    scene->addItem(player2);

    heart1 = new Heart();
    heart1->setPos(heart1->x()+820,heart1->y()+10);
    scene->addItem(heart1);
//--------------------------------------------------
    heart2 = new Heart();
    heart2->setPos(heart2->x()+10,heart2->y()+10);
    scene->addItem(heart2);

    // 播放背景音樂
    music2 = new QMediaPlayer();
    music2->setMedia(QUrl("qrc:/sounds/bgm.mp3"));
    music2->play();

    show();
}
