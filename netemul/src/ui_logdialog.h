/********************************************************************************
** Form generated from reading UI file 'logdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGDIALOG_H
#define UI_LOGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_logDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *lw_log;
    QHBoxLayout *horizontalLayout;
    QCheckBox *cb_time;
    QComboBox *cb_sockets;
    QComboBox *cb_type;
    QPushButton *btn_clear;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *logDialog)
    {
        if (logDialog->objectName().isEmpty())
            logDialog->setObjectName(QString::fromUtf8("logDialog"));
        logDialog->resize(447, 231);
        verticalLayout = new QVBoxLayout(logDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lw_log = new QTreeWidget(logDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        lw_log->setHeaderItem(__qtreewidgetitem);
        lw_log->setObjectName(QString::fromUtf8("lw_log"));
        lw_log->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        lw_log->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lw_log->setRootIsDecorated(true);
        lw_log->setAnimated(false);
        lw_log->header()->setVisible(false);

        verticalLayout->addWidget(lw_log);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cb_time = new QCheckBox(logDialog);
        cb_time->setObjectName(QString::fromUtf8("cb_time"));

        horizontalLayout->addWidget(cb_time);

        cb_sockets = new QComboBox(logDialog);
        cb_sockets->setObjectName(QString::fromUtf8("cb_sockets"));
        cb_sockets->setMinimumSize(QSize(75, 0));

        horizontalLayout->addWidget(cb_sockets);

        cb_type = new QComboBox(logDialog);
        cb_type->addItem(QString());
        cb_type->addItem(QString());
        cb_type->addItem(QString());
        cb_type->addItem(QString());
        cb_type->setObjectName(QString::fromUtf8("cb_type"));
        cb_type->setMinimumSize(QSize(70, 0));

        horizontalLayout->addWidget(cb_type);

        btn_clear = new QPushButton(logDialog);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/im/images/clean.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_clear->setIcon(icon);

        horizontalLayout->addWidget(btn_clear);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(logDialog);
        QObject::connect(btn_clear, SIGNAL(clicked()), lw_log, SLOT(clear()));

        QMetaObject::connectSlotsByName(logDialog);
    } // setupUi

    void retranslateUi(QWidget *logDialog)
    {
        logDialog->setWindowTitle(QCoreApplication::translate("logDialog", "Form", nullptr));
        logDialog->setStyleSheet(QString());
        cb_time->setText(QCoreApplication::translate("logDialog", "Time", nullptr));
        cb_type->setItemText(0, QCoreApplication::translate("logDialog", "All", nullptr));
        cb_type->setItemText(1, QCoreApplication::translate("logDialog", "Arp", nullptr));
        cb_type->setItemText(2, QCoreApplication::translate("logDialog", "TCP", nullptr));
        cb_type->setItemText(3, QCoreApplication::translate("logDialog", "UDP", nullptr));

        btn_clear->setText(QCoreApplication::translate("logDialog", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class logDialog: public Ui_logDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGDIALOG_H
