/********************************************************************************
** Form generated from reading UI file 'installdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTALLDIALOG_H
#define UI_INSTALLDIALOG_H

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

class Ui_installDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *list;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_install;
    QPushButton *btn_close;

    void setupUi(QDialog *installDialog)
    {
        if (installDialog->objectName().isEmpty())
            installDialog->setObjectName(QString::fromUtf8("installDialog"));
        installDialog->resize(300, 253);
        installDialog->setMinimumSize(QSize(300, 200));
        verticalLayout_2 = new QVBoxLayout(installDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(installDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        list = new QListWidget(installDialog);
        new QListWidgetItem(list);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(list);
        __qlistwidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(list);
        __qlistwidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        list->setObjectName(QString::fromUtf8("list"));
        list->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(list);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_install = new QPushButton(installDialog);
        btn_install->setObjectName(QString::fromUtf8("btn_install"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/im/images/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_install->setIcon(icon);

        horizontalLayout->addWidget(btn_install);

        btn_close = new QPushButton(installDialog);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/im/images/not.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_close->setIcon(icon1);

        horizontalLayout->addWidget(btn_close);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(installDialog);
        QObject::connect(btn_close, SIGNAL(clicked()), installDialog, SLOT(reject()));
        QObject::connect(btn_install, SIGNAL(clicked()), installDialog, SLOT(install()));

        QMetaObject::connectSlotsByName(installDialog);
    } // setupUi

    void retranslateUi(QDialog *installDialog)
    {
        installDialog->setWindowTitle(QCoreApplication::translate("installDialog", "Programs", nullptr));
        label->setText(QCoreApplication::translate("installDialog", "Available programs: ", nullptr));

        const bool __sortingEnabled = list->isSortingEnabled();
        list->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = list->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("installDialog", "RIP", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = list->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("installDialog", "DHCP client", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = list->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("installDialog", "DHCP server", nullptr));
        list->setSortingEnabled(__sortingEnabled);

        btn_install->setText(QCoreApplication::translate("installDialog", "Install", nullptr));
        btn_close->setText(QCoreApplication::translate("installDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class installDialog: public Ui_installDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTALLDIALOG_H
