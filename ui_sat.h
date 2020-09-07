/********************************************************************************
** Form generated from reading UI file 'sat.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAT_H
#define UI_SAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SAT
{
public:

    void setupUi(QWidget *SAT)
    {
        if (SAT->objectName().isEmpty())
            SAT->setObjectName(QStringLiteral("SAT"));
        SAT->resize(400, 300);

        retranslateUi(SAT);

        QMetaObject::connectSlotsByName(SAT);
    } // setupUi

    void retranslateUi(QWidget *SAT)
    {
        SAT->setWindowTitle(QApplication::translate("SAT", "SAT", 0));
    } // retranslateUi

};

namespace Ui {
    class SAT: public Ui_SAT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAT_H
