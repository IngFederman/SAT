/********************************************************************************
** Form generated from reading UI file 'dialogousuario.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGOUSUARIO_H
#define UI_DIALOGOUSUARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dialogoUsuario
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *line;
    QFormLayout *formLayout;
    QLabel *nombreUsuarioLabel;
    QLineEdit *nombreUsuarioLineEdit;
    QLabel *contraseALabel;
    QLineEdit *contraseALineEdit;
    QLabel *repetirContraseALabel;
    QLineEdit *repetirContraseALineEdit;
    QLabel *label_2;
    QFrame *line_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *dialogoUsuario)
    {
        if (dialogoUsuario->objectName().isEmpty())
            dialogoUsuario->setObjectName(QStringLiteral("dialogoUsuario"));
        dialogoUsuario->resize(320, 240);
        verticalLayout_2 = new QVBoxLayout(dialogoUsuario);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(dialogoUsuario);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        line = new QFrame(dialogoUsuario);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFormAlignment(Qt::AlignCenter);
        nombreUsuarioLabel = new QLabel(dialogoUsuario);
        nombreUsuarioLabel->setObjectName(QStringLiteral("nombreUsuarioLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nombreUsuarioLabel);

        nombreUsuarioLineEdit = new QLineEdit(dialogoUsuario);
        nombreUsuarioLineEdit->setObjectName(QStringLiteral("nombreUsuarioLineEdit"));
        nombreUsuarioLineEdit->setMaxLength(15);

        formLayout->setWidget(0, QFormLayout::FieldRole, nombreUsuarioLineEdit);

        contraseALabel = new QLabel(dialogoUsuario);
        contraseALabel->setObjectName(QStringLiteral("contraseALabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, contraseALabel);

        contraseALineEdit = new QLineEdit(dialogoUsuario);
        contraseALineEdit->setObjectName(QStringLiteral("contraseALineEdit"));
        contraseALineEdit->setMaxLength(15);
        contraseALineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, contraseALineEdit);

        repetirContraseALabel = new QLabel(dialogoUsuario);
        repetirContraseALabel->setObjectName(QStringLiteral("repetirContraseALabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, repetirContraseALabel);

        repetirContraseALineEdit = new QLineEdit(dialogoUsuario);
        repetirContraseALineEdit->setObjectName(QStringLiteral("repetirContraseALineEdit"));
        repetirContraseALineEdit->setMaxLength(15);
        repetirContraseALineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, repetirContraseALineEdit);


        verticalLayout->addLayout(formLayout);

        label_2 = new QLabel(dialogoUsuario);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(true);

        verticalLayout->addWidget(label_2);

        line_2 = new QFrame(dialogoUsuario);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        buttonBox = new QDialogButtonBox(dialogoUsuario);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setEnabled(true);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalLayout->setStretch(0, 15);
        verticalLayout->setStretch(1, 5);
        verticalLayout->setStretch(2, 60);
        verticalLayout->setStretch(3, 5);
        verticalLayout->setStretch(4, 5);
        verticalLayout->setStretch(5, 10);

        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(dialogoUsuario);
        QObject::connect(buttonBox, SIGNAL(accepted()), dialogoUsuario, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), dialogoUsuario, SLOT(reject()));

        QMetaObject::connectSlotsByName(dialogoUsuario);
    } // setupUi

    void retranslateUi(QDialog *dialogoUsuario)
    {
        dialogoUsuario->setWindowTitle(QApplication::translate("dialogoUsuario", "Dialog", 0));
        label->setText(QApplication::translate("dialogoUsuario", "Creaci\303\263n de Nuevo Perfil Usuario SAT", 0));
        nombreUsuarioLabel->setText(QApplication::translate("dialogoUsuario", "Nombre Usuario", 0));
        nombreUsuarioLineEdit->setText(QString());
        nombreUsuarioLineEdit->setPlaceholderText(QApplication::translate("dialogoUsuario", "USUARIO", 0));
        contraseALabel->setText(QApplication::translate("dialogoUsuario", "Contrase\303\261a", 0));
        contraseALineEdit->setPlaceholderText(QApplication::translate("dialogoUsuario", "CONTRASE\303\221A", 0));
        repetirContraseALabel->setText(QApplication::translate("dialogoUsuario", "Repetir Contrase\303\261a", 0));
        repetirContraseALineEdit->setPlaceholderText(QApplication::translate("dialogoUsuario", "REPETIR CONTRASE\303\221A", 0));
        label_2->setText(QApplication::translate("dialogoUsuario", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class dialogoUsuario: public Ui_dialogoUsuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGOUSUARIO_H
