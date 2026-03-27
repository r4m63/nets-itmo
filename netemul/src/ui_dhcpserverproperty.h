/********************************************************************************
** Form generated from reading UI file 'dhcpserverproperty.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DHCPSERVERPROPERTY_H
#define UI_DHCPSERVERPROPERTY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include "ipedit.h"

QT_BEGIN_NAMESPACE

class Ui_dhspServerProperty
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *cb_interface;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QTableView *tv_static;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_add;
    QPushButton *btn_del;
    QCheckBox *cb_dynamic;
    QLabel *lb_term;
    QSpinBox *sb_time;
    QHBoxLayout *horizontalLayout_3;
    ipEdit *ie_begin;
    ipEdit *ie_end;
    QHBoxLayout *horizontalLayout_4;
    ipEdit *ie_mask;
    ipEdit *ie_gatew;
    QLabel *label_2;
    QSpinBox *sb_waitingTime;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;

    void setupUi(QDialog *dhspServerProperty)
    {
        if (dhspServerProperty->objectName().isEmpty())
            dhspServerProperty->setObjectName(QString::fromUtf8("dhspServerProperty"));
        dhspServerProperty->resize(800, 462);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dhspServerProperty->sizePolicy().hasHeightForWidth());
        dhspServerProperty->setSizePolicy(sizePolicy);
        dhspServerProperty->setMinimumSize(QSize(800, 0));
        verticalLayout = new QVBoxLayout(dhspServerProperty);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(dhspServerProperty);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        cb_interface = new QComboBox(dhspServerProperty);
        cb_interface->setObjectName(QString::fromUtf8("cb_interface"));
        cb_interface->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(cb_interface);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        label = new QLabel(dhspServerProperty);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        tv_static = new QTableView(dhspServerProperty);
        tv_static->setObjectName(QString::fromUtf8("tv_static"));
        tv_static->setSelectionMode(QAbstractItemView::SingleSelection);
        tv_static->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tv_static);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_add = new QPushButton(dhspServerProperty);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/im/images/edit_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_add->setIcon(icon);

        horizontalLayout->addWidget(btn_add);

        btn_del = new QPushButton(dhspServerProperty);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/im/images/edit_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_del->setIcon(icon1);

        horizontalLayout->addWidget(btn_del);


        verticalLayout->addLayout(horizontalLayout);

        cb_dynamic = new QCheckBox(dhspServerProperty);
        cb_dynamic->setObjectName(QString::fromUtf8("cb_dynamic"));

        verticalLayout->addWidget(cb_dynamic);

        lb_term = new QLabel(dhspServerProperty);
        lb_term->setObjectName(QString::fromUtf8("lb_term"));
        lb_term->setEnabled(false);

        verticalLayout->addWidget(lb_term);

        sb_time = new QSpinBox(dhspServerProperty);
        sb_time->setObjectName(QString::fromUtf8("sb_time"));
        sb_time->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sb_time->sizePolicy().hasHeightForWidth());
        sb_time->setSizePolicy(sizePolicy1);
        sb_time->setMinimumSize(QSize(70, 0));
        sb_time->setMinimum(300);
        sb_time->setMaximum(3600);
        sb_time->setSingleStep(10);

        verticalLayout->addWidget(sb_time);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ie_begin = new ipEdit(dhspServerProperty);
        ie_begin->setObjectName(QString::fromUtf8("ie_begin"));
        ie_begin->setEnabled(false);

        horizontalLayout_3->addWidget(ie_begin);

        ie_end = new ipEdit(dhspServerProperty);
        ie_end->setObjectName(QString::fromUtf8("ie_end"));
        ie_end->setEnabled(false);

        horizontalLayout_3->addWidget(ie_end);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        ie_mask = new ipEdit(dhspServerProperty);
        ie_mask->setObjectName(QString::fromUtf8("ie_mask"));
        ie_mask->setEnabled(false);

        horizontalLayout_4->addWidget(ie_mask);

        ie_gatew = new ipEdit(dhspServerProperty);
        ie_gatew->setObjectName(QString::fromUtf8("ie_gatew"));
        ie_gatew->setEnabled(false);

        horizontalLayout_4->addWidget(ie_gatew);


        verticalLayout->addLayout(horizontalLayout_4);

        label_2 = new QLabel(dhspServerProperty);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        sb_waitingTime = new QSpinBox(dhspServerProperty);
        sb_waitingTime->setObjectName(QString::fromUtf8("sb_waitingTime"));
        sb_waitingTime->setMaximumSize(QSize(70, 16777215));
        sb_waitingTime->setMinimum(60);
        sb_waitingTime->setMaximum(300);

        verticalLayout->addWidget(sb_waitingTime);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        btn_ok = new QPushButton(dhspServerProperty);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/im/images/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_ok->setIcon(icon2);

        horizontalLayout_5->addWidget(btn_ok);

        btn_cancel = new QPushButton(dhspServerProperty);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/im/images/not.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancel->setIcon(icon3);

        horizontalLayout_5->addWidget(btn_cancel);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(dhspServerProperty);
        QObject::connect(btn_cancel, SIGNAL(clicked()), dhspServerProperty, SLOT(reject()));
        QObject::connect(btn_add, SIGNAL(clicked()), dhspServerProperty, SLOT(addRecord()));
        QObject::connect(btn_del, SIGNAL(clicked()), dhspServerProperty, SLOT(deleteRecord()));
        QObject::connect(cb_dynamic, SIGNAL(toggled(bool)), dhspServerProperty, SLOT(changeState(bool)));
        QObject::connect(btn_ok, SIGNAL(clicked()), dhspServerProperty, SLOT(apply()));

        QMetaObject::connectSlotsByName(dhspServerProperty);
    } // setupUi

    void retranslateUi(QDialog *dhspServerProperty)
    {
        dhspServerProperty->setWindowTitle(QCoreApplication::translate("dhspServerProperty", "DHCP server's properties", nullptr));
        label_3->setText(QCoreApplication::translate("dhspServerProperty", "Choose interface:", nullptr));
        label->setText(QCoreApplication::translate("dhspServerProperty", "Static:", nullptr));
        btn_add->setText(QCoreApplication::translate("dhspServerProperty", "Add", nullptr));
        btn_del->setText(QCoreApplication::translate("dhspServerProperty", "Delete", nullptr));
        cb_dynamic->setText(QCoreApplication::translate("dhspServerProperty", "Dynamic:", nullptr));
        lb_term->setText(QCoreApplication::translate("dhspServerProperty", "Lease term:", nullptr));
        sb_time->setSuffix(QCoreApplication::translate("dhspServerProperty", " s", nullptr));
#if QT_CONFIG(tooltip)
        ie_begin->setToolTip(QCoreApplication::translate("dhspServerProperty", "Ip address", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        ie_begin->setWhatsThis(QCoreApplication::translate("dhspServerProperty", "The field for ip-address.", nullptr));
#endif // QT_CONFIG(whatsthis)
        ie_begin->setProperty("labelText", QVariant(QCoreApplication::translate("dhspServerProperty", "From:", nullptr)));
#if QT_CONFIG(tooltip)
        ie_end->setToolTip(QCoreApplication::translate("dhspServerProperty", "Ip address", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        ie_end->setWhatsThis(QCoreApplication::translate("dhspServerProperty", "The field for ip-address.", nullptr));
#endif // QT_CONFIG(whatsthis)
        ie_end->setProperty("labelText", QVariant(QCoreApplication::translate("dhspServerProperty", "to:", nullptr)));
#if QT_CONFIG(tooltip)
        ie_mask->setToolTip(QCoreApplication::translate("dhspServerProperty", "Ip address", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        ie_mask->setWhatsThis(QCoreApplication::translate("dhspServerProperty", "The field for ip-address.", nullptr));
#endif // QT_CONFIG(whatsthis)
        ie_mask->setProperty("labelText", QVariant(QCoreApplication::translate("dhspServerProperty", "Mask:", nullptr)));
#if QT_CONFIG(tooltip)
        ie_gatew->setToolTip(QCoreApplication::translate("dhspServerProperty", "Ip address", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        ie_gatew->setWhatsThis(QCoreApplication::translate("dhspServerProperty", "The field for ip-address.", nullptr));
#endif // QT_CONFIG(whatsthis)
        ie_gatew->setProperty("labelText", QVariant(QCoreApplication::translate("dhspServerProperty", "Gateway:", nullptr)));
        label_2->setText(QCoreApplication::translate("dhspServerProperty", "Wating time for request from dhcp-client:", nullptr));
        btn_ok->setText(QCoreApplication::translate("dhspServerProperty", "Ok", nullptr));
        btn_cancel->setText(QCoreApplication::translate("dhspServerProperty", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dhspServerProperty: public Ui_dhspServerProperty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DHCPSERVERPROPERTY_H
