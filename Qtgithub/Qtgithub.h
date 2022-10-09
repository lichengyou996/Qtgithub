#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Qtgithub.h"

class Qtgithub : public QMainWindow
{
    Q_OBJECT

public:
    Qtgithub(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtgithubClass ui;
};
