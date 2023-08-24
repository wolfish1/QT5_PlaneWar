#include <QPixmap>
#include <QPainter>
#include <QFont>
#include <QWidget>
#include <QRect>
#include <QDebug>

#include "Heart.h"
#include "Ai.h"
#include "End.h"

extern Ai *ai;

End *end;
Heart::Heart(QGraphicsItem *parent): QGraphicsTextItem(parent){
    //將生命歸0
    health = 3;

    // 顯示文字(大小、顏色)
    setPlainText(QString("Health x") + QString::number(health)); // Health: 3
    setDefaultTextColor(Qt::white);
    setFont(QFont("微軟正黑體",20));
}

void Heart::decrease(){
    health--;
    setPlainText(QString("Health x") + QString::number(health)); // Health: 2
}

int Heart::getHealth(){
    return health;
}
