/********************************************************************************
** Form generated from reading UI file 'connectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTDIALOG_H
#define UI_CONNECTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_connectDilog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QListWidget *startList;
    QListWidget *endList;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *connectDilog)
    {
        if (connectDilog->objectName().isEmpty())
            connectDilog->setObjectName(QString::fromUtf8("connectDilog"));
        connectDilog->resize(466, 360);
        verticalLayout = new QVBoxLayout(connectDilog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(connectDilog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        startList = new QListWidget(connectDilog);
        startList->setObjectName(QString::fromUtf8("startList"));

        horizontalLayout->addWidget(startList);

        endList = new QListWidget(connectDilog);
        endList->setObjectName(QString::fromUtf8("endList"));

        horizontalLayout->addWidget(endList);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        okButton = new QPushButton(connectDilog);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/im/images/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        okButton->setIcon(icon);

        horizontalLayout_2->addWidget(okButton);

        cancelButton = new QPushButton(connectDilog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/im/images/not.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon1);

        horizontalLayout_2->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(connectDilog);
        QObject::connect(okButton, SIGNAL(clicked()), connectDilog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), connectDilog, SLOT(reject()));

        QMetaObject::connectSlotsByName(connectDilog);
    } // setupUi

    void retranslateUi(QDialog *connectDilog)
    {
        connectDilog->setWindowTitle(QCoreApplication::translate("connectDilog", "Specify the initial preferences ", nullptr));
        label->setText(QCoreApplication::translate("connectDilog", "Select the connected interfaces: ", nullptr));
        okButton->setText(QCoreApplication::translate("connectDilog", "Connect", nullptr));
        cancelButton->setText(QCoreApplication::translate("connectDilog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class connectDilog: public Ui_connectDilog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTDIALOG_H
