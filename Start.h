#ifndef START_H
#define START_H

#include <QWidget>

namespace Ui {
class Start;
}

class Start : public QWidget
{
    Q_OBJECT

public:
    explicit Start(QWidget *parent = nullptr);
    ~Start();

    //Ai *ai;

private slots:
    void on_pushButton_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::Start *ui;
};

#endif // START_H
