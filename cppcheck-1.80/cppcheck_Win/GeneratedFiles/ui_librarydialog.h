/********************************************************************************
** Form generated from reading UI file 'librarydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARYDIALOG_H
#define UI_LIBRARYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LibraryDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buttonOpen;
    QPushButton *buttonSave;
    QPushButton *buttonSaveAs;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *sortFunctions;
    QSpacerItem *horizontalSpacer_4;
    QListWidget *functions;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addFunction;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QLineEdit *filter;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    QPlainTextEdit *comments;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QComboBox *noreturn;
    QCheckBox *useretval;
    QCheckBox *leakignore;
    QLabel *label_3;
    QListWidget *arguments;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *editArgButton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *LibraryDialog)
    {
        if (LibraryDialog->objectName().isEmpty())
            LibraryDialog->setObjectName(QStringLiteral("LibraryDialog"));
        LibraryDialog->resize(869, 588);
        verticalLayout_3 = new QVBoxLayout(LibraryDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        buttonOpen = new QPushButton(LibraryDialog);
        buttonOpen->setObjectName(QStringLiteral("buttonOpen"));

        horizontalLayout_2->addWidget(buttonOpen);

        buttonSave = new QPushButton(LibraryDialog);
        buttonSave->setObjectName(QStringLiteral("buttonSave"));

        horizontalLayout_2->addWidget(buttonSave);

        buttonSaveAs = new QPushButton(LibraryDialog);
        buttonSaveAs->setObjectName(QStringLiteral("buttonSaveAs"));

        horizontalLayout_2->addWidget(buttonSaveAs);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(LibraryDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        sortFunctions = new QPushButton(LibraryDialog);
        sortFunctions->setObjectName(QStringLiteral("sortFunctions"));
        sortFunctions->setCheckable(true);
        sortFunctions->setChecked(false);

        horizontalLayout_6->addWidget(sortFunctions);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_6);

        functions = new QListWidget(LibraryDialog);
        functions->setObjectName(QStringLiteral("functions"));
        functions->setEditTriggers(QAbstractItemView::DoubleClicked);
        functions->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(functions);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        addFunction = new QPushButton(LibraryDialog);
        addFunction->setObjectName(QStringLiteral("addFunction"));

        horizontalLayout_3->addWidget(addFunction);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_4 = new QLabel(LibraryDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        filter = new QLineEdit(LibraryDialog);
        filter->setObjectName(QStringLiteral("filter"));

        horizontalLayout_3->addWidget(filter);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(LibraryDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 32));
        widget->setMaximumSize(QSize(16777215, 80));
        horizontalLayout_7 = new QHBoxLayout(widget);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_4->addWidget(label_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_7->addLayout(verticalLayout_4);

        comments = new QPlainTextEdit(widget);
        comments->setObjectName(QStringLiteral("comments"));
        comments->setLineWrapMode(QPlainTextEdit::NoWrap);

        horizontalLayout_7->addWidget(comments);


        verticalLayout_2->addWidget(widget);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(LibraryDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(label);

        noreturn = new QComboBox(LibraryDialog);
        noreturn->setObjectName(QStringLiteral("noreturn"));

        horizontalLayout_5->addWidget(noreturn);


        verticalLayout_2->addLayout(horizontalLayout_5);

        useretval = new QCheckBox(LibraryDialog);
        useretval->setObjectName(QStringLiteral("useretval"));

        verticalLayout_2->addWidget(useretval);

        leakignore = new QCheckBox(LibraryDialog);
        leakignore->setObjectName(QStringLiteral("leakignore"));

        verticalLayout_2->addWidget(leakignore);

        label_3 = new QLabel(LibraryDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        arguments = new QListWidget(LibraryDialog);
        arguments->setObjectName(QStringLiteral("arguments"));

        verticalLayout_2->addWidget(arguments);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        editArgButton = new QPushButton(LibraryDialog);
        editArgButton->setObjectName(QStringLiteral("editArgButton"));

        horizontalLayout_4->addWidget(editArgButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(LibraryDialog);
        QObject::connect(buttonOpen, SIGNAL(clicked()), LibraryDialog, SLOT(openCfg()));
        QObject::connect(useretval, SIGNAL(clicked()), LibraryDialog, SLOT(changeFunction()));
        QObject::connect(leakignore, SIGNAL(clicked()), LibraryDialog, SLOT(changeFunction()));
        QObject::connect(buttonSave, SIGNAL(clicked()), LibraryDialog, SLOT(saveCfg()));
        QObject::connect(addFunction, SIGNAL(clicked()), LibraryDialog, SLOT(addFunction()));
        QObject::connect(editArgButton, SIGNAL(clicked()), LibraryDialog, SLOT(editArg()));
        QObject::connect(arguments, SIGNAL(itemDoubleClicked(QListWidgetItem*)), LibraryDialog, SLOT(editArg()));
        QObject::connect(sortFunctions, SIGNAL(toggled(bool)), LibraryDialog, SLOT(sortFunctions(bool)));
        QObject::connect(filter, SIGNAL(textChanged(QString)), LibraryDialog, SLOT(filterFunctions(QString)));
        QObject::connect(functions, SIGNAL(itemSelectionChanged()), LibraryDialog, SLOT(selectFunction()));
        QObject::connect(noreturn, SIGNAL(currentIndexChanged(int)), LibraryDialog, SLOT(changeFunction()));
        QObject::connect(functions, SIGNAL(itemChanged(QListWidgetItem*)), LibraryDialog, SLOT(editFunctionName(QListWidgetItem*)));
        QObject::connect(noreturn, SIGNAL(editTextChanged(QString)), LibraryDialog, SLOT(changeFunction()));
        QObject::connect(comments, SIGNAL(textChanged()), LibraryDialog, SLOT(changeFunction()));
        QObject::connect(buttonSaveAs, SIGNAL(clicked()), LibraryDialog, SLOT(saveCfgAs()));

        QMetaObject::connectSlotsByName(LibraryDialog);
    } // setupUi

    void retranslateUi(QDialog *LibraryDialog)
    {
        LibraryDialog->setWindowTitle(QApplication::translate("LibraryDialog", "Library Editor", Q_NULLPTR));
        buttonOpen->setText(QApplication::translate("LibraryDialog", "Open", Q_NULLPTR));
        buttonSave->setText(QApplication::translate("LibraryDialog", "Save", Q_NULLPTR));
        buttonSaveAs->setText(QApplication::translate("LibraryDialog", "Save as", Q_NULLPTR));
        label_2->setText(QApplication::translate("LibraryDialog", "Functions", Q_NULLPTR));
        sortFunctions->setText(QApplication::translate("LibraryDialog", "Sort", Q_NULLPTR));
        addFunction->setText(QApplication::translate("LibraryDialog", "Add", Q_NULLPTR));
        label_4->setText(QApplication::translate("LibraryDialog", "Filter:", Q_NULLPTR));
        label_5->setText(QApplication::translate("LibraryDialog", "Comments", Q_NULLPTR));
        label->setText(QApplication::translate("LibraryDialog", "noreturn", Q_NULLPTR));
        noreturn->clear();
        noreturn->insertItems(0, QStringList()
         << QApplication::translate("LibraryDialog", "False", Q_NULLPTR)
         << QApplication::translate("LibraryDialog", "True", Q_NULLPTR)
         << QApplication::translate("LibraryDialog", "Unknown", Q_NULLPTR)
        );
        useretval->setText(QApplication::translate("LibraryDialog", "return value must be used", Q_NULLPTR));
        leakignore->setText(QApplication::translate("LibraryDialog", "ignore function in leaks checking", Q_NULLPTR));
        label_3->setText(QApplication::translate("LibraryDialog", "Arguments", Q_NULLPTR));
        editArgButton->setText(QApplication::translate("LibraryDialog", "Edit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LibraryDialog: public Ui_LibraryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARYDIALOG_H
