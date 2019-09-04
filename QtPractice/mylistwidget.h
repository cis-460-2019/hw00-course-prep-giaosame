#pragma once

#include <QListWidget>

class MyListWidget : public QListWidget
{
    Q_OBJECT
public:
    MyListWidget(QWidget * parent = 0); // Constructor declaration

public slots:
    void slot_testSlot();

signals:
    void sig_testSignal(int);
};
