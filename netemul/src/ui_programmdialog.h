/********************************************************************************
** Form generated from reading UI file 'programmdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAMMDIALOG_H
#define UI_PROGRAMMDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_programmDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *lb_prog;
    QListWidget *list;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QPushButton *btn_add;
    QPushButton *btn_settings;
    QPushButton *btn_remove;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;

    void setupUi(QDialog *programmDialog)
    {
        if (programmDialog->objectName().isEmpty())
            programmDialog->setObjectName(QString::fromUtf8("programmDialog"));
        programmDialog->resize(400, 250);
        programmDialog->setMinimumSize(QSize(400, 250));
        horizontalLayout = new QHBoxLayout(programmDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lb_prog = new QLabel(programmDialog);
        lb_prog->setObjectName(QString::fromUtf8("lb_prog"));

        verticalLayout_2->addWidget(lb_prog);

        list = new QListWidget(programmDialog);
        list->setObjectName(QString::fromUtf8("list"));

        verticalLayout_2->addWidget(list);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        btn_add = new QPushButton(programmDialog);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/im/images/edit_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_add->setIcon(icon);

        verticalLayout->addWidget(btn_add);

        btn_settings = new QPushButton(programmDialog);
        btn_settings->setObjectName(QString::fromUtf8("btn_settings"));
        btn_settings->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/im/images/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_settings->setIcon(icon1);

        verticalLayout->addWidget(btn_settings);

        btn_remove = new QPushButton(programmDialog);
        btn_remove->setObjectName(QString::fromUtf8("btn_remove"));
        btn_remove->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/im/images/edit_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_remove->setIcon(icon2);

        verticalLayout->addWidget(btn_remove);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btn_ok = new QPushButton(programmDialog);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/im/images/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_ok->setIcon(icon3);

        verticalLayout->addWidget(btn_ok);

        btn_cancel = new QPushButton(programmDialog);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/im/images/not.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancel->setIcon(icon4);

        verticalLayout->addWidget(btn_cancel);


        horizontalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addLayout(horizontalLayout_2);


        retranslateUi(programmDialog);
        QObject::connect(btn_cancel, SIGNAL(clicked()), programmDialog, SLOT(reject()));
        QObject::connect(btn_ok, SIGNAL(clicked()), programmDialog, SLOT(apply()));
        QObject::connect(btn_add, SIGNAL(clicked()), programmDialog, SLOT(add()));
        QObject::connect(btn_remove, SIGNAL(clicked()), programmDialog, SLOT(remove()));
        QObject::connect(btn_settings, SIGNAL(clicked()), programmDialog, SLOT(settings()));
        QObject::connect(list, SIGNAL(currentRowChanged(int)), programmDialog, SLOT(programmChanged()));
        QObject::connect(list, SIGNAL(itemClicked(QListWidgetItem*)), programmDialog, SLOT(stateChanged(QListWidgetItem*)));

        QMetaObject::connectSlotsByName(programmDialog);
    } // setupUi

    void retranslateUi(QDialog *programmDialog)
    {
        programmDialog->setWindowTitle(QCoreApplication::translate("programmDialog", "Programs", nullptr));
        lb_prog->setText(QCoreApplication::translate("programmDialog", "Installed programs", nullptr));
        btn_add->setText(QCoreApplication::translate("programmDialog", "Add", nullptr));
        btn_settings->setText(QCoreApplication::translate("programmDialog", "Settings", nullptr));
        btn_remove->setText(QCoreApplication::translate("programmDialog", "Delete", nullptr));
        btn_ok->setText(QCoreApplication::translate("programmDialog", "Ok", nullptr));
        btn_cancel->setText(QCoreApplication::translate("programmDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class programmDialog: public Ui_programmDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMMDIALOG_H
