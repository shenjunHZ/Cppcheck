/********************************************************************************
** Form generated from reading UI file 'logview.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGVIEW_H
#define UI_LOGVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogView
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *mLogEdit;
    QDialogButtonBox *mButtonBox;

    void setupUi(QWidget *LogView)
    {
        if (LogView->objectName().isEmpty())
            LogView->setObjectName(QStringLiteral("LogView"));
        LogView->resize(400, 300);
        LogView->setContextMenuPolicy(Qt::NoContextMenu);
        verticalLayout = new QVBoxLayout(LogView);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mLogEdit = new QPlainTextEdit(LogView);
        mLogEdit->setObjectName(QStringLiteral("mLogEdit"));
        mLogEdit->setUndoRedoEnabled(false);
        mLogEdit->setReadOnly(true);

        verticalLayout->addWidget(mLogEdit);

        mButtonBox = new QDialogButtonBox(LogView);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset|QDialogButtonBox::Save);

        verticalLayout->addWidget(mButtonBox);


        retranslateUi(LogView);

        QMetaObject::connectSlotsByName(LogView);
    } // setupUi

    void retranslateUi(QWidget *LogView)
    {
        LogView->setWindowTitle(QApplication::translate("LogView", "Checking Log", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LogView: public Ui_LogView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGVIEW_H
