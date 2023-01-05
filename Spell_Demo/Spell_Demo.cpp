#include "Spell_Demo.h"

Spell_Demo::Spell_Demo(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    magic_spells::MakeWish(magic_spells::Wish_Type::Shenshou1);
}

Spell_Demo::~Spell_Demo()
{}
