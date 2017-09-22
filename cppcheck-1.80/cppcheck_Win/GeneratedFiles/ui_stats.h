/********************************************************************************
** Form generated from reading UI file 'stats.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATS_H
#define UI_STATS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *mTabWidget;
    QWidget *mProjectTab;
    QVBoxLayout *verticalLayout_2;
    QLabel *mProjectLabel;
    QLineEdit *mProject;
    QLabel *mPathsLabel;
    QLineEdit *mPaths;
    QLabel *mIncludePathsLabel;
    QLineEdit *mIncludePaths;
    QLabel *mDefinesLabel;
    QLineEdit *mDefines;
    QSpacerItem *mVerticalSpacer;
    QWidget *mScanTab;
    QGridLayout *gridLayout;
    QLabel *mPathLabel;
    QLabel *mNumberOfFilesScannedLabel;
    QLabel *mNumberOfFilesScanned;
    QLabel *mScanDurationLabel;
    QLabel *mScanDuration;
    QSpacerItem *mVerticalSpacer_2;
    QLineEdit *mPath;
    QWidget *mStatsTab;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLabel *mLblErrors;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *mLblWarnings;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *mLblStyle;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLabel *mLblPortability;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *mLblPerformance;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLabel *mLblInformation;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mCopyToClipboard;
    QPushButton *mPDFexport;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *StatsDialog)
    {
        if (StatsDialog->objectName().isEmpty())
            StatsDialog->setObjectName(QStringLiteral("StatsDialog"));
        StatsDialog->resize(502, 274);
        verticalLayout = new QVBoxLayout(StatsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mTabWidget = new QTabWidget(StatsDialog);
        mTabWidget->setObjectName(QStringLiteral("mTabWidget"));
        mTabWidget->setTabShape(QTabWidget::Rounded);
        mProjectTab = new QWidget();
        mProjectTab->setObjectName(QStringLiteral("mProjectTab"));
        verticalLayout_2 = new QVBoxLayout(mProjectTab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mProjectLabel = new QLabel(mProjectTab);
        mProjectLabel->setObjectName(QStringLiteral("mProjectLabel"));

        verticalLayout_2->addWidget(mProjectLabel);

        mProject = new QLineEdit(mProjectTab);
        mProject->setObjectName(QStringLiteral("mProject"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mProject->sizePolicy().hasHeightForWidth());
        mProject->setSizePolicy(sizePolicy);
        mProject->setReadOnly(true);

        verticalLayout_2->addWidget(mProject);

        mPathsLabel = new QLabel(mProjectTab);
        mPathsLabel->setObjectName(QStringLiteral("mPathsLabel"));

        verticalLayout_2->addWidget(mPathsLabel);

        mPaths = new QLineEdit(mProjectTab);
        mPaths->setObjectName(QStringLiteral("mPaths"));
        mPaths->setEnabled(true);
        sizePolicy.setHeightForWidth(mPaths->sizePolicy().hasHeightForWidth());
        mPaths->setSizePolicy(sizePolicy);
        mPaths->setAcceptDrops(true);
        mPaths->setAutoFillBackground(false);
        mPaths->setFrame(true);
        mPaths->setReadOnly(true);

        verticalLayout_2->addWidget(mPaths);

        mIncludePathsLabel = new QLabel(mProjectTab);
        mIncludePathsLabel->setObjectName(QStringLiteral("mIncludePathsLabel"));

        verticalLayout_2->addWidget(mIncludePathsLabel);

        mIncludePaths = new QLineEdit(mProjectTab);
        mIncludePaths->setObjectName(QStringLiteral("mIncludePaths"));
        mIncludePaths->setEnabled(true);
        sizePolicy.setHeightForWidth(mIncludePaths->sizePolicy().hasHeightForWidth());
        mIncludePaths->setSizePolicy(sizePolicy);
        mIncludePaths->setReadOnly(true);

        verticalLayout_2->addWidget(mIncludePaths);

        mDefinesLabel = new QLabel(mProjectTab);
        mDefinesLabel->setObjectName(QStringLiteral("mDefinesLabel"));

        verticalLayout_2->addWidget(mDefinesLabel);

        mDefines = new QLineEdit(mProjectTab);
        mDefines->setObjectName(QStringLiteral("mDefines"));
        mDefines->setEnabled(true);
        sizePolicy.setHeightForWidth(mDefines->sizePolicy().hasHeightForWidth());
        mDefines->setSizePolicy(sizePolicy);
        mDefines->setReadOnly(true);

        verticalLayout_2->addWidget(mDefines);

        mVerticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(mVerticalSpacer);

        mTabWidget->addTab(mProjectTab, QString());
        mScanTab = new QWidget();
        mScanTab->setObjectName(QStringLiteral("mScanTab"));
        gridLayout = new QGridLayout(mScanTab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mPathLabel = new QLabel(mScanTab);
        mPathLabel->setObjectName(QStringLiteral("mPathLabel"));
        mPathLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(mPathLabel, 0, 0, 1, 1);

        mNumberOfFilesScannedLabel = new QLabel(mScanTab);
        mNumberOfFilesScannedLabel->setObjectName(QStringLiteral("mNumberOfFilesScannedLabel"));
        mNumberOfFilesScannedLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(mNumberOfFilesScannedLabel, 1, 0, 1, 1);

        mNumberOfFilesScanned = new QLabel(mScanTab);
        mNumberOfFilesScanned->setObjectName(QStringLiteral("mNumberOfFilesScanned"));
        mNumberOfFilesScanned->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(mNumberOfFilesScanned, 1, 1, 1, 1);

        mScanDurationLabel = new QLabel(mScanTab);
        mScanDurationLabel->setObjectName(QStringLiteral("mScanDurationLabel"));
        mScanDurationLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(mScanDurationLabel, 2, 0, 1, 1);

        mScanDuration = new QLabel(mScanTab);
        mScanDuration->setObjectName(QStringLiteral("mScanDuration"));
        mScanDuration->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(mScanDuration, 2, 1, 1, 1);

        mVerticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(mVerticalSpacer_2, 3, 0, 1, 1);

        mPath = new QLineEdit(mScanTab);
        mPath->setObjectName(QStringLiteral("mPath"));
        sizePolicy.setHeightForWidth(mPath->sizePolicy().hasHeightForWidth());
        mPath->setSizePolicy(sizePolicy);
        mPath->setReadOnly(true);

        gridLayout->addWidget(mPath, 0, 1, 1, 1);

        mTabWidget->addTab(mScanTab, QString());
        mStatsTab = new QWidget();
        mStatsTab->setObjectName(QStringLiteral("mStatsTab"));
        formLayout = new QFormLayout(mStatsTab);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(mStatsTab);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        mLblErrors = new QLabel(mStatsTab);
        mLblErrors->setObjectName(QStringLiteral("mLblErrors"));
        mLblErrors->setText(QStringLiteral("TextLabel"));

        horizontalLayout_5->addWidget(mLblErrors);


        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(mStatsTab);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        mLblWarnings = new QLabel(mStatsTab);
        mLblWarnings->setObjectName(QStringLiteral("mLblWarnings"));
        mLblWarnings->setText(QStringLiteral("TextLabel"));

        horizontalLayout_2->addWidget(mLblWarnings);


        formLayout->setLayout(1, QFormLayout::LabelRole, horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(mStatsTab);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        mLblStyle = new QLabel(mStatsTab);
        mLblStyle->setObjectName(QStringLiteral("mLblStyle"));
        mLblStyle->setText(QStringLiteral("TextLabel"));

        horizontalLayout_3->addWidget(mLblStyle);


        formLayout->setLayout(2, QFormLayout::LabelRole, horizontalLayout_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_6 = new QLabel(mStatsTab);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_8->addWidget(label_6);

        mLblPortability = new QLabel(mStatsTab);
        mLblPortability->setObjectName(QStringLiteral("mLblPortability"));
        mLblPortability->setText(QStringLiteral("TextLabel"));

        horizontalLayout_8->addWidget(mLblPortability);


        formLayout->setLayout(3, QFormLayout::LabelRole, horizontalLayout_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(mStatsTab);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        mLblPerformance = new QLabel(mStatsTab);
        mLblPerformance->setObjectName(QStringLiteral("mLblPerformance"));
        mLblPerformance->setText(QStringLiteral("TextLabel"));

        horizontalLayout_4->addWidget(mLblPerformance);


        formLayout->setLayout(4, QFormLayout::LabelRole, horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(mStatsTab);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        mLblInformation = new QLabel(mStatsTab);
        mLblInformation->setObjectName(QStringLiteral("mLblInformation"));
        mLblInformation->setText(QStringLiteral("TextLabel"));

        horizontalLayout_6->addWidget(mLblInformation);


        formLayout->setLayout(5, QFormLayout::LabelRole, horizontalLayout_6);

        mTabWidget->addTab(mStatsTab, QString());

        verticalLayout->addWidget(mTabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mCopyToClipboard = new QPushButton(StatsDialog);
        mCopyToClipboard->setObjectName(QStringLiteral("mCopyToClipboard"));

        horizontalLayout->addWidget(mCopyToClipboard);

        mPDFexport = new QPushButton(StatsDialog);
        mPDFexport->setObjectName(QStringLiteral("mPDFexport"));

        horizontalLayout->addWidget(mPDFexport);

        mButtonBox = new QDialogButtonBox(StatsDialog);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mButtonBox->sizePolicy().hasHeightForWidth());
        mButtonBox->setSizePolicy(sizePolicy1);
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(mButtonBox);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(mTabWidget, mProject);
        QWidget::setTabOrder(mProject, mPaths);
        QWidget::setTabOrder(mPaths, mIncludePaths);
        QWidget::setTabOrder(mIncludePaths, mDefines);
        QWidget::setTabOrder(mDefines, mCopyToClipboard);
        QWidget::setTabOrder(mCopyToClipboard, mButtonBox);
        QWidget::setTabOrder(mButtonBox, mPath);

        retranslateUi(StatsDialog);
        QObject::connect(mButtonBox, SIGNAL(accepted()), StatsDialog, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), StatsDialog, SLOT(reject()));

        mTabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(StatsDialog);
    } // setupUi

    void retranslateUi(QDialog *StatsDialog)
    {
        StatsDialog->setWindowTitle(QApplication::translate("StatsDialog", "Statistics", Q_NULLPTR));
        mProjectLabel->setText(QApplication::translate("StatsDialog", "Project:", Q_NULLPTR));
        mPathsLabel->setText(QApplication::translate("StatsDialog", "Paths:", Q_NULLPTR));
        mIncludePathsLabel->setText(QApplication::translate("StatsDialog", "Include paths:", Q_NULLPTR));
        mDefinesLabel->setText(QApplication::translate("StatsDialog", "Defines:", Q_NULLPTR));
        mTabWidget->setTabText(mTabWidget->indexOf(mProjectTab), QApplication::translate("StatsDialog", "Project", Q_NULLPTR));
        mPathLabel->setText(QApplication::translate("StatsDialog", "Path Selected:", Q_NULLPTR));
        mNumberOfFilesScannedLabel->setText(QApplication::translate("StatsDialog", "Number of Files Scanned:", Q_NULLPTR));
        mNumberOfFilesScanned->setText(QString());
        mScanDurationLabel->setText(QApplication::translate("StatsDialog", "Scan Duration:", Q_NULLPTR));
        mScanDuration->setText(QString());
        mTabWidget->setTabText(mTabWidget->indexOf(mScanTab), QApplication::translate("StatsDialog", "Previous Scan", Q_NULLPTR));
        label->setText(QApplication::translate("StatsDialog", "Errors:", Q_NULLPTR));
        label_2->setText(QApplication::translate("StatsDialog", "Warnings:", Q_NULLPTR));
        label_3->setText(QApplication::translate("StatsDialog", "Stylistic warnings:", Q_NULLPTR));
        label_6->setText(QApplication::translate("StatsDialog", "Portability warnings:", Q_NULLPTR));
        label_4->setText(QApplication::translate("StatsDialog", "Performance issues:", Q_NULLPTR));
        label_5->setText(QApplication::translate("StatsDialog", "Information messages:", Q_NULLPTR));
        mTabWidget->setTabText(mTabWidget->indexOf(mStatsTab), QApplication::translate("StatsDialog", "Statistics", Q_NULLPTR));
        mCopyToClipboard->setText(QApplication::translate("StatsDialog", "Copy to Clipboard", Q_NULLPTR));
        mPDFexport->setText(QApplication::translate("StatsDialog", "Pdf Export", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StatsDialog: public Ui_StatsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATS_H
