/********************************************************************************
** Form generated from reading UI file 'application.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLICATION_H
#define UI_APPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ApplicationDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *mName;
    QLineEdit *mPath;
    QLineEdit *mParameters;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *mButtonBrowse;
    QDialogButtonBox *mButtons;

    void setupUi(QDialog *ApplicationDialog)
    {
        if (ApplicationDialog->objectName().isEmpty())
            ApplicationDialog->setObjectName(QStringLiteral("ApplicationDialog"));
        ApplicationDialog->setWindowModality(Qt::WindowModal);
        ApplicationDialog->resize(569, 471);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ApplicationDialog->sizePolicy().hasHeightForWidth());
        ApplicationDialog->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(ApplicationDialog);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(ApplicationDialog);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 0));
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        verticalLayout_4->addWidget(label);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(ApplicationDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(ApplicationDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(ApplicationDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mName = new QLineEdit(ApplicationDialog);
        mName->setObjectName(QStringLiteral("mName"));

        verticalLayout->addWidget(mName);

        mPath = new QLineEdit(ApplicationDialog);
        mPath->setObjectName(QStringLiteral("mPath"));

        verticalLayout->addWidget(mPath);

        mParameters = new QLineEdit(ApplicationDialog);
        mParameters->setObjectName(QStringLiteral("mParameters"));

        verticalLayout->addWidget(mParameters);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mButtonBrowse = new QPushButton(ApplicationDialog);
        mButtonBrowse->setObjectName(QStringLiteral("mButtonBrowse"));

        horizontalLayout_2->addWidget(mButtonBrowse);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        mButtons = new QDialogButtonBox(ApplicationDialog);
        mButtons->setObjectName(QStringLiteral("mButtons"));
        mButtons->setOrientation(Qt::Horizontal);
        mButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_4->addWidget(mButtons);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(mName);
        label_3->setBuddy(mPath);
        label_4->setBuddy(mParameters);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mName, mPath);
        QWidget::setTabOrder(mPath, mParameters);
        QWidget::setTabOrder(mParameters, mButtonBrowse);
        QWidget::setTabOrder(mButtonBrowse, mButtons);

        retranslateUi(ApplicationDialog);
        QObject::connect(mButtons, SIGNAL(accepted()), ApplicationDialog, SLOT(accept()));
        QObject::connect(mButtons, SIGNAL(rejected()), ApplicationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ApplicationDialog);
    } // setupUi

    void retranslateUi(QDialog *ApplicationDialog)
    {
        ApplicationDialog->setWindowTitle(QApplication::translate("ApplicationDialog", "Add an application", Q_NULLPTR));
        label->setText(QApplication::translate("ApplicationDialog", "Here you can add an application that can open error files. Specify a name for the application, the application executable and command line parameters for the application.\n"
"\n"
"The following texts in parameters are replaced with appropriate values when application is executed:\n"
"(file) - Filename containing the error\n"
"(line) - Line number containing the error\n"
"(message) - Error message\n"
"(severity) - Error severity\n"
"\n"
"Example opening a file with Kate and make Kate scroll to the correct line:\n"
"Executable: kate\n"
"Parameters: -l(line) (file)", Q_NULLPTR));
        label_2->setText(QApplication::translate("ApplicationDialog", "&Name:", Q_NULLPTR));
        label_3->setText(QApplication::translate("ApplicationDialog", "&Executable:", Q_NULLPTR));
        label_4->setText(QApplication::translate("ApplicationDialog", "&Parameters:", Q_NULLPTR));
        mButtonBrowse->setText(QApplication::translate("ApplicationDialog", "Browse", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ApplicationDialog: public Ui_ApplicationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATION_H
