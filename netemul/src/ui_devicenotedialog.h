/********************************************************************************
** Form generated from reading UI file 'devicenotedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICENOTEDIALOG_H
#define UI_DEVICENOTEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_deviceNoteDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPlainTextEdit *te_text;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;

    void setupUi(QDialog *deviceNoteDialog)
    {
        if (deviceNoteDialog->objectName().isEmpty())
            deviceNoteDialog->setObjectName(QString::fromUtf8("deviceNoteDialog"));
        deviceNoteDialog->resize(274, 276);
        verticalLayout = new QVBoxLayout(deviceNoteDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(deviceNoteDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        te_text = new QPlainTextEdit(deviceNoteDialog);
        te_text->setObjectName(QString::fromUtf8("te_text"));
        te_text->setMaximumBlockCount(5);

        verticalLayout->addWidget(te_text);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_ok = new QPushButton(deviceNoteDialog);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/im/images/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_ok->setIcon(icon);

        horizontalLayout->addWidget(btn_ok);

        btn_cancel = new QPushButton(deviceNoteDialog);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/im/images/not.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancel->setIcon(icon1);

        horizontalLayout->addWidget(btn_cancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(deviceNoteDialog);
        QObject::connect(btn_ok, SIGNAL(clicked()), deviceNoteDialog, SLOT(apply()));
        QObject::connect(btn_cancel, SIGNAL(clicked()), deviceNoteDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(deviceNoteDialog);
    } // setupUi

    void retranslateUi(QDialog *deviceNoteDialog)
    {
        deviceNoteDialog->setWindowTitle(QCoreApplication::translate("deviceNoteDialog", "Description", nullptr));
        label->setText(QCoreApplication::translate("deviceNoteDialog", "Description:", nullptr));
        btn_ok->setText(QCoreApplication::translate("deviceNoteDialog", "Ok", nullptr));
        btn_cancel->setText(QCoreApplication::translate("deviceNoteDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deviceNoteDialog: public Ui_deviceNoteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICENOTEDIALOG_H
