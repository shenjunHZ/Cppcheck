/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *mJobs;
    QLabel *label_3;
    QLabel *mLblIdealThreads;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mForce;
    QCheckBox *mShowFullPath;
    QCheckBox *mShowNoErrorsMessage;
    QCheckBox *mShowErrorId;
    QCheckBox *mInlineSuppressions;
    QCheckBox *mEnableInconclusive;
    QCheckBox *mShowStatistics;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *mShowDebugWarnings;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QListWidget *mListIncludePaths;
    QVBoxLayout *verticalLayout_6;
    QPushButton *mBtnAddIncludePath;
    QPushButton *mBtnEditIncludePath;
    QPushButton *mBtnRemoveIncludePath;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *mListWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *mBtnAddApplication;
    QPushButton *mBtnEditApplication;
    QPushButton *mBtnRemoveApplication;
    QPushButton *mBtnDefaultApplication;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *mSaveAllErrors;
    QCheckBox *mSaveFullPath;
    QSpacerItem *verticalSpacer;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_5;
    QListWidget *mListLanguages;
    QDialogButtonBox *mButtons;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(589, 319);
        verticalLayout = new QVBoxLayout(Settings);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(Settings);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label);

        mJobs = new QLineEdit(tab);
        mJobs->setObjectName(QStringLiteral("mJobs"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mJobs->sizePolicy().hasHeightForWidth());
        mJobs->setSizePolicy(sizePolicy1);
        mJobs->setMinimumSize(QSize(100, 20));
        mJobs->setBaseSize(QSize(100, 20));
        mJobs->setInputMask(QStringLiteral("009; "));
        mJobs->setText(QStringLiteral(""));
        mJobs->setMaxLength(3);
        mJobs->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(mJobs);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        mLblIdealThreads = new QLabel(tab);
        mLblIdealThreads->setObjectName(QStringLiteral("mLblIdealThreads"));
        mLblIdealThreads->setText(QStringLiteral("TextLabel"));

        horizontalLayout_2->addWidget(mLblIdealThreads);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_2);

        mForce = new QCheckBox(tab);
        mForce->setObjectName(QStringLiteral("mForce"));

        verticalLayout_4->addWidget(mForce);

        mShowFullPath = new QCheckBox(tab);
        mShowFullPath->setObjectName(QStringLiteral("mShowFullPath"));

        verticalLayout_4->addWidget(mShowFullPath);

        mShowNoErrorsMessage = new QCheckBox(tab);
        mShowNoErrorsMessage->setObjectName(QStringLiteral("mShowNoErrorsMessage"));

        verticalLayout_4->addWidget(mShowNoErrorsMessage);

        mShowErrorId = new QCheckBox(tab);
        mShowErrorId->setObjectName(QStringLiteral("mShowErrorId"));

        verticalLayout_4->addWidget(mShowErrorId);

        mInlineSuppressions = new QCheckBox(tab);
        mInlineSuppressions->setObjectName(QStringLiteral("mInlineSuppressions"));

        verticalLayout_4->addWidget(mInlineSuppressions);

        mEnableInconclusive = new QCheckBox(tab);
        mEnableInconclusive->setObjectName(QStringLiteral("mEnableInconclusive"));

        verticalLayout_4->addWidget(mEnableInconclusive);

        mShowStatistics = new QCheckBox(tab);
        mShowStatistics->setObjectName(QStringLiteral("mShowStatistics"));

        verticalLayout_4->addWidget(mShowStatistics);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        mShowDebugWarnings = new QCheckBox(tab);
        mShowDebugWarnings->setObjectName(QStringLiteral("mShowDebugWarnings"));

        verticalLayout_4->addWidget(mShowDebugWarnings);

        tabWidget->addTab(tab, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayout_7 = new QVBoxLayout(tab_5);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_2 = new QLabel(tab_5);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_7->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mListIncludePaths = new QListWidget(tab_5);
        mListIncludePaths->setObjectName(QStringLiteral("mListIncludePaths"));
        mListIncludePaths->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout->addWidget(mListIncludePaths);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        mBtnAddIncludePath = new QPushButton(tab_5);
        mBtnAddIncludePath->setObjectName(QStringLiteral("mBtnAddIncludePath"));

        verticalLayout_6->addWidget(mBtnAddIncludePath);

        mBtnEditIncludePath = new QPushButton(tab_5);
        mBtnEditIncludePath->setObjectName(QStringLiteral("mBtnEditIncludePath"));

        verticalLayout_6->addWidget(mBtnEditIncludePath);

        mBtnRemoveIncludePath = new QPushButton(tab_5);
        mBtnRemoveIncludePath->setObjectName(QStringLiteral("mBtnRemoveIncludePath"));

        verticalLayout_6->addWidget(mBtnRemoveIncludePath);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout);

        tabWidget->addTab(tab_5, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayout_3 = new QHBoxLayout(tab_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mListWidget = new QListWidget(tab_2);
        mListWidget->setObjectName(QStringLiteral("mListWidget"));

        horizontalLayout_3->addWidget(mListWidget);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mBtnAddApplication = new QPushButton(tab_2);
        mBtnAddApplication->setObjectName(QStringLiteral("mBtnAddApplication"));

        verticalLayout_2->addWidget(mBtnAddApplication);

        mBtnEditApplication = new QPushButton(tab_2);
        mBtnEditApplication->setObjectName(QStringLiteral("mBtnEditApplication"));

        verticalLayout_2->addWidget(mBtnEditApplication);

        mBtnRemoveApplication = new QPushButton(tab_2);
        mBtnRemoveApplication->setObjectName(QStringLiteral("mBtnRemoveApplication"));

        verticalLayout_2->addWidget(mBtnRemoveApplication);

        mBtnDefaultApplication = new QPushButton(tab_2);
        mBtnDefaultApplication->setObjectName(QStringLiteral("mBtnDefaultApplication"));

        verticalLayout_2->addWidget(mBtnDefaultApplication);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        horizontalLayout_3->addLayout(verticalLayout_2);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        mSaveAllErrors = new QCheckBox(tab_3);
        mSaveAllErrors->setObjectName(QStringLiteral("mSaveAllErrors"));

        verticalLayout_3->addWidget(mSaveAllErrors);

        mSaveFullPath = new QCheckBox(tab_3);
        mSaveFullPath->setObjectName(QStringLiteral("mSaveFullPath"));

        verticalLayout_3->addWidget(mSaveFullPath);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_5 = new QVBoxLayout(tab_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        mListLanguages = new QListWidget(tab_4);
        mListLanguages->setObjectName(QStringLiteral("mListLanguages"));
        mListLanguages->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_5->addWidget(mListLanguages);

        tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget);

        mButtons = new QDialogButtonBox(Settings);
        mButtons->setObjectName(QStringLiteral("mButtons"));
        mButtons->setOrientation(Qt::Horizontal);
        mButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(mButtons);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(mJobs);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget, mJobs);
        QWidget::setTabOrder(mJobs, mForce);
        QWidget::setTabOrder(mForce, mShowFullPath);
        QWidget::setTabOrder(mShowFullPath, mShowNoErrorsMessage);
        QWidget::setTabOrder(mShowNoErrorsMessage, mInlineSuppressions);
        QWidget::setTabOrder(mInlineSuppressions, mListIncludePaths);
        QWidget::setTabOrder(mListIncludePaths, mBtnAddIncludePath);
        QWidget::setTabOrder(mBtnAddIncludePath, mBtnEditIncludePath);
        QWidget::setTabOrder(mBtnEditIncludePath, mBtnRemoveIncludePath);
        QWidget::setTabOrder(mBtnRemoveIncludePath, mListWidget);
        QWidget::setTabOrder(mListWidget, mBtnAddApplication);
        QWidget::setTabOrder(mBtnAddApplication, mBtnEditApplication);
        QWidget::setTabOrder(mBtnEditApplication, mBtnRemoveApplication);
        QWidget::setTabOrder(mBtnRemoveApplication, mBtnDefaultApplication);
        QWidget::setTabOrder(mBtnDefaultApplication, mSaveAllErrors);
        QWidget::setTabOrder(mSaveAllErrors, mSaveFullPath);
        QWidget::setTabOrder(mSaveFullPath, mListLanguages);
        QWidget::setTabOrder(mListLanguages, mEnableInconclusive);
        QWidget::setTabOrder(mEnableInconclusive, mShowStatistics);
        QWidget::setTabOrder(mShowStatistics, mShowDebugWarnings);
        QWidget::setTabOrder(mShowDebugWarnings, mButtons);

        retranslateUi(Settings);
        QObject::connect(mButtons, SIGNAL(accepted()), Settings, SLOT(accept()));
        QObject::connect(mButtons, SIGNAL(rejected()), Settings, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Preferences", Q_NULLPTR));
        label->setText(QApplication::translate("Settings", "Number of threads: ", Q_NULLPTR));
        label_3->setText(QApplication::translate("Settings", "Ideal count:", Q_NULLPTR));
        mForce->setText(QApplication::translate("Settings", "Force checking all #ifdef configurations", Q_NULLPTR));
        mShowFullPath->setText(QApplication::translate("Settings", "Show full path of files", Q_NULLPTR));
        mShowNoErrorsMessage->setText(QApplication::translate("Settings", "Show \"No errors found\" message when no errors found", Q_NULLPTR));
        mShowErrorId->setText(QApplication::translate("Settings", "Display error Id in column \"Id\"", Q_NULLPTR));
        mInlineSuppressions->setText(QApplication::translate("Settings", "Enable inline suppressions", Q_NULLPTR));
        mEnableInconclusive->setText(QApplication::translate("Settings", "Check for inconclusive errors also", Q_NULLPTR));
        mShowStatistics->setText(QApplication::translate("Settings", "Show statistics on check completion", Q_NULLPTR));
        mShowDebugWarnings->setText(QApplication::translate("Settings", "Show internal warnings in log", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Settings", "General", Q_NULLPTR));
        label_2->setText(QApplication::translate("Settings", "Include paths:", Q_NULLPTR));
        mBtnAddIncludePath->setText(QApplication::translate("Settings", "Add...", Q_NULLPTR));
        mBtnEditIncludePath->setText(QApplication::translate("Settings", "Edit", Q_NULLPTR));
        mBtnRemoveIncludePath->setText(QApplication::translate("Settings", "Remove", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Settings", "Paths", Q_NULLPTR));
        mBtnAddApplication->setText(QApplication::translate("Settings", "Add...", Q_NULLPTR));
        mBtnEditApplication->setText(QApplication::translate("Settings", "Edit...", Q_NULLPTR));
        mBtnRemoveApplication->setText(QApplication::translate("Settings", "Remove", Q_NULLPTR));
        mBtnDefaultApplication->setText(QApplication::translate("Settings", "Set as default", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Settings", "Applications", Q_NULLPTR));
        mSaveAllErrors->setText(QApplication::translate("Settings", "Save all errors when creating report", Q_NULLPTR));
        mSaveFullPath->setText(QApplication::translate("Settings", "Save full path to files in reports", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Settings", "Reports", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Settings", "Language", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
