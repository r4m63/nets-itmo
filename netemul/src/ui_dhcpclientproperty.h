/********************************************************************************
** Form generated from reading UI file 'dhcpclientproperty.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DHCPCLIENTPROPERTY_H
#define UI_DHCPCLIENTPROPERTY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dhcpClientProperty
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QListWidget *lw_interfaces;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpinBox *sb_offerTime;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;

    void setupUi(QDialog *dhcpClientProperty)
    {
        if (dhcpClientProperty->objectName().isEmpty())
            dhcpClientProperty->setObjectName(QString::fromUtf8("dhcpClientProperty"));
        dhcpClientProperty->resize(264, 335);
        verticalLayout_2 = new QVBoxLayout(dhcpClientProperty);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(dhcpClientProperty);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        lw_interfaces = new QListWidget(dhcpClientProperty);
        lw_interfaces->setObjectName(QString::fromUtf8("lw_interfaces"));

        verticalLayout_2->addWidget(lw_interfaces);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(dhcpClientProperty);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        sb_offerTime = new QSpinBox(dhcpClientProperty);
        sb_offerTime->setObjectName(QString::fromUtf8("sb_offerTime"));
        sb_offerTime->setMaximumSize(QSize(150, 16777215));
        sb_offerTime->setMinimum(60);
        sb_offerTime->setMaximum(300);
        sb_offerTime->setValue(60);

        verticalLayout->addWidget(sb_offerTime);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_ok = new QPushButton(dhcpClientProperty);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/im/images/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_ok->setIcon(icon);

        horizontalLayout->addWidget(btn_ok);

        btn_cancel = new QPushButton(dhcpClientProperty);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/im/images/not.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancel->setIcon(icon1);

        horizontalLayout->addWidget(btn_cancel);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(dhcpClientProperty);
        QObject::connect(btn_cancel, SIGNAL(clicked()), dhcpClientProperty, SLOT(reject()));
        QObject::connect(btn_ok, SIGNAL(clicked()), dhcpClientProperty, SLOT(apply()));

        QMetaObject::connectSlotsByName(dhcpClientProperty);
    } // setupUi

    void retranslateUi(QDialog *dhcpClientProperty)
    {
        dhcpClientProperty->setWindowTitle(QCoreApplication::translate("dhcpClientProperty", "DHCP client property", nullptr));
        label->setText(QCoreApplication::translate("dhcpClientProperty", "Choose interfaces which must<br> be under DHCP control: ", nullptr));
        label_2->setText(QCoreApplication::translate("dhcpClientProperty", "Waiting time for offers<br> from dhcp-server", nullptr));
        btn_ok->setText(QCoreApplication::translate("dhcpClientProperty", "Ok", nullptr));
        btn_cancel->setText(QCoreApplication::translate("dhcpClientProperty", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dhcpClientProperty: public Ui_dhcpClientProperty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DHCPCLIENTPROPERTY_H
