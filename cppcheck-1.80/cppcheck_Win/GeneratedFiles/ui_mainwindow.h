/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "resultsview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *mActionLicense;
    QAction *mActionAuthors;
    QAction *mActionAbout;
    QAction *mActionCheckFiles;
    QAction *mActionCheckDirectory;
    QAction *mActionRecheckModified;
    QAction *mActionRecheckAll;
    QAction *mActionStop;
    QAction *mActionSave;
    QAction *mActionQuit;
    QAction *mActionClearResults;
    QAction *mActionSettings;
    QAction *mActionShowStyle;
    QAction *mActionShowErrors;
    QAction *mActionCheckAll;
    QAction *mActionUncheckAll;
    QAction *mActionCollapseAll;
    QAction *mActionExpandAll;
    QAction *mActionToolBarMain;
    QAction *mActionHelpContents;
    QAction *actionToolbar;
    QAction *mActionToolBarView;
    QAction *mActionOpenXML;
    QAction *mActionOpenProjectFile;
    QAction *mActionShowScratchpad;
    QAction *mActionNewProjectFile;
    QAction *mActionViewLog;
    QAction *mActionCloseProjectFile;
    QAction *mActionEditProjectFile;
    QAction *mActionViewStats;
    QAction *mActionShowWarnings;
    QAction *mActionShowPerformance;
    QAction *mActionShowHidden;
    QAction *mActionShowInformation;
    QAction *mActionShowPortability;
    QAction *mActionToolBarFilter;
    QAction *mActionProjectMRU;
    QAction *mActionPlatformWin32ANSI;
    QAction *mActionPlatformWin32Unicode;
    QAction *mActionPlatformUnix32Bit;
    QAction *mActionPlatformUnix64Bit;
    QAction *mActionPlatformWin64;
    QAction *mActionPlatforms;
    QAction *mActionCpp11;
    QAction *mActionC99;
    QAction *mActionPosix;
    QAction *mActionC11;
    QAction *mActionC89;
    QAction *mActionCpp03;
    QAction *mActionPrint;
    QAction *mActionPrintPreview;
    QAction *mActionLibraryEditor;
    QAction *mActionAutoDetectLanguage;
    QAction *mActionEnforceCpp;
    QAction *mActionEnforceC;
    QWidget *mCentral;
    QHBoxLayout *horizontalLayout;
    ResultsView *mResults;
    QMenuBar *mMenuBar;
    QMenu *mMenuFile;
    QMenu *mMenuView;
    QMenu *mMenuToolbars;
    QMenu *mMenuHelp;
    QMenu *mMenuCheck;
    QMenu *menuCpp_standard;
    QMenu *menuC_standard;
    QMenu *mMenuEdit;
    QToolBar *mToolBarMain;
    QToolBar *mToolBarView;
    QToolBar *mToolBarFilter;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(640, 480);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(640, 480));
        MainWindow->setIconSize(QSize(22, 22));
        mActionLicense = new QAction(MainWindow);
        mActionLicense->setObjectName(QStringLiteral("mActionLicense"));
        mActionAuthors = new QAction(MainWindow);
        mActionAuthors->setObjectName(QStringLiteral("mActionAuthors"));
        mActionAbout = new QAction(MainWindow);
        mActionAbout->setObjectName(QStringLiteral("mActionAbout"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/help-browser.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAbout->setIcon(icon);
        mActionCheckFiles = new QAction(MainWindow);
        mActionCheckFiles->setObjectName(QStringLiteral("mActionCheckFiles"));
        mActionCheckDirectory = new QAction(MainWindow);
        mActionCheckDirectory->setObjectName(QStringLiteral("mActionCheckDirectory"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/cppcheck-gui.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCheckDirectory->setIcon(icon1);
        mActionRecheckModified = new QAction(MainWindow);
        mActionRecheckModified->setObjectName(QStringLiteral("mActionRecheckModified"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/view-refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRecheckModified->setIcon(icon2);
        mActionRecheckAll = new QAction(MainWindow);
        mActionRecheckAll->setObjectName(QStringLiteral("mActionRecheckAll"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/view-recheck.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRecheckAll->setIcon(icon3);
        mActionStop = new QAction(MainWindow);
        mActionStop->setObjectName(QStringLiteral("mActionStop"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/process-stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionStop->setIcon(icon4);
        mActionSave = new QAction(MainWindow);
        mActionSave->setObjectName(QStringLiteral("mActionSave"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/media-floppy.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSave->setIcon(icon5);
        mActionQuit = new QAction(MainWindow);
        mActionQuit->setObjectName(QStringLiteral("mActionQuit"));
        mActionClearResults = new QAction(MainWindow);
        mActionClearResults->setObjectName(QStringLiteral("mActionClearResults"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/edit-clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionClearResults->setIcon(icon6);
        mActionSettings = new QAction(MainWindow);
        mActionSettings->setObjectName(QStringLiteral("mActionSettings"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/preferences-system.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSettings->setIcon(icon7);
        mActionShowStyle = new QAction(MainWindow);
        mActionShowStyle->setObjectName(QStringLiteral("mActionShowStyle"));
        mActionShowStyle->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/applications-development.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowStyle->setIcon(icon8);
        mActionShowErrors = new QAction(MainWindow);
        mActionShowErrors->setObjectName(QStringLiteral("mActionShowErrors"));
        mActionShowErrors->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/showerrors.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowErrors->setIcon(icon9);
        mActionCheckAll = new QAction(MainWindow);
        mActionCheckAll->setObjectName(QStringLiteral("mActionCheckAll"));
        mActionUncheckAll = new QAction(MainWindow);
        mActionUncheckAll->setObjectName(QStringLiteral("mActionUncheckAll"));
        mActionCollapseAll = new QAction(MainWindow);
        mActionCollapseAll->setObjectName(QStringLiteral("mActionCollapseAll"));
        mActionExpandAll = new QAction(MainWindow);
        mActionExpandAll->setObjectName(QStringLiteral("mActionExpandAll"));
        mActionToolBarMain = new QAction(MainWindow);
        mActionToolBarMain->setObjectName(QStringLiteral("mActionToolBarMain"));
        mActionToolBarMain->setCheckable(true);
        mActionHelpContents = new QAction(MainWindow);
        mActionHelpContents->setObjectName(QStringLiteral("mActionHelpContents"));
        actionToolbar = new QAction(MainWindow);
        actionToolbar->setObjectName(QStringLiteral("actionToolbar"));
        mActionToolBarView = new QAction(MainWindow);
        mActionToolBarView->setObjectName(QStringLiteral("mActionToolBarView"));
        mActionToolBarView->setCheckable(true);
        mActionOpenXML = new QAction(MainWindow);
        mActionOpenXML->setObjectName(QStringLiteral("mActionOpenXML"));
        mActionOpenProjectFile = new QAction(MainWindow);
        mActionOpenProjectFile->setObjectName(QStringLiteral("mActionOpenProjectFile"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/openproject.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionOpenProjectFile->setIcon(icon10);
        mActionShowScratchpad = new QAction(MainWindow);
        mActionShowScratchpad->setObjectName(QStringLiteral("mActionShowScratchpad"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/scratchpad.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowScratchpad->setIcon(icon11);
        mActionNewProjectFile = new QAction(MainWindow);
        mActionNewProjectFile->setObjectName(QStringLiteral("mActionNewProjectFile"));
        mActionViewLog = new QAction(MainWindow);
        mActionViewLog->setObjectName(QStringLiteral("mActionViewLog"));
        mActionCloseProjectFile = new QAction(MainWindow);
        mActionCloseProjectFile->setObjectName(QStringLiteral("mActionCloseProjectFile"));
        mActionCloseProjectFile->setEnabled(false);
        mActionEditProjectFile = new QAction(MainWindow);
        mActionEditProjectFile->setObjectName(QStringLiteral("mActionEditProjectFile"));
        mActionEditProjectFile->setEnabled(false);
        mActionViewStats = new QAction(MainWindow);
        mActionViewStats->setObjectName(QStringLiteral("mActionViewStats"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/text-x-generic.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionViewStats->setIcon(icon12);
        mActionShowWarnings = new QAction(MainWindow);
        mActionShowWarnings->setObjectName(QStringLiteral("mActionShowWarnings"));
        mActionShowWarnings->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/showwarnings.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowWarnings->setIcon(icon13);
        mActionShowPerformance = new QAction(MainWindow);
        mActionShowPerformance->setObjectName(QStringLiteral("mActionShowPerformance"));
        mActionShowPerformance->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/showperformance.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowPerformance->setIcon(icon14);
        mActionShowHidden = new QAction(MainWindow);
        mActionShowHidden->setObjectName(QStringLiteral("mActionShowHidden"));
        mActionShowHidden->setEnabled(false);
        mActionShowInformation = new QAction(MainWindow);
        mActionShowInformation->setObjectName(QStringLiteral("mActionShowInformation"));
        mActionShowInformation->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/dialog-information.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowInformation->setIcon(icon15);
        mActionShowPortability = new QAction(MainWindow);
        mActionShowPortability->setObjectName(QStringLiteral("mActionShowPortability"));
        mActionShowPortability->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/images/applications-system.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowPortability->setIcon(icon16);
        mActionToolBarFilter = new QAction(MainWindow);
        mActionToolBarFilter->setObjectName(QStringLiteral("mActionToolBarFilter"));
        mActionToolBarFilter->setCheckable(true);
        mActionProjectMRU = new QAction(MainWindow);
        mActionProjectMRU->setObjectName(QStringLiteral("mActionProjectMRU"));
        mActionProjectMRU->setText(QStringLiteral("Project MRU placeholder"));
        mActionProjectMRU->setVisible(true);
        mActionPlatformWin32ANSI = new QAction(MainWindow);
        mActionPlatformWin32ANSI->setObjectName(QStringLiteral("mActionPlatformWin32ANSI"));
        mActionPlatformWin32ANSI->setCheckable(true);
        mActionPlatformWin32Unicode = new QAction(MainWindow);
        mActionPlatformWin32Unicode->setObjectName(QStringLiteral("mActionPlatformWin32Unicode"));
        mActionPlatformWin32Unicode->setCheckable(true);
        mActionPlatformUnix32Bit = new QAction(MainWindow);
        mActionPlatformUnix32Bit->setObjectName(QStringLiteral("mActionPlatformUnix32Bit"));
        mActionPlatformUnix32Bit->setCheckable(true);
        mActionPlatformUnix64Bit = new QAction(MainWindow);
        mActionPlatformUnix64Bit->setObjectName(QStringLiteral("mActionPlatformUnix64Bit"));
        mActionPlatformUnix64Bit->setCheckable(true);
        mActionPlatformWin64 = new QAction(MainWindow);
        mActionPlatformWin64->setObjectName(QStringLiteral("mActionPlatformWin64"));
        mActionPlatformWin64->setCheckable(true);
        mActionPlatforms = new QAction(MainWindow);
        mActionPlatforms->setObjectName(QStringLiteral("mActionPlatforms"));
        mActionPlatforms->setCheckable(false);
        mActionPlatforms->setVisible(false);
        mActionCpp11 = new QAction(MainWindow);
        mActionCpp11->setObjectName(QStringLiteral("mActionCpp11"));
        mActionCpp11->setCheckable(true);
        mActionCpp11->setChecked(true);
        mActionC99 = new QAction(MainWindow);
        mActionC99->setObjectName(QStringLiteral("mActionC99"));
        mActionC99->setCheckable(true);
        mActionC99->setChecked(true);
        mActionPosix = new QAction(MainWindow);
        mActionPosix->setObjectName(QStringLiteral("mActionPosix"));
        mActionPosix->setCheckable(true);
        mActionC11 = new QAction(MainWindow);
        mActionC11->setObjectName(QStringLiteral("mActionC11"));
        mActionC11->setCheckable(true);
        mActionC89 = new QAction(MainWindow);
        mActionC89->setObjectName(QStringLiteral("mActionC89"));
        mActionC89->setCheckable(true);
        mActionCpp03 = new QAction(MainWindow);
        mActionCpp03->setObjectName(QStringLiteral("mActionCpp03"));
        mActionCpp03->setCheckable(true);
        mActionPrint = new QAction(MainWindow);
        mActionPrint->setObjectName(QStringLiteral("mActionPrint"));
        mActionPrintPreview = new QAction(MainWindow);
        mActionPrintPreview->setObjectName(QStringLiteral("mActionPrintPreview"));
        mActionLibraryEditor = new QAction(MainWindow);
        mActionLibraryEditor->setObjectName(QStringLiteral("mActionLibraryEditor"));
        mActionAutoDetectLanguage = new QAction(MainWindow);
        mActionAutoDetectLanguage->setObjectName(QStringLiteral("mActionAutoDetectLanguage"));
        mActionAutoDetectLanguage->setCheckable(true);
        mActionEnforceCpp = new QAction(MainWindow);
        mActionEnforceCpp->setObjectName(QStringLiteral("mActionEnforceCpp"));
        mActionEnforceCpp->setCheckable(true);
        mActionEnforceC = new QAction(MainWindow);
        mActionEnforceC->setObjectName(QStringLiteral("mActionEnforceC"));
        mActionEnforceC->setCheckable(true);
        mCentral = new QWidget(MainWindow);
        mCentral->setObjectName(QStringLiteral("mCentral"));
        sizePolicy.setHeightForWidth(mCentral->sizePolicy().hasHeightForWidth());
        mCentral->setSizePolicy(sizePolicy);
        mCentral->setMinimumSize(QSize(0, 0));
        mCentral->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout = new QHBoxLayout(mCentral);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mResults = new ResultsView(mCentral);
        mResults->setObjectName(QStringLiteral("mResults"));

        horizontalLayout->addWidget(mResults);

        MainWindow->setCentralWidget(mCentral);
        mMenuBar = new QMenuBar(MainWindow);
        mMenuBar->setObjectName(QStringLiteral("mMenuBar"));
        mMenuBar->setGeometry(QRect(0, 0, 640, 20));
        mMenuFile = new QMenu(mMenuBar);
        mMenuFile->setObjectName(QStringLiteral("mMenuFile"));
        mMenuView = new QMenu(mMenuBar);
        mMenuView->setObjectName(QStringLiteral("mMenuView"));
        mMenuToolbars = new QMenu(mMenuView);
        mMenuToolbars->setObjectName(QStringLiteral("mMenuToolbars"));
        mMenuHelp = new QMenu(mMenuBar);
        mMenuHelp->setObjectName(QStringLiteral("mMenuHelp"));
        mMenuCheck = new QMenu(mMenuBar);
        mMenuCheck->setObjectName(QStringLiteral("mMenuCheck"));
        menuCpp_standard = new QMenu(mMenuCheck);
        menuCpp_standard->setObjectName(QStringLiteral("menuCpp_standard"));
        menuC_standard = new QMenu(mMenuCheck);
        menuC_standard->setObjectName(QStringLiteral("menuC_standard"));
        mMenuEdit = new QMenu(mMenuBar);
        mMenuEdit->setObjectName(QStringLiteral("mMenuEdit"));
        MainWindow->setMenuBar(mMenuBar);
        mToolBarMain = new QToolBar(MainWindow);
        mToolBarMain->setObjectName(QStringLiteral("mToolBarMain"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mToolBarMain);
        mToolBarView = new QToolBar(MainWindow);
        mToolBarView->setObjectName(QStringLiteral("mToolBarView"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mToolBarView);
        mToolBarFilter = new QToolBar(MainWindow);
        mToolBarFilter->setObjectName(QStringLiteral("mToolBarFilter"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mToolBarFilter);

        mMenuBar->addAction(mMenuFile->menuAction());
        mMenuBar->addAction(mMenuEdit->menuAction());
        mMenuBar->addAction(mMenuView->menuAction());
        mMenuBar->addAction(mMenuCheck->menuAction());
        mMenuBar->addAction(mMenuHelp->menuAction());
        mMenuFile->addAction(mActionOpenXML);
        mMenuFile->addSeparator();
        mMenuFile->addAction(mActionNewProjectFile);
        mMenuFile->addAction(mActionOpenProjectFile);
        mMenuFile->addAction(mActionEditProjectFile);
        mMenuFile->addAction(mActionCloseProjectFile);
        mMenuFile->addSeparator();
        mMenuFile->addAction(mActionProjectMRU);
        mMenuFile->addAction(mActionSave);
        mMenuFile->addSeparator();
        mMenuFile->addAction(mActionPrintPreview);
        mMenuFile->addAction(mActionPrint);
        mMenuFile->addSeparator();
        mMenuFile->addAction(mActionQuit);
        mMenuView->addAction(mMenuToolbars->menuAction());
        mMenuView->addSeparator();
        mMenuView->addAction(mActionShowErrors);
        mMenuView->addAction(mActionShowWarnings);
        mMenuView->addAction(mActionShowStyle);
        mMenuView->addAction(mActionShowPortability);
        mMenuView->addAction(mActionShowPerformance);
        mMenuView->addAction(mActionShowInformation);
        mMenuView->addAction(mActionCheckAll);
        mMenuView->addAction(mActionUncheckAll);
        mMenuView->addSeparator();
        mMenuView->addAction(mActionCollapseAll);
        mMenuView->addAction(mActionExpandAll);
        mMenuView->addSeparator();
        mMenuView->addAction(mActionShowHidden);
        mMenuView->addSeparator();
        mMenuView->addAction(mActionShowScratchpad);
        mMenuView->addAction(mActionViewLog);
        mMenuView->addAction(mActionViewStats);
        mMenuView->addAction(mActionLibraryEditor);
        mMenuToolbars->addAction(mActionToolBarMain);
        mMenuToolbars->addAction(mActionToolBarView);
        mMenuToolbars->addAction(mActionToolBarFilter);
        mMenuHelp->addAction(mActionHelpContents);
        mMenuHelp->addAction(mActionLicense);
        mMenuHelp->addAction(mActionAuthors);
        mMenuHelp->addSeparator();
        mMenuHelp->addAction(mActionAbout);
        mMenuCheck->addAction(mActionCheckFiles);
        mMenuCheck->addAction(mActionCheckDirectory);
        mMenuCheck->addAction(mActionRecheckModified);
        mMenuCheck->addAction(mActionRecheckAll);
        mMenuCheck->addAction(mActionStop);
        mMenuCheck->addSeparator();
        mMenuCheck->addAction(menuC_standard->menuAction());
        mMenuCheck->addAction(menuCpp_standard->menuAction());
        mMenuCheck->addAction(mActionPosix);
        mMenuCheck->addSeparator();
        mMenuCheck->addAction(mActionAutoDetectLanguage);
        mMenuCheck->addAction(mActionEnforceCpp);
        mMenuCheck->addAction(mActionEnforceC);
        mMenuCheck->addSeparator();
        mMenuCheck->addAction(mActionPlatforms);
        menuCpp_standard->addAction(mActionCpp03);
        menuCpp_standard->addAction(mActionCpp11);
        menuC_standard->addAction(mActionC89);
        menuC_standard->addAction(mActionC99);
        menuC_standard->addAction(mActionC11);
        mMenuEdit->addAction(mActionClearResults);
        mMenuEdit->addAction(mActionSettings);
        mToolBarMain->addAction(mActionCheckDirectory);
        mToolBarMain->addAction(mActionOpenProjectFile);
        mToolBarMain->addAction(mActionShowScratchpad);
        mToolBarMain->addAction(mActionSave);
        mToolBarMain->addAction(mActionRecheckModified);
        mToolBarMain->addAction(mActionRecheckAll);
        mToolBarMain->addAction(mActionStop);
        mToolBarMain->addAction(mActionClearResults);
        mToolBarMain->addAction(mActionSettings);
        mToolBarMain->addAction(mActionAbout);
        mToolBarView->addAction(mActionShowErrors);
        mToolBarView->addAction(mActionShowWarnings);
        mToolBarView->addAction(mActionShowStyle);
        mToolBarView->addAction(mActionShowPortability);
        mToolBarView->addAction(mActionShowPerformance);
        mToolBarView->addAction(mActionShowInformation);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Cppcheck", Q_NULLPTR));
        mActionLicense->setText(QApplication::translate("MainWindow", "&License...", Q_NULLPTR));
        mActionAuthors->setText(QApplication::translate("MainWindow", "A&uthors...", Q_NULLPTR));
        mActionAbout->setText(QApplication::translate("MainWindow", "&About...", Q_NULLPTR));
        mActionCheckFiles->setText(QApplication::translate("MainWindow", "&Files...", Q_NULLPTR));
        mActionCheckFiles->setIconText(QApplication::translate("MainWindow", "Check files", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionCheckFiles->setToolTip(QApplication::translate("MainWindow", "Check files", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionCheckFiles->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", Q_NULLPTR));
        mActionCheckDirectory->setText(QApplication::translate("MainWindow", "&Directory...", Q_NULLPTR));
        mActionCheckDirectory->setIconText(QApplication::translate("MainWindow", "Check directory", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionCheckDirectory->setToolTip(QApplication::translate("MainWindow", "Check directory", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionCheckDirectory->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", Q_NULLPTR));
        mActionRecheckModified->setText(QApplication::translate("MainWindow", "&Recheck modified files", Q_NULLPTR));
        mActionRecheckModified->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", Q_NULLPTR));
        mActionRecheckAll->setText(QApplication::translate("MainWindow", "&Recheck all files", Q_NULLPTR));
        mActionStop->setText(QApplication::translate("MainWindow", "&Stop", Q_NULLPTR));
        mActionStop->setIconText(QApplication::translate("MainWindow", "Stop checking", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionStop->setToolTip(QApplication::translate("MainWindow", "Stop checking", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionStop->setShortcut(QApplication::translate("MainWindow", "Esc", Q_NULLPTR));
        mActionSave->setText(QApplication::translate("MainWindow", "&Save results to file...", Q_NULLPTR));
        mActionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
        mActionQuit->setText(QApplication::translate("MainWindow", "&Quit", Q_NULLPTR));
        mActionClearResults->setText(QApplication::translate("MainWindow", "&Clear results", Q_NULLPTR));
        mActionSettings->setText(QApplication::translate("MainWindow", "&Preferences", Q_NULLPTR));
        mActionShowStyle->setText(QApplication::translate("MainWindow", "Style warnings", Q_NULLPTR));
        mActionShowStyle->setIconText(QApplication::translate("MainWindow", "Show style warnings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionShowStyle->setToolTip(QApplication::translate("MainWindow", "Show style warnings", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionShowErrors->setText(QApplication::translate("MainWindow", "Errors", Q_NULLPTR));
        mActionShowErrors->setIconText(QApplication::translate("MainWindow", "Show errors", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionShowErrors->setToolTip(QApplication::translate("MainWindow", "Show errors", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionCheckAll->setText(QApplication::translate("MainWindow", "&Check all", Q_NULLPTR));
        mActionUncheckAll->setText(QApplication::translate("MainWindow", "&Uncheck all", Q_NULLPTR));
        mActionCollapseAll->setText(QApplication::translate("MainWindow", "Collapse &all", Q_NULLPTR));
        mActionExpandAll->setText(QApplication::translate("MainWindow", "&Expand all", Q_NULLPTR));
        mActionToolBarMain->setText(QApplication::translate("MainWindow", "&Standard", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionToolBarMain->setToolTip(QApplication::translate("MainWindow", "Standard items", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionHelpContents->setText(QApplication::translate("MainWindow", "&Contents", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        mActionHelpContents->setStatusTip(QApplication::translate("MainWindow", "Open the help contents", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        mActionHelpContents->setShortcut(QApplication::translate("MainWindow", "F1", Q_NULLPTR));
        actionToolbar->setText(QApplication::translate("MainWindow", "Toolbar", Q_NULLPTR));
        mActionToolBarView->setText(QApplication::translate("MainWindow", "&Categories", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionToolBarView->setToolTip(QApplication::translate("MainWindow", "Error categories", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionOpenXML->setText(QApplication::translate("MainWindow", "&Open XML...", Q_NULLPTR));
        mActionOpenProjectFile->setText(QApplication::translate("MainWindow", "Open P&roject File...", Q_NULLPTR));
        mActionShowScratchpad->setText(QApplication::translate("MainWindow", "Show S&cratchpad...", Q_NULLPTR));
        mActionNewProjectFile->setText(QApplication::translate("MainWindow", "&New Project File...", Q_NULLPTR));
        mActionViewLog->setText(QApplication::translate("MainWindow", "&Log View", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionViewLog->setToolTip(QApplication::translate("MainWindow", "Log View", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionCloseProjectFile->setText(QApplication::translate("MainWindow", "C&lose Project File", Q_NULLPTR));
        mActionEditProjectFile->setText(QApplication::translate("MainWindow", "&Edit Project File...", Q_NULLPTR));
        mActionViewStats->setText(QApplication::translate("MainWindow", "&Statistics", Q_NULLPTR));
        mActionShowWarnings->setText(QApplication::translate("MainWindow", "Warnings", Q_NULLPTR));
        mActionShowWarnings->setIconText(QApplication::translate("MainWindow", "Show warnings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionShowWarnings->setToolTip(QApplication::translate("MainWindow", "Show warnings", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionShowPerformance->setText(QApplication::translate("MainWindow", "Performance warnings", Q_NULLPTR));
        mActionShowPerformance->setIconText(QApplication::translate("MainWindow", "Show performance warnings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionShowPerformance->setToolTip(QApplication::translate("MainWindow", "Show performance warnings", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionShowHidden->setText(QApplication::translate("MainWindow", "Show &hidden", Q_NULLPTR));
        mActionShowInformation->setText(QApplication::translate("MainWindow", "Information", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionShowInformation->setToolTip(QApplication::translate("MainWindow", "Show information messages", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionShowPortability->setText(QApplication::translate("MainWindow", "Portability", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionShowPortability->setToolTip(QApplication::translate("MainWindow", "Show portability warnings", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionToolBarFilter->setText(QApplication::translate("MainWindow", "&Filter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionToolBarFilter->setToolTip(QApplication::translate("MainWindow", "Filter results", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionPlatformWin32ANSI->setText(QApplication::translate("MainWindow", "Windows 32-bit ANSI", Q_NULLPTR));
        mActionPlatformWin32Unicode->setText(QApplication::translate("MainWindow", "Windows 32-bit Unicode", Q_NULLPTR));
        mActionPlatformUnix32Bit->setText(QApplication::translate("MainWindow", "Unix 32-bit", Q_NULLPTR));
        mActionPlatformUnix64Bit->setText(QApplication::translate("MainWindow", "Unix 64-bit", Q_NULLPTR));
        mActionPlatformWin64->setText(QApplication::translate("MainWindow", "Windows 64-bit", Q_NULLPTR));
        mActionPlatforms->setText(QApplication::translate("MainWindow", "Platforms", Q_NULLPTR));
        mActionCpp11->setText(QApplication::translate("MainWindow", "C++11", Q_NULLPTR));
        mActionC99->setText(QApplication::translate("MainWindow", "C99", Q_NULLPTR));
        mActionPosix->setText(QApplication::translate("MainWindow", "Posix", Q_NULLPTR));
        mActionC11->setText(QApplication::translate("MainWindow", "C11", Q_NULLPTR));
        mActionC89->setText(QApplication::translate("MainWindow", "C89", Q_NULLPTR));
        mActionCpp03->setText(QApplication::translate("MainWindow", "C++03", Q_NULLPTR));
        mActionPrint->setText(QApplication::translate("MainWindow", "&Print...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionPrint->setToolTip(QApplication::translate("MainWindow", "Print the Current Report", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionPrintPreview->setText(QApplication::translate("MainWindow", "Print Pre&view...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionPrintPreview->setToolTip(QApplication::translate("MainWindow", "Open a Print Preview Dialog for the Current Results", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionLibraryEditor->setText(QApplication::translate("MainWindow", "Library Editor...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionLibraryEditor->setToolTip(QApplication::translate("MainWindow", "Open library editor", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionAutoDetectLanguage->setText(QApplication::translate("MainWindow", "Auto-detect language", Q_NULLPTR));
        mActionEnforceCpp->setText(QApplication::translate("MainWindow", "Enforce C++", Q_NULLPTR));
        mActionEnforceC->setText(QApplication::translate("MainWindow", "Enforce C", Q_NULLPTR));
        mMenuFile->setTitle(QApplication::translate("MainWindow", "&File", Q_NULLPTR));
        mMenuView->setTitle(QApplication::translate("MainWindow", "&View", Q_NULLPTR));
        mMenuToolbars->setTitle(QApplication::translate("MainWindow", "&Toolbars", Q_NULLPTR));
        mMenuHelp->setTitle(QApplication::translate("MainWindow", "&Help", Q_NULLPTR));
        mMenuCheck->setTitle(QApplication::translate("MainWindow", "&Check", Q_NULLPTR));
        menuCpp_standard->setTitle(QApplication::translate("MainWindow", "C++ standard", Q_NULLPTR));
        menuC_standard->setTitle(QApplication::translate("MainWindow", "C standard", Q_NULLPTR));
        mMenuEdit->setTitle(QApplication::translate("MainWindow", "&Edit", Q_NULLPTR));
        mToolBarMain->setWindowTitle(QApplication::translate("MainWindow", "Standard", Q_NULLPTR));
        mToolBarView->setWindowTitle(QApplication::translate("MainWindow", "Categories", Q_NULLPTR));
        mToolBarFilter->setWindowTitle(QApplication::translate("MainWindow", "Filter", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
