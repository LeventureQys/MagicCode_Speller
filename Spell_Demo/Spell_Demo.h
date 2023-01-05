#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Spell_Demo.h"
#include "../MagicSpeller/MagicSpeller.h"
class Spell_Demo : public QMainWindow
{
    Q_OBJECT

public:
    Spell_Demo(QWidget *parent = nullptr);
    ~Spell_Demo();

private:
    Ui::Spell_DemoClass ui;
};
