/********************************************************************************
** Form generated from reading UI file 'libraryaddfunctiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARYADDFUNCTIONDIALOG_H
#define UI_LIBRARYADDFUNCTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LibraryAddFunctionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *functionName;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QSpinBox *numberOfArguments;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LibraryAddFunctionDialog)
    {
        if (LibraryAddFunctionDialog->objectName().isEmpty())
            LibraryAddFunctionDialog->setObjectName(QStringLiteral("LibraryAddFunctionDialog"));
        LibraryAddFunctionDialog->setWindowModality(Qt::WindowModal);
        LibraryAddFunctionDialog->resize(353, 89);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LibraryAddFunctionDialog->sizePolicy().hasHeightForWidth());
        LibraryAddFunctionDialog->setSizePolicy(sizePolicy);
        LibraryAddFunctionDialog->setModal(true);
        verticalLayout = new QVBoxLayout(LibraryAddFunctionDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(LibraryAddFunctionDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        functionName = new QLineEdit(LibraryAddFunctionDialog);
        functionName->setObjectName(QStringLiteral("functionName"));

        gridLayout->addWidget(functionName, 0, 1, 1, 1);

        label_2 = new QLabel(LibraryAddFunctionDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        numberOfArguments = new QSpinBox(LibraryAddFunctionDialog);
        numberOfArguments->setObjectName(QStringLiteral("numberOfArguments"));

        horizontalLayout->addWidget(numberOfArguments);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(LibraryAddFunctionDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(LibraryAddFunctionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LibraryAddFunctionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LibraryAddFunctionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LibraryAddFunctionDialog);
    } // setupUi

    void retranslateUi(QDialog *LibraryAddFunctionDialog)
    {
        LibraryAddFunctionDialog->setWindowTitle(QApplication::translate("LibraryAddFunctionDialog", "Add function", Q_NULLPTR));
        label->setText(QApplication::translate("LibraryAddFunctionDialog", "Function name(s)", Q_NULLPTR));
        label_2->setText(QApplication::translate("LibraryAddFunctionDialog", "Number of arguments", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LibraryAddFunctionDialog: public Ui_LibraryAddFunctionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARYADDFUNCTIONDIALOG_H
