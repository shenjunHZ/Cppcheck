/********************************************************************************
** Form generated from reading UI file 'resultsview.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTSVIEW_H
#define UI_RESULTSVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "resultstree.h"

QT_BEGIN_NAMESPACE

class Ui_ResultsView
{
public:
    QVBoxLayout *verticalLayout;
    QProgressBar *mProgress;
    QSplitter *mVerticalSplitter;
    ResultsTree *mTree;
    QTextEdit *mDetails;

    void setupUi(QWidget *ResultsView)
    {
        if (ResultsView->objectName().isEmpty())
            ResultsView->setObjectName(QStringLiteral("ResultsView"));
        ResultsView->resize(459, 357);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ResultsView->sizePolicy().hasHeightForWidth());
        ResultsView->setSizePolicy(sizePolicy);
        ResultsView->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(ResultsView);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mProgress = new QProgressBar(ResultsView);
        mProgress->setObjectName(QStringLiteral("mProgress"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mProgress->sizePolicy().hasHeightForWidth());
        mProgress->setSizePolicy(sizePolicy1);
        mProgress->setValue(24);

        verticalLayout->addWidget(mProgress);

        mVerticalSplitter = new QSplitter(ResultsView);
        mVerticalSplitter->setObjectName(QStringLiteral("mVerticalSplitter"));
        mVerticalSplitter->setOrientation(Qt::Vertical);
        mTree = new ResultsTree(mVerticalSplitter);
        mTree->setObjectName(QStringLiteral("mTree"));
        sizePolicy.setHeightForWidth(mTree->sizePolicy().hasHeightForWidth());
        mTree->setSizePolicy(sizePolicy);
        mTree->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mTree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mVerticalSplitter->addWidget(mTree);
        mDetails = new QTextEdit(mVerticalSplitter);
        mDetails->setObjectName(QStringLiteral("mDetails"));
        mDetails->setUndoRedoEnabled(false);
        mDetails->setReadOnly(true);
        mVerticalSplitter->addWidget(mDetails);

        verticalLayout->addWidget(mVerticalSplitter);

        QWidget::setTabOrder(mTree, mDetails);

        retranslateUi(ResultsView);

        QMetaObject::connectSlotsByName(ResultsView);
    } // setupUi

    void retranslateUi(QWidget *ResultsView)
    {
        ResultsView->setWindowTitle(QApplication::translate("ResultsView", "Results", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ResultsView: public Ui_ResultsView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTSVIEW_H
