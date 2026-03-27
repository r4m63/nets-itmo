/********************************************************************************
** Form generated from reading UI file 'staticsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATICSDIALOG_H
#define UI_STATICSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_staticsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *deviceLabel;
    QFrame *line;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *trafficLabel;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *staticsDialog)
    {
        if (staticsDialog->objectName().isEmpty())
            staticsDialog->setObjectName(QString::fromUtf8("staticsDialog"));
        staticsDialog->resize(211, 156);
        verticalLayout = new QVBoxLayout(staticsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(staticsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 100));
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        groupBox->setFlat(true);
        groupBox->setCheckable(false);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        deviceLabel = new QLabel(groupBox);
        deviceLabel->setObjectName(QString::fromUtf8("deviceLabel"));
        deviceLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_3->addWidget(deviceLabel);


        horizontalLayout->addWidget(groupBox);

        line = new QFrame(staticsDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        groupBox_2 = new QGroupBox(staticsDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        trafficLabel = new QLabel(groupBox_2);
        trafficLabel->setObjectName(QString::fromUtf8("trafficLabel"));
        trafficLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_2->addWidget(trafficLabel);


        horizontalLayout->addWidget(groupBox_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(staticsDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(250, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/im/images/not.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(staticsDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), staticsDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(staticsDialog);
    } // setupUi

    void retranslateUi(QDialog *staticsDialog)
    {
        staticsDialog->setWindowTitle(QCoreApplication::translate("staticsDialog", "Statistics", nullptr));
        groupBox->setTitle(QCoreApplication::translate("staticsDialog", "Devices:", nullptr));
        deviceLabel->setText(QCoreApplication::translate("staticsDialog", "TextLabel", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("staticsDialog", "Traffic:", nullptr));
        trafficLabel->setText(QCoreApplication::translate("staticsDialog", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("staticsDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class staticsDialog: public Ui_staticsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATICSDIALOG_H
