/********************************************************************************
** Form generated from reading UI file 'tableswitch.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLESWITCH_H
#define UI_TABLESWITCH_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_tableSwitch
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *table;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *le_macAddress;
    QLabel *label_2;
    QComboBox *cb_port;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_add;
    QPushButton *btn_del;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_cancel;

    void setupUi(QDialog *tableSwitch)
    {
        if (tableSwitch->objectName().isEmpty())
            tableSwitch->setObjectName(QString::fromUtf8("tableSwitch"));
        tableSwitch->resize(518, 281);
        verticalLayout = new QVBoxLayout(tableSwitch);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        table = new QTableView(tableSwitch);
        table->setObjectName(QString::fromUtf8("table"));
        table->setMinimumSize(QSize(500, 0));
        table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table->setAlternatingRowColors(true);
        table->setSelectionMode(QAbstractItemView::SingleSelection);
        table->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(table);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(tableSwitch);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        le_macAddress = new QLineEdit(tableSwitch);
        le_macAddress->setObjectName(QString::fromUtf8("le_macAddress"));
        le_macAddress->setMinimumSize(QSize(200, 0));
        le_macAddress->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_2->addWidget(le_macAddress);

        label_2 = new QLabel(tableSwitch);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        cb_port = new QComboBox(tableSwitch);
        cb_port->setObjectName(QString::fromUtf8("cb_port"));
        cb_port->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(cb_port);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_add = new QPushButton(tableSwitch);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/im/images/edit_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_add->setIcon(icon);

        horizontalLayout->addWidget(btn_add);

        btn_del = new QPushButton(tableSwitch);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));
        btn_del->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/im/images/edit_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_del->setIcon(icon1);

        horizontalLayout->addWidget(btn_del);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_cancel = new QPushButton(tableSwitch);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/im/images/not.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancel->setIcon(icon2);

        horizontalLayout->addWidget(btn_cancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(tableSwitch);
        QObject::connect(btn_cancel, SIGNAL(clicked()), tableSwitch, SLOT(reject()));

        QMetaObject::connectSlotsByName(tableSwitch);
    } // setupUi

    void retranslateUi(QDialog *tableSwitch)
    {
        tableSwitch->setWindowTitle(QCoreApplication::translate("tableSwitch", "Switching table", nullptr));
        label->setText(QCoreApplication::translate("tableSwitch", "Mac-address: ", nullptr));
        le_macAddress->setInputMask(QCoreApplication::translate("tableSwitch", "HH:HH:HH:HH:HH:HH;_", nullptr));
        le_macAddress->setText(QCoreApplication::translate("tableSwitch", "00:00:00:00:00:00", nullptr));
        label_2->setText(QCoreApplication::translate("tableSwitch", "Port: ", nullptr));
        btn_add->setText(QCoreApplication::translate("tableSwitch", "Add", nullptr));
        btn_del->setText(QCoreApplication::translate("tableSwitch", "Delete", nullptr));
        btn_cancel->setText(QCoreApplication::translate("tableSwitch", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tableSwitch: public Ui_tableSwitch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLESWITCH_H
