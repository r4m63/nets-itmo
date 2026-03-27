/********************************************************************************
** Form generated from reading UI file 'ripproperty.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIPPROPERTY_H
#define UI_RIPPROPERTY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ripProperty
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *cb_split;
    QCheckBox *chb_update;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;

    void setupUi(QDialog *ripProperty)
    {
        if (ripProperty->objectName().isEmpty())
            ripProperty->setObjectName(QString::fromUtf8("ripProperty"));
        ripProperty->resize(247, 191);
        verticalLayout_2 = new QVBoxLayout(ripProperty);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(ripProperty);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        cb_split = new QComboBox(ripProperty);
        cb_split->addItem(QString());
        cb_split->addItem(QString());
        cb_split->addItem(QString());
        cb_split->setObjectName(QString::fromUtf8("cb_split"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cb_split->sizePolicy().hasHeightForWidth());
        cb_split->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(cb_split);


        verticalLayout_2->addLayout(verticalLayout);

        chb_update = new QCheckBox(ripProperty);
        chb_update->setObjectName(QString::fromUtf8("chb_update"));

        verticalLayout_2->addWidget(chb_update);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_ok = new QPushButton(ripProperty);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/im/images/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_ok->setIcon(icon);

        horizontalLayout->addWidget(btn_ok);

        btn_cancel = new QPushButton(ripProperty);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/im/images/not.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancel->setIcon(icon1);

        horizontalLayout->addWidget(btn_cancel);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(ripProperty);
        QObject::connect(btn_cancel, SIGNAL(clicked()), ripProperty, SLOT(reject()));
        QObject::connect(btn_ok, SIGNAL(clicked()), ripProperty, SLOT(apply()));

        QMetaObject::connectSlotsByName(ripProperty);
    } // setupUi

    void retranslateUi(QDialog *ripProperty)
    {
        ripProperty->setWindowTitle(QCoreApplication::translate("ripProperty", "Rip program property", nullptr));
        label->setText(QCoreApplication::translate("ripProperty", "Split horizon:", nullptr));
        cb_split->setItemText(0, QCoreApplication::translate("ripProperty", "Disable", nullptr));
        cb_split->setItemText(1, QCoreApplication::translate("ripProperty", "Enable", nullptr));
        cb_split->setItemText(2, QCoreApplication::translate("ripProperty", "With poison reverse", nullptr));

        chb_update->setText(QCoreApplication::translate("ripProperty", " Turn On/Off triggered updates", nullptr));
        btn_ok->setText(QCoreApplication::translate("ripProperty", "Ok", nullptr));
        btn_cancel->setText(QCoreApplication::translate("ripProperty", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ripProperty: public Ui_ripProperty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIPPROPERTY_H
