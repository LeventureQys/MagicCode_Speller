/********************************************************************************
** Form generated from reading UI file 'Spell_Demo.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPELL_DEMO_H
#define UI_SPELL_DEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Spell_DemoClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Spell_DemoClass)
    {
        if (Spell_DemoClass->objectName().isEmpty())
            Spell_DemoClass->setObjectName(QStringLiteral("Spell_DemoClass"));
        Spell_DemoClass->resize(600, 400);
        menuBar = new QMenuBar(Spell_DemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Spell_DemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Spell_DemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Spell_DemoClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Spell_DemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Spell_DemoClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Spell_DemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Spell_DemoClass->setStatusBar(statusBar);

        retranslateUi(Spell_DemoClass);

        QMetaObject::connectSlotsByName(Spell_DemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *Spell_DemoClass)
    {
        Spell_DemoClass->setWindowTitle(QApplication::translate("Spell_DemoClass", "Spell_Demo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Spell_DemoClass: public Ui_Spell_DemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPELL_DEMO_H
