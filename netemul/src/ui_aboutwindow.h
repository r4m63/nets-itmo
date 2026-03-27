/********************************************************************************
** Form generated from reading UI file 'aboutwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWINDOW_H
#define UI_ABOUTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aboutWindow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QPlainTextEdit *plainTextEdit;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_5;
    QPlainTextEdit *plainTextEdit_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Close;

    void setupUi(QDialog *aboutWindow)
    {
        if (aboutWindow->objectName().isEmpty())
            aboutWindow->setObjectName(QString::fromUtf8("aboutWindow"));
        aboutWindow->resize(412, 374);
        verticalLayout = new QVBoxLayout(aboutWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(aboutWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/im/images/NetEmul.png")));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        tabWidget = new QTabWidget(aboutWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        plainTextEdit = new QPlainTextEdit(tab_3);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout_4->addWidget(plainTextEdit);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_5 = new QVBoxLayout(tab_4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        plainTextEdit_2 = new QPlainTextEdit(tab_4);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));

        verticalLayout_5->addWidget(plainTextEdit_2);

        tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Close = new QPushButton(aboutWindow);
        Close->setObjectName(QString::fromUtf8("Close"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/im/images/not.png"), QSize(), QIcon::Normal, QIcon::Off);
        Close->setIcon(icon);

        horizontalLayout->addWidget(Close);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(aboutWindow);
        QObject::connect(Close, SIGNAL(clicked()), aboutWindow, SLOT(accept()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(aboutWindow);
    } // setupUi

    void retranslateUi(QDialog *aboutWindow)
    {
        aboutWindow->setWindowTitle(QCoreApplication::translate("aboutWindow", "About program", nullptr));
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("aboutWindow", "Program for simulating computer networks.\n"
"\n"
"(C) 2009 Semenov Pavel and Omilaeva Anastasia\n"
"\n"
"", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("aboutWindow", "About", nullptr));
        label_2->setText(QCoreApplication::translate("aboutWindow", "<a href=\"https://sourceforge.net/projects/netemul\">Home Page</a><br><br>\n"
"Semenov Pavel - Project admin. Developer.<br>\n"
"<br>\n"
"Omilaeva Anastasia - Developer.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("aboutWindow", "Authors", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("aboutWindow", "Konstantin Andreev - Author of the idea and creator of the icons, \n"
"Arina Shelest - Author of the logotype.\n"
"\n"
"Lisandro Dami\303\241n Nicanor P\303\251rez Meyer\n"
"M\303\241rcio Moraes", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("aboutWindow", "Thanks to", nullptr));
        plainTextEdit_2->setPlainText(QCoreApplication::translate("aboutWindow", "\320\241\320\265\320\274\320\265\320\275\320\276\320\262 \320\237\320\260\320\262\320\265\320\273 - \320\240\321\203\321\201\321\201\320\272\320\270\320\271\n"
"M\303\241rcio Moraes - Portugu\303\252s brasileiro\n"
"Lisandro Dami\303\241n Nicanor P\303\251rez Meyer - Espa\303\261ol", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("aboutWindow", "Translation", nullptr));
        Close->setText(QCoreApplication::translate("aboutWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aboutWindow: public Ui_aboutWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWINDOW_H
