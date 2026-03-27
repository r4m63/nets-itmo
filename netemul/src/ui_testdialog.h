/********************************************************************************
** Form generated from reading UI file 'testdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTDIALOG_H
#define UI_TESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_testDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *startButton;
    QPushButton *cancelButton;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QSpacerItem *verticalSpacer;
    QLabel *label;

    void setupUi(QDialog *testDialog)
    {
        if (testDialog->objectName().isEmpty())
            testDialog->setObjectName(QString::fromUtf8("testDialog"));
        testDialog->resize(369, 236);
        verticalLayout_2 = new QVBoxLayout(testDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listWidget = new QListWidget(testDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget->setSelectionMode(QAbstractItemView::MultiSelection);

        horizontalLayout->addWidget(listWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        startButton = new QPushButton(testDialog);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        verticalLayout->addWidget(startButton);

        cancelButton = new QPushButton(testDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        verticalLayout->addWidget(cancelButton);

        pushButton = new QPushButton(testDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        checkBox = new QCheckBox(testDialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        label = new QLabel(testDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);


        retranslateUi(testDialog);
        QObject::connect(cancelButton, SIGNAL(clicked()), testDialog, SLOT(reject()));
        QObject::connect(pushButton, SIGNAL(clicked()), testDialog, SLOT(setScriptPath()));
        QObject::connect(startButton, SIGNAL(clicked()), testDialog, SLOT(start()));

        QMetaObject::connectSlotsByName(testDialog);
    } // setupUi

    void retranslateUi(QDialog *testDialog)
    {
        testDialog->setWindowTitle(QCoreApplication::translate("testDialog", "Scripts", nullptr));
        startButton->setText(QCoreApplication::translate("testDialog", "Start", nullptr));
        cancelButton->setText(QCoreApplication::translate("testDialog", "Cancel", nullptr));
        pushButton->setText(QCoreApplication::translate("testDialog", "Set path", nullptr));
        checkBox->setText(QCoreApplication::translate("testDialog", "All", nullptr));
        label->setText(QCoreApplication::translate("testDialog", "Click start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class testDialog: public Ui_testDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTDIALOG_H
