﻿#ifndef PAGELYRICLIST_H
#define PAGELYRICLIST_H

#include <QWidget>

class PageLyricList : public QWidget
{
    Q_OBJECT

public:
    PageLyricList(QWidget *parent = 0);
    ~PageLyricList();

    void initLayout();
    void connectAll();

private:

};

#endif // PAGELYRICLIST_H