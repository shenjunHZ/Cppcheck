/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *mIcon;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *mVersion;
    QLabel *mName;
    QLabel *mCopyright;
    QLabel *mLicense;
    QLabel *mHomepage;
    QDialogButtonBox *mButtons;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(478, 300);
        verticalLayout_3 = new QVBoxLayout(About);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mIcon = new QLabel(About);
        mIcon->setObjectName(QStringLiteral("mIcon"));
        mIcon->setPixmap(QPixmap(QString::fromUtf8(":/cppcheck-gui.png")));

        verticalLayout_2->addWidget(mIcon);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        mVersion = new QLabel(About);
        mVersion->setObjectName(QStringLiteral("mVersion"));

        verticalLayout->addWidget(mVersion);

        mName = new QLabel(About);
        mName->setObjectName(QStringLiteral("mName"));
        mName->setWordWrap(true);

        verticalLayout->addWidget(mName);

        mCopyright = new QLabel(About);
        mCopyright->setObjectName(QStringLiteral("mCopyright"));
        mCopyright->setWordWrap(true);

        verticalLayout->addWidget(mCopyright);

        mLicense = new QLabel(About);
        mLicense->setObjectName(QStringLiteral("mLicense"));
        mLicense->setWordWrap(true);

        verticalLayout->addWidget(mLicense);

        mHomepage = new QLabel(About);
        mHomepage->setObjectName(QStringLiteral("mHomepage"));
        mHomepage->setWordWrap(true);
        mHomepage->setOpenExternalLinks(true);

        verticalLayout->addWidget(mHomepage);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        mButtons = new QDialogButtonBox(About);
        mButtons->setObjectName(QStringLiteral("mButtons"));
        mButtons->setOrientation(Qt::Horizontal);
        mButtons->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(mButtons);


        retranslateUi(About);
        QObject::connect(mButtons, SIGNAL(accepted()), About, SLOT(accept()));
        QObject::connect(mButtons, SIGNAL(rejected()), About, SLOT(reject()));

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "About Cppcheck", Q_NULLPTR));
        mIcon->setText(QString());
        mVersion->setText(QApplication::translate("About", "Version %1", Q_NULLPTR));
        mName->setText(QApplication::translate("About", "Cppcheck - A tool for static C/C++ code analysis.", Q_NULLPTR));
        mCopyright->setText(QApplication::translate("About", "Copyright \302\251 2007-2017 Cppcheck team.", Q_NULLPTR));
        mLicense->setText(QApplication::translate("About", "This program is licensed under the terms\n"
"of the GNU General Public License version 3", Q_NULLPTR));
        mHomepage->setText(QApplication::translate("About", "Visit Cppcheck homepage at %1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
