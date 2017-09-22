/********************************************************************************
** Form generated from reading UI file 'file.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILE_H
#define UI_FILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Fileview
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *mText;
    QDialogButtonBox *mButtons;

    void setupUi(QDialog *Fileview)
    {
        if (Fileview->objectName().isEmpty())
            Fileview->setObjectName(QStringLiteral("Fileview"));
        Fileview->resize(400, 300);
        Fileview->setWindowTitle(QStringLiteral("Fileview"));
        verticalLayout = new QVBoxLayout(Fileview);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mText = new QTextEdit(Fileview);
        mText->setObjectName(QStringLiteral("mText"));
        mText->setReadOnly(true);

        verticalLayout->addWidget(mText);

        mButtons = new QDialogButtonBox(Fileview);
        mButtons->setObjectName(QStringLiteral("mButtons"));
        mButtons->setOrientation(Qt::Horizontal);
        mButtons->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(mButtons);


        retranslateUi(Fileview);
        QObject::connect(mButtons, SIGNAL(accepted()), Fileview, SLOT(accept()));
        QObject::connect(mButtons, SIGNAL(rejected()), Fileview, SLOT(reject()));

        QMetaObject::connectSlotsByName(Fileview);
    } // setupUi

    void retranslateUi(QDialog *Fileview)
    {
        Q_UNUSED(Fileview);
    } // retranslateUi

};

namespace Ui {
    class Fileview: public Ui_Fileview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILE_H
