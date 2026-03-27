/********************************************************************************
** Form generated from reading UI file 'virtualnetworkdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIRTUALNETWORKDIALOG_H
#define UI_VIRTUALNETWORKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_virtualNetworkDialog
{
public:

    void setupUi(QDialog *virtualNetworkDialog)
    {
        if (virtualNetworkDialog->objectName().isEmpty())
            virtualNetworkDialog->setObjectName(QString::fromUtf8("virtualNetworkDialog"));
        virtualNetworkDialog->resize(400, 300);

        retranslateUi(virtualNetworkDialog);

        QMetaObject::connectSlotsByName(virtualNetworkDialog);
    } // setupUi

    void retranslateUi(QDialog *virtualNetworkDialog)
    {
        virtualNetworkDialog->setWindowTitle(QCoreApplication::translate("virtualNetworkDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class virtualNetworkDialog: public Ui_virtualNetworkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIRTUALNETWORKDIALOG_H
