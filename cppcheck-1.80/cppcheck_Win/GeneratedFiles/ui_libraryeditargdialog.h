/********************************************************************************
** Form generated from reading UI file 'libraryeditargdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARYEDITARGDIALOG_H
#define UI_LIBRARYEDITARGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LibraryEditArgDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QCheckBox *notbool;
    QCheckBox *notnull;
    QCheckBox *notuninit;
    QCheckBox *strz;
    QCheckBox *formatstr;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QComboBox *minsize1type;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *minsize1arg;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QSpinBox *minsize1arg2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *andlabel;
    QGridLayout *gridLayout;
    QLabel *minsize2label1;
    QComboBox *minsize2type;
    QLabel *minsize2label2;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *minsize2arg;
    QSpacerItem *horizontalSpacer_4;
    QLabel *minsize2label3;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *minsize2arg2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *valid;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LibraryEditArgDialog)
    {
        if (LibraryEditArgDialog->objectName().isEmpty())
            LibraryEditArgDialog->setObjectName(QStringLiteral("LibraryEditArgDialog"));
        LibraryEditArgDialog->resize(448, 465);
        verticalLayout_3 = new QVBoxLayout(LibraryEditArgDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        notbool = new QCheckBox(LibraryEditArgDialog);
        notbool->setObjectName(QStringLiteral("notbool"));

        verticalLayout_3->addWidget(notbool);

        notnull = new QCheckBox(LibraryEditArgDialog);
        notnull->setObjectName(QStringLiteral("notnull"));

        verticalLayout_3->addWidget(notnull);

        notuninit = new QCheckBox(LibraryEditArgDialog);
        notuninit->setObjectName(QStringLiteral("notuninit"));

        verticalLayout_3->addWidget(notuninit);

        strz = new QCheckBox(LibraryEditArgDialog);
        strz->setObjectName(QStringLiteral("strz"));

        verticalLayout_3->addWidget(strz);

        formatstr = new QCheckBox(LibraryEditArgDialog);
        formatstr->setObjectName(QStringLiteral("formatstr"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(formatstr->sizePolicy().hasHeightForWidth());
        formatstr->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(formatstr);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(LibraryEditArgDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(LibraryEditArgDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        minsize1type = new QComboBox(LibraryEditArgDialog);
        minsize1type->setObjectName(QStringLiteral("minsize1type"));

        gridLayout_2->addWidget(minsize1type, 0, 1, 1, 1);

        label_4 = new QLabel(LibraryEditArgDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        minsize1arg = new QSpinBox(LibraryEditArgDialog);
        minsize1arg->setObjectName(QStringLiteral("minsize1arg"));

        horizontalLayout_3->addWidget(minsize1arg);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        label_5 = new QLabel(LibraryEditArgDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        minsize1arg2 = new QSpinBox(LibraryEditArgDialog);
        minsize1arg2->setObjectName(QStringLiteral("minsize1arg2"));

        horizontalLayout->addWidget(minsize1arg2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        andlabel = new QLabel(LibraryEditArgDialog);
        andlabel->setObjectName(QStringLiteral("andlabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(andlabel->sizePolicy().hasHeightForWidth());
        andlabel->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(andlabel);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        minsize2label1 = new QLabel(LibraryEditArgDialog);
        minsize2label1->setObjectName(QStringLiteral("minsize2label1"));

        gridLayout->addWidget(minsize2label1, 0, 0, 1, 1);

        minsize2type = new QComboBox(LibraryEditArgDialog);
        minsize2type->setObjectName(QStringLiteral("minsize2type"));
        minsize2type->setEnabled(true);

        gridLayout->addWidget(minsize2type, 0, 1, 1, 1);

        minsize2label2 = new QLabel(LibraryEditArgDialog);
        minsize2label2->setObjectName(QStringLiteral("minsize2label2"));

        gridLayout->addWidget(minsize2label2, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        minsize2arg = new QSpinBox(LibraryEditArgDialog);
        minsize2arg->setObjectName(QStringLiteral("minsize2arg"));

        horizontalLayout_5->addWidget(minsize2arg);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_5, 1, 1, 1, 1);

        minsize2label3 = new QLabel(LibraryEditArgDialog);
        minsize2label3->setObjectName(QStringLiteral("minsize2label3"));

        gridLayout->addWidget(minsize2label3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        minsize2arg2 = new QSpinBox(LibraryEditArgDialog);
        minsize2arg2->setObjectName(QStringLiteral("minsize2arg2"));

        horizontalLayout_4->addWidget(minsize2arg2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_4, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_3->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(LibraryEditArgDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        valid = new QLineEdit(LibraryEditArgDialog);
        valid->setObjectName(QStringLiteral("valid"));

        horizontalLayout_2->addWidget(valid);


        verticalLayout_3->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(LibraryEditArgDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(LibraryEditArgDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LibraryEditArgDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LibraryEditArgDialog, SLOT(reject()));
        QObject::connect(minsize1type, SIGNAL(currentIndexChanged(int)), LibraryEditArgDialog, SLOT(minsizeChanged(int)));
        QObject::connect(minsize2type, SIGNAL(currentIndexChanged(int)), LibraryEditArgDialog, SLOT(minsizeChanged(int)));

        QMetaObject::connectSlotsByName(LibraryEditArgDialog);
    } // setupUi

    void retranslateUi(QDialog *LibraryEditArgDialog)
    {
        LibraryEditArgDialog->setWindowTitle(QApplication::translate("LibraryEditArgDialog", "Edit argument", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        notbool->setToolTip(QApplication::translate("LibraryEditArgDialog", "<html><head/><body>\n"
"<p>Is bool value allowed? For instance result from comparison or from '!' operator.</p>\n"
"<p>Typically, set this if the argument is a pointer, size, etc.</p>\n"
"<p>Example:</p>\n"
"<pre>    memcmp(x, y, i == 123);   // last argument should not have a bool value</pre>\n"
"</body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        notbool->setText(QApplication::translate("LibraryEditArgDialog", "Not bool", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        notnull->setToolTip(QApplication::translate("LibraryEditArgDialog", "<html><head/><body>\n"
"<p>Is a null parameter value allowed?</p>\n"
"<p>Typically this should be used on any pointer parameter that does not allow null.</p>\n"
"<p>Example:</p>\n"
"<pre>    strcpy(x,y); // neither x or y is allowed to be null.</pre>\n"
"</body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        notnull->setText(QApplication::translate("LibraryEditArgDialog", "Not null", Q_NULLPTR));
        notuninit->setText(QApplication::translate("LibraryEditArgDialog", "Not uninit", Q_NULLPTR));
        strz->setText(QApplication::translate("LibraryEditArgDialog", "String", Q_NULLPTR));
        formatstr->setText(QApplication::translate("LibraryEditArgDialog", "Format string", Q_NULLPTR));
        label->setText(QApplication::translate("LibraryEditArgDialog", "Min size of buffer", Q_NULLPTR));
        label_3->setText(QApplication::translate("LibraryEditArgDialog", "Type", Q_NULLPTR));
        minsize1type->clear();
        minsize1type->insertItems(0, QStringList()
         << QApplication::translate("LibraryEditArgDialog", "None", Q_NULLPTR)
         << QApplication::translate("LibraryEditArgDialog", "argvalue", Q_NULLPTR)
         << QApplication::translate("LibraryEditArgDialog", "constant", Q_NULLPTR)
         << QApplication::translate("LibraryEditArgDialog", "mul", Q_NULLPTR)
         << QApplication::translate("LibraryEditArgDialog", "strlen", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("LibraryEditArgDialog", "Arg", Q_NULLPTR));
        label_5->setText(QApplication::translate("LibraryEditArgDialog", "Arg2", Q_NULLPTR));
        andlabel->setText(QApplication::translate("LibraryEditArgDialog", "and", Q_NULLPTR));
        minsize2label1->setText(QApplication::translate("LibraryEditArgDialog", "Type", Q_NULLPTR));
        minsize2type->clear();
        minsize2type->insertItems(0, QStringList()
         << QApplication::translate("LibraryEditArgDialog", "None", Q_NULLPTR)
         << QApplication::translate("LibraryEditArgDialog", "argvalue", Q_NULLPTR)
         << QApplication::translate("LibraryEditArgDialog", "constant", Q_NULLPTR)
         << QApplication::translate("LibraryEditArgDialog", "mul", Q_NULLPTR)
         << QApplication::translate("LibraryEditArgDialog", "strlen", Q_NULLPTR)
        );
        minsize2label2->setText(QApplication::translate("LibraryEditArgDialog", "Arg", Q_NULLPTR));
        minsize2label3->setText(QApplication::translate("LibraryEditArgDialog", "Arg2", Q_NULLPTR));
        label_2->setText(QApplication::translate("LibraryEditArgDialog", "Valid values", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LibraryEditArgDialog: public Ui_LibraryEditArgDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARYEDITARGDIALOG_H
