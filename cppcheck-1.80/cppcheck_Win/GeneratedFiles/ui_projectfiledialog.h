/********************************************************************************
** Form generated from reading UI file 'projectfiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTFILEDIALOG_H
#define UI_PROJECTFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
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

class Ui_ProjectFile
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *mTabProject;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QLabel *mLabelProjectRoot;
    QLineEdit *mEditProjectRoot;
    QVBoxLayout *verticalLayout_2;
    QLabel *mLabelBuildDir;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *mEditBuildDir;
    QPushButton *mBtnBrowseBuildDir;
    QHBoxLayout *mLayoutLibraries;
    QLabel *mLabelLibraries;
    QLabel *mLabelLibrariesNote;
    QSpacerItem *verticalSpacer_9;
    QWidget *mTabOther;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_3;
    QLabel *mLabelImport;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mEditImportProject;
    QPushButton *mBtnClearImportProject;
    QPushButton *mBtnBrowseImportProject;
    QFrame *line;
    QHBoxLayout *mLayoutCheckPaths;
    QVBoxLayout *verticalLayout_5;
    QLabel *mLabelCheckPaths;
    QSpacerItem *verticalSpacer_2;
    QListWidget *mListCheckPaths;
    QVBoxLayout *mLayoutCheckPathsButtons;
    QPushButton *mBtnAddCheckPath;
    QPushButton *mBtnEditCheckPath;
    QPushButton *mBtnRemoveCheckPath;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *mLayoutDefines;
    QLabel *mLabelDefines;
    QLineEdit *mEditDefines;
    QHBoxLayout *mLayoutIncludePaths;
    QVBoxLayout *verticalLayout_11;
    QLabel *mLabelIncludePaths;
    QSpacerItem *verticalSpacer_6;
    QListWidget *mListIncludeDirs;
    QVBoxLayout *mLayoutIncludePathsButtons;
    QPushButton *mBtnAddInclude;
    QPushButton *mBtnEditInclude;
    QPushButton *mBtnRemoveInclude;
    QSpacerItem *verticalSpacer;
    QPushButton *mBtnIncludeUp;
    QPushButton *mBtnIncludeDown;
    QSpacerItem *verticalSpacer_8;
    QWidget *mTabExclude;
    QVBoxLayout *verticalLayout_9;
    QLabel *labelExcludePaths;
    QHBoxLayout *layoutExcludePaths;
    QListWidget *mListExcludedPaths;
    QVBoxLayout *layoutExcludePathButtons;
    QPushButton *mBtnAddIgnorePath;
    QPushButton *mBtnEditIgnorePath;
    QPushButton *mBtnRemoveIgnorePath;
    QSpacerItem *verticalSpacer_4;
    QWidget *tabSuppressions;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelSuppressions;
    QListWidget *mListSuppressions;
    QHBoxLayout *layoutSuppressionButtons;
    QSpacerItem *horizontalSpacer;
    QPushButton *mBtnAddSuppression;
    QPushButton *mBtnRemoveSuppression;
    QDialogButtonBox *mButtons;

    void setupUi(QDialog *ProjectFile)
    {
        if (ProjectFile->objectName().isEmpty())
            ProjectFile->setObjectName(QStringLiteral("ProjectFile"));
        ProjectFile->resize(642, 498);
        verticalLayout = new QVBoxLayout(ProjectFile);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(ProjectFile);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        mTabProject = new QWidget();
        mTabProject->setObjectName(QStringLiteral("mTabProject"));
        verticalLayout_7 = new QVBoxLayout(mTabProject);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        mLabelProjectRoot = new QLabel(mTabProject);
        mLabelProjectRoot->setObjectName(QStringLiteral("mLabelProjectRoot"));

        verticalLayout_4->addWidget(mLabelProjectRoot);

        mEditProjectRoot = new QLineEdit(mTabProject);
        mEditProjectRoot->setObjectName(QStringLiteral("mEditProjectRoot"));

        verticalLayout_4->addWidget(mEditProjectRoot);


        verticalLayout_7->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mLabelBuildDir = new QLabel(mTabProject);
        mLabelBuildDir->setObjectName(QStringLiteral("mLabelBuildDir"));

        verticalLayout_2->addWidget(mLabelBuildDir);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mEditBuildDir = new QLineEdit(mTabProject);
        mEditBuildDir->setObjectName(QStringLiteral("mEditBuildDir"));

        horizontalLayout_2->addWidget(mEditBuildDir);

        mBtnBrowseBuildDir = new QPushButton(mTabProject);
        mBtnBrowseBuildDir->setObjectName(QStringLiteral("mBtnBrowseBuildDir"));

        horizontalLayout_2->addWidget(mBtnBrowseBuildDir);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_7->addLayout(verticalLayout_2);

        mLayoutLibraries = new QHBoxLayout();
        mLayoutLibraries->setObjectName(QStringLiteral("mLayoutLibraries"));
        mLabelLibraries = new QLabel(mTabProject);
        mLabelLibraries->setObjectName(QStringLiteral("mLabelLibraries"));

        mLayoutLibraries->addWidget(mLabelLibraries);


        verticalLayout_7->addLayout(mLayoutLibraries);

        mLabelLibrariesNote = new QLabel(mTabProject);
        mLabelLibrariesNote->setObjectName(QStringLiteral("mLabelLibrariesNote"));
        mLabelLibrariesNote->setWordWrap(true);

        verticalLayout_7->addWidget(mLabelLibrariesNote);

        verticalSpacer_9 = new QSpacerItem(20, 96, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_9);

        tabWidget->addTab(mTabProject, QString());
        mTabOther = new QWidget();
        mTabOther->setObjectName(QStringLiteral("mTabOther"));
        verticalLayout_8 = new QVBoxLayout(mTabOther);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        mLabelImport = new QLabel(mTabOther);
        mLabelImport->setObjectName(QStringLiteral("mLabelImport"));

        verticalLayout_3->addWidget(mLabelImport);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mEditImportProject = new QLineEdit(mTabOther);
        mEditImportProject->setObjectName(QStringLiteral("mEditImportProject"));
        mEditImportProject->setReadOnly(true);

        horizontalLayout->addWidget(mEditImportProject);

        mBtnClearImportProject = new QPushButton(mTabOther);
        mBtnClearImportProject->setObjectName(QStringLiteral("mBtnClearImportProject"));
        mBtnClearImportProject->setEnabled(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/edit-clear.png"), QSize(), QIcon::Active, QIcon::On);
        mBtnClearImportProject->setIcon(icon);

        horizontalLayout->addWidget(mBtnClearImportProject);

        mBtnBrowseImportProject = new QPushButton(mTabOther);
        mBtnBrowseImportProject->setObjectName(QStringLiteral("mBtnBrowseImportProject"));

        horizontalLayout->addWidget(mBtnBrowseImportProject);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_8->addLayout(verticalLayout_3);

        line = new QFrame(mTabOther);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_8->addWidget(line);

        mLayoutCheckPaths = new QHBoxLayout();
        mLayoutCheckPaths->setObjectName(QStringLiteral("mLayoutCheckPaths"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        mLabelCheckPaths = new QLabel(mTabOther);
        mLabelCheckPaths->setObjectName(QStringLiteral("mLabelCheckPaths"));

        verticalLayout_5->addWidget(mLabelCheckPaths);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        mLayoutCheckPaths->addLayout(verticalLayout_5);

        mListCheckPaths = new QListWidget(mTabOther);
        mListCheckPaths->setObjectName(QStringLiteral("mListCheckPaths"));

        mLayoutCheckPaths->addWidget(mListCheckPaths);

        mLayoutCheckPathsButtons = new QVBoxLayout();
        mLayoutCheckPathsButtons->setObjectName(QStringLiteral("mLayoutCheckPathsButtons"));
        mBtnAddCheckPath = new QPushButton(mTabOther);
        mBtnAddCheckPath->setObjectName(QStringLiteral("mBtnAddCheckPath"));

        mLayoutCheckPathsButtons->addWidget(mBtnAddCheckPath);

        mBtnEditCheckPath = new QPushButton(mTabOther);
        mBtnEditCheckPath->setObjectName(QStringLiteral("mBtnEditCheckPath"));

        mLayoutCheckPathsButtons->addWidget(mBtnEditCheckPath);

        mBtnRemoveCheckPath = new QPushButton(mTabOther);
        mBtnRemoveCheckPath->setObjectName(QStringLiteral("mBtnRemoveCheckPath"));

        mLayoutCheckPathsButtons->addWidget(mBtnRemoveCheckPath);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mLayoutCheckPathsButtons->addItem(verticalSpacer_3);


        mLayoutCheckPaths->addLayout(mLayoutCheckPathsButtons);


        verticalLayout_8->addLayout(mLayoutCheckPaths);

        mLayoutDefines = new QHBoxLayout();
        mLayoutDefines->setObjectName(QStringLiteral("mLayoutDefines"));
        mLabelDefines = new QLabel(mTabOther);
        mLabelDefines->setObjectName(QStringLiteral("mLabelDefines"));

        mLayoutDefines->addWidget(mLabelDefines);

        mEditDefines = new QLineEdit(mTabOther);
        mEditDefines->setObjectName(QStringLiteral("mEditDefines"));

        mLayoutDefines->addWidget(mEditDefines);


        verticalLayout_8->addLayout(mLayoutDefines);

        mLayoutIncludePaths = new QHBoxLayout();
        mLayoutIncludePaths->setObjectName(QStringLiteral("mLayoutIncludePaths"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        mLabelIncludePaths = new QLabel(mTabOther);
        mLabelIncludePaths->setObjectName(QStringLiteral("mLabelIncludePaths"));

        verticalLayout_11->addWidget(mLabelIncludePaths);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_6);


        mLayoutIncludePaths->addLayout(verticalLayout_11);

        mListIncludeDirs = new QListWidget(mTabOther);
        mListIncludeDirs->setObjectName(QStringLiteral("mListIncludeDirs"));
        mListIncludeDirs->setSelectionBehavior(QAbstractItemView::SelectRows);

        mLayoutIncludePaths->addWidget(mListIncludeDirs);

        mLayoutIncludePathsButtons = new QVBoxLayout();
        mLayoutIncludePathsButtons->setObjectName(QStringLiteral("mLayoutIncludePathsButtons"));
        mBtnAddInclude = new QPushButton(mTabOther);
        mBtnAddInclude->setObjectName(QStringLiteral("mBtnAddInclude"));

        mLayoutIncludePathsButtons->addWidget(mBtnAddInclude);

        mBtnEditInclude = new QPushButton(mTabOther);
        mBtnEditInclude->setObjectName(QStringLiteral("mBtnEditInclude"));

        mLayoutIncludePathsButtons->addWidget(mBtnEditInclude);

        mBtnRemoveInclude = new QPushButton(mTabOther);
        mBtnRemoveInclude->setObjectName(QStringLiteral("mBtnRemoveInclude"));

        mLayoutIncludePathsButtons->addWidget(mBtnRemoveInclude);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mLayoutIncludePathsButtons->addItem(verticalSpacer);

        mBtnIncludeUp = new QPushButton(mTabOther);
        mBtnIncludeUp->setObjectName(QStringLiteral("mBtnIncludeUp"));

        mLayoutIncludePathsButtons->addWidget(mBtnIncludeUp);

        mBtnIncludeDown = new QPushButton(mTabOther);
        mBtnIncludeDown->setObjectName(QStringLiteral("mBtnIncludeDown"));

        mLayoutIncludePathsButtons->addWidget(mBtnIncludeDown);


        mLayoutIncludePaths->addLayout(mLayoutIncludePathsButtons);


        verticalLayout_8->addLayout(mLayoutIncludePaths);

        verticalSpacer_8 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_8);

        tabWidget->addTab(mTabOther, QString());
        mTabExclude = new QWidget();
        mTabExclude->setObjectName(QStringLiteral("mTabExclude"));
        verticalLayout_9 = new QVBoxLayout(mTabExclude);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        labelExcludePaths = new QLabel(mTabExclude);
        labelExcludePaths->setObjectName(QStringLiteral("labelExcludePaths"));

        verticalLayout_9->addWidget(labelExcludePaths);

        layoutExcludePaths = new QHBoxLayout();
        layoutExcludePaths->setObjectName(QStringLiteral("layoutExcludePaths"));
        mListExcludedPaths = new QListWidget(mTabExclude);
        mListExcludedPaths->setObjectName(QStringLiteral("mListExcludedPaths"));

        layoutExcludePaths->addWidget(mListExcludedPaths);

        layoutExcludePathButtons = new QVBoxLayout();
        layoutExcludePathButtons->setObjectName(QStringLiteral("layoutExcludePathButtons"));
        mBtnAddIgnorePath = new QPushButton(mTabExclude);
        mBtnAddIgnorePath->setObjectName(QStringLiteral("mBtnAddIgnorePath"));

        layoutExcludePathButtons->addWidget(mBtnAddIgnorePath);

        mBtnEditIgnorePath = new QPushButton(mTabExclude);
        mBtnEditIgnorePath->setObjectName(QStringLiteral("mBtnEditIgnorePath"));

        layoutExcludePathButtons->addWidget(mBtnEditIgnorePath);

        mBtnRemoveIgnorePath = new QPushButton(mTabExclude);
        mBtnRemoveIgnorePath->setObjectName(QStringLiteral("mBtnRemoveIgnorePath"));

        layoutExcludePathButtons->addWidget(mBtnRemoveIgnorePath);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutExcludePathButtons->addItem(verticalSpacer_4);


        layoutExcludePaths->addLayout(layoutExcludePathButtons);


        verticalLayout_9->addLayout(layoutExcludePaths);

        tabWidget->addTab(mTabExclude, QString());
        tabSuppressions = new QWidget();
        tabSuppressions->setObjectName(QStringLiteral("tabSuppressions"));
        verticalLayout_6 = new QVBoxLayout(tabSuppressions);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        labelSuppressions = new QLabel(tabSuppressions);
        labelSuppressions->setObjectName(QStringLiteral("labelSuppressions"));

        verticalLayout_6->addWidget(labelSuppressions);

        mListSuppressions = new QListWidget(tabSuppressions);
        mListSuppressions->setObjectName(QStringLiteral("mListSuppressions"));

        verticalLayout_6->addWidget(mListSuppressions);

        layoutSuppressionButtons = new QHBoxLayout();
        layoutSuppressionButtons->setObjectName(QStringLiteral("layoutSuppressionButtons"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutSuppressionButtons->addItem(horizontalSpacer);

        mBtnAddSuppression = new QPushButton(tabSuppressions);
        mBtnAddSuppression->setObjectName(QStringLiteral("mBtnAddSuppression"));

        layoutSuppressionButtons->addWidget(mBtnAddSuppression);

        mBtnRemoveSuppression = new QPushButton(tabSuppressions);
        mBtnRemoveSuppression->setObjectName(QStringLiteral("mBtnRemoveSuppression"));

        layoutSuppressionButtons->addWidget(mBtnRemoveSuppression);


        verticalLayout_6->addLayout(layoutSuppressionButtons);

        tabWidget->addTab(tabSuppressions, QString());

        verticalLayout->addWidget(tabWidget);

        mButtons = new QDialogButtonBox(ProjectFile);
        mButtons->setObjectName(QStringLiteral("mButtons"));
        mButtons->setOrientation(Qt::Horizontal);
        mButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(mButtons);

#ifndef QT_NO_SHORTCUT
        mLabelProjectRoot->setBuddy(mEditProjectRoot);
        mLabelDefines->setBuddy(mEditDefines);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mButtons, mEditProjectRoot);
        QWidget::setTabOrder(mEditProjectRoot, mListExcludedPaths);
        QWidget::setTabOrder(mListExcludedPaths, mBtnAddIgnorePath);
        QWidget::setTabOrder(mBtnAddIgnorePath, mBtnEditIgnorePath);
        QWidget::setTabOrder(mBtnEditIgnorePath, mBtnRemoveIgnorePath);

        retranslateUi(ProjectFile);
        QObject::connect(mButtons, SIGNAL(accepted()), ProjectFile, SLOT(accept()));
        QObject::connect(mButtons, SIGNAL(rejected()), ProjectFile, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ProjectFile);
    } // setupUi

    void retranslateUi(QDialog *ProjectFile)
    {
        ProjectFile->setWindowTitle(QApplication::translate("ProjectFile", "Project File", Q_NULLPTR));
        mLabelProjectRoot->setText(QApplication::translate("ProjectFile", "&Root:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLabelBuildDir->setToolTip(QApplication::translate("ProjectFile", "<html><head/><body><p>In the build dir, cppcheck stores data about each translation unit.</p><p>With a build dir you get whole program analysis.</p><p>Unchanged files will be analyzed much faster; Cppcheck skip the analysis of these files and reuse their old data.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLabelBuildDir->setText(QApplication::translate("ProjectFile", "Cppcheck build dir (whole program analysis, faster analysis for unchanged files)", Q_NULLPTR));
        mBtnBrowseBuildDir->setText(QApplication::translate("ProjectFile", "...", Q_NULLPTR));
        mLabelLibraries->setText(QApplication::translate("ProjectFile", "Libraries:", Q_NULLPTR));
        mLabelLibrariesNote->setText(QApplication::translate("ProjectFile", "Note: Put your own custom .cfg files in the same folder as the project file. You should see them above.", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(mTabProject), QApplication::translate("ProjectFile", "Project", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLabelImport->setToolTip(QApplication::translate("ProjectFile", "<html><head/><body><p>Cppcheck can import Visual studio solutions (*.sln), Visual studio projects (*.vcxproj) or compile databases.</p><p>Files to check, defines, include paths are imported.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLabelImport->setText(QApplication::translate("ProjectFile", "Import Project (Visual studio / compile database)", Q_NULLPTR));
        mBtnClearImportProject->setText(QString());
        mBtnBrowseImportProject->setText(QApplication::translate("ProjectFile", "...", Q_NULLPTR));
        mLabelCheckPaths->setText(QApplication::translate("ProjectFile", "Paths:", Q_NULLPTR));
        mBtnAddCheckPath->setText(QApplication::translate("ProjectFile", "Add...", Q_NULLPTR));
        mBtnEditCheckPath->setText(QApplication::translate("ProjectFile", "Edit", Q_NULLPTR));
        mBtnRemoveCheckPath->setText(QApplication::translate("ProjectFile", "Remove", Q_NULLPTR));
        mLabelDefines->setText(QApplication::translate("ProjectFile", "Defines:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mEditDefines->setToolTip(QApplication::translate("ProjectFile", "Defines must be separated by a semicolon ';'", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLabelIncludePaths->setText(QApplication::translate("ProjectFile", "Include Paths:", Q_NULLPTR));
        mBtnAddInclude->setText(QApplication::translate("ProjectFile", "Add...", Q_NULLPTR));
        mBtnEditInclude->setText(QApplication::translate("ProjectFile", "Edit", Q_NULLPTR));
        mBtnRemoveInclude->setText(QApplication::translate("ProjectFile", "Remove", Q_NULLPTR));
        mBtnIncludeUp->setText(QApplication::translate("ProjectFile", "Up", Q_NULLPTR));
        mBtnIncludeDown->setText(QApplication::translate("ProjectFile", "Down", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(mTabOther), QApplication::translate("ProjectFile", "Paths and Defines", Q_NULLPTR));
        labelExcludePaths->setText(QApplication::translate("ProjectFile", "Paths:", Q_NULLPTR));
        mBtnAddIgnorePath->setText(QApplication::translate("ProjectFile", "Add...", Q_NULLPTR));
        mBtnEditIgnorePath->setText(QApplication::translate("ProjectFile", "Edit", Q_NULLPTR));
        mBtnRemoveIgnorePath->setText(QApplication::translate("ProjectFile", "Remove", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(mTabExclude), QApplication::translate("ProjectFile", "Exclude", Q_NULLPTR));
        labelSuppressions->setText(QApplication::translate("ProjectFile", "Suppression list:", Q_NULLPTR));
        mBtnAddSuppression->setText(QApplication::translate("ProjectFile", "Add", Q_NULLPTR));
        mBtnRemoveSuppression->setText(QApplication::translate("ProjectFile", "Remove", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabSuppressions), QApplication::translate("ProjectFile", "Suppressions", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ProjectFile: public Ui_ProjectFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTFILEDIALOG_H
