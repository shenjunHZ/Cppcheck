/********************************************************************************
** Form generated from reading UI file 'scratchpad.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCRATCHPAD_H
#define UI_SCRATCHPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ScratchPad
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit;
    QPushButton *mCheckButton;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *ScratchPad)
    {
        if (ScratchPad->objectName().isEmpty())
            ScratchPad->setObjectName(QStringLiteral("ScratchPad"));
        ScratchPad->resize(500, 600);
        verticalLayout = new QVBoxLayout(ScratchPad);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(ScratchPad);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        QFont font;
        font.setFamily(QStringLiteral("Courier New"));
        font.setPointSize(10);
        plainTextEdit->setFont(font);

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEdit = new QLineEdit(ScratchPad);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        mCheckButton = new QPushButton(ScratchPad);
        mCheckButton->setObjectName(QStringLiteral("mCheckButton"));

        horizontalLayout->addWidget(mCheckButton);

        mButtonBox = new QDialogButtonBox(ScratchPad);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mButtonBox->sizePolicy().hasHeightForWidth());
        mButtonBox->setSizePolicy(sizePolicy);
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(mButtonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ScratchPad);
        QObject::connect(mButtonBox, SIGNAL(rejected()), ScratchPad, SLOT(reject()));

        QMetaObject::connectSlotsByName(ScratchPad);
    } // setupUi

    void retranslateUi(QDialog *ScratchPad)
    {
        ScratchPad->setWindowTitle(QApplication::translate("ScratchPad", "Scratchpad", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("ScratchPad", "filename", Q_NULLPTR));
        mCheckButton->setText(QApplication::translate("ScratchPad", "Check", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ScratchPad: public Ui_ScratchPad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCRATCHPAD_H
