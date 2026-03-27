/********************************************************************************
** Form generated from reading UI file 'settingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGDIALOG_H
#define UI_SETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settingDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *general;
    QGridLayout *gridLayout;
    QCheckBox *cb_opengl;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QComboBox *languageBox;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *cb_autosave;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_6;
    QSlider *sl_speed;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_12;
    QSpinBox *sb_autosave;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QWidget *computer;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QComboBox *computerComboBox;
    QSpacerItem *verticalSpacer_2;
    QWidget *hub;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_3;
    QComboBox *hubComboBox;
    QSpacerItem *verticalSpacer_3;
    QWidget *switch_2;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_4;
    QComboBox *switchComboBox;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_5;
    QSpinBox *sp_ttlMac;
    QSpacerItem *verticalSpacer_4;
    QWidget *router;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_6;
    QComboBox *routerComboBox;
    QSpacerItem *verticalSpacer_5;
    QWidget *netcard;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpinBox *sp_ttlArp;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_9;
    QSpinBox *sp_arpResponce;
    QSpacerItem *verticalSpacer_6;
    QWidget *tcp;
    QVBoxLayout *verticalLayout_18;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_10;
    QSpinBox *sb_send;
    QLabel *label_11;
    QSpinBox *sb_waitingTime;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_default;
    QPushButton *btn_apply;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;

    void setupUi(QDialog *settingDialog)
    {
        if (settingDialog->objectName().isEmpty())
            settingDialog->setObjectName(QString::fromUtf8("settingDialog"));
        settingDialog->resize(758, 381);
        verticalLayout_3 = new QVBoxLayout(settingDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        listWidget = new QListWidget(settingDialog);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/im/images/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        __qlistwidgetitem->setIcon(icon);
        __qlistwidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/im/images/computer.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setIcon(icon1);
        __qlistwidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/im/images/hub.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setIcon(icon2);
        __qlistwidgetitem2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/im/images/switch.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setIcon(icon3);
        __qlistwidgetitem3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/im/images/router.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget);
        __qlistwidgetitem4->setIcon(icon4);
        __qlistwidgetitem4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/im/images/network_nic.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget);
        __qlistwidgetitem5->setIcon(icon5);
        __qlistwidgetitem5->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/im/images/tcp.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidget);
        __qlistwidgetitem6->setIcon(icon6);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMinimumSize(QSize(740, 70));
        listWidget->setMaximumSize(QSize(16777215, 70));
        listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget->setDragDropMode(QAbstractItemView::DragDrop);
        listWidget->setIconSize(QSize(32, 32));
        listWidget->setTextElideMode(Qt::ElideLeft);
        listWidget->setSpacing(5);
        listWidget->setViewMode(QListView::IconMode);

        verticalLayout_3->addWidget(listWidget);

        stackedWidget = new QStackedWidget(settingDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(0, 150));
        general = new QWidget();
        general->setObjectName(QString::fromUtf8("general"));
        gridLayout = new QGridLayout(general);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cb_opengl = new QCheckBox(general);
        cb_opengl->setObjectName(QString::fromUtf8("cb_opengl"));

        gridLayout->addWidget(cb_opengl, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_8 = new QLabel(general);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        languageBox = new QComboBox(general);
        languageBox->addItem(QString());
        languageBox->addItem(QString());
        languageBox->addItem(QString());
        languageBox->addItem(QString());
        languageBox->setObjectName(QString::fromUtf8("languageBox"));
        languageBox->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(languageBox);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        cb_autosave = new QCheckBox(general);
        cb_autosave->setObjectName(QString::fromUtf8("cb_autosave"));

        horizontalLayout_3->addWidget(cb_autosave);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        label_7 = new QLabel(general);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_13->addWidget(label_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        sl_speed = new QSlider(general);
        sl_speed->setObjectName(QString::fromUtf8("sl_speed"));
        sl_speed->setMaximumSize(QSize(350, 16777215));
        sl_speed->setMinimum(1);
        sl_speed->setMaximum(10);
        sl_speed->setOrientation(Qt::Horizontal);
        sl_speed->setTickPosition(QSlider::TicksBothSides);
        sl_speed->setTickInterval(1);

        horizontalLayout_6->addWidget(sl_speed);

        horizontalSpacer_2 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_13->addLayout(horizontalLayout_6);


        gridLayout->addLayout(verticalLayout_13, 1, 1, 2, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_12 = new QLabel(general);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_2->addWidget(label_12);

        sb_autosave = new QSpinBox(general);
        sb_autosave->setObjectName(QString::fromUtf8("sb_autosave"));
        sb_autosave->setEnabled(false);
        sb_autosave->setMaximumSize(QSize(150, 16777215));
        sb_autosave->setMinimum(1);
        sb_autosave->setMaximum(30);

        horizontalLayout_2->addWidget(sb_autosave);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(17, 92, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);

        stackedWidget->addWidget(general);
        computer = new QWidget();
        computer->setObjectName(QString::fromUtf8("computer"));
        verticalLayout_5 = new QVBoxLayout(computer);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(computer);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        computerComboBox = new QComboBox(computer);
        computerComboBox->addItem(QString());
        computerComboBox->addItem(QString());
        computerComboBox->addItem(QString());
        computerComboBox->addItem(QString());
        computerComboBox->addItem(QString());
        computerComboBox->addItem(QString());
        computerComboBox->setObjectName(QString::fromUtf8("computerComboBox"));
        computerComboBox->setMaximumSize(QSize(75, 16777215));

        verticalLayout_4->addWidget(computerComboBox);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        stackedWidget->addWidget(computer);
        hub = new QWidget();
        hub->setObjectName(QString::fromUtf8("hub"));
        verticalLayout_7 = new QVBoxLayout(hub);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_3 = new QLabel(hub);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_6->addWidget(label_3);

        hubComboBox = new QComboBox(hub);
        hubComboBox->addItem(QString());
        hubComboBox->addItem(QString());
        hubComboBox->addItem(QString());
        hubComboBox->addItem(QString());
        hubComboBox->addItem(QString());
        hubComboBox->addItem(QString());
        hubComboBox->addItem(QString());
        hubComboBox->setObjectName(QString::fromUtf8("hubComboBox"));
        hubComboBox->setMaximumSize(QSize(75, 16777215));

        verticalLayout_6->addWidget(hubComboBox);


        verticalLayout_7->addLayout(verticalLayout_6);

        verticalSpacer_3 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        stackedWidget->addWidget(hub);
        switch_2 = new QWidget();
        switch_2->setObjectName(QString::fromUtf8("switch_2"));
        verticalLayout_10 = new QVBoxLayout(switch_2);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_4 = new QLabel(switch_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_8->addWidget(label_4);

        switchComboBox = new QComboBox(switch_2);
        switchComboBox->addItem(QString());
        switchComboBox->addItem(QString());
        switchComboBox->addItem(QString());
        switchComboBox->addItem(QString());
        switchComboBox->addItem(QString());
        switchComboBox->addItem(QString());
        switchComboBox->addItem(QString());
        switchComboBox->addItem(QString());
        switchComboBox->setObjectName(QString::fromUtf8("switchComboBox"));
        switchComboBox->setMaximumSize(QSize(75, 16777215));

        verticalLayout_8->addWidget(switchComboBox);


        verticalLayout_10->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_5 = new QLabel(switch_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_9->addWidget(label_5);

        sp_ttlMac = new QSpinBox(switch_2);
        sp_ttlMac->setObjectName(QString::fromUtf8("sp_ttlMac"));
        sp_ttlMac->setMaximumSize(QSize(100, 16777215));
        sp_ttlMac->setMinimum(10);
        sp_ttlMac->setMaximum(300);
        sp_ttlMac->setValue(300);

        verticalLayout_9->addWidget(sp_ttlMac);


        verticalLayout_10->addLayout(verticalLayout_9);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_4);

        stackedWidget->addWidget(switch_2);
        router = new QWidget();
        router->setObjectName(QString::fromUtf8("router"));
        verticalLayout_12 = new QVBoxLayout(router);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_6 = new QLabel(router);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_11->addWidget(label_6);

        routerComboBox = new QComboBox(router);
        routerComboBox->addItem(QString());
        routerComboBox->addItem(QString());
        routerComboBox->addItem(QString());
        routerComboBox->addItem(QString());
        routerComboBox->addItem(QString());
        routerComboBox->addItem(QString());
        routerComboBox->setObjectName(QString::fromUtf8("routerComboBox"));
        routerComboBox->setMaximumSize(QSize(75, 16777215));

        verticalLayout_11->addWidget(routerComboBox);


        verticalLayout_12->addLayout(verticalLayout_11);

        verticalSpacer_5 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_5);

        stackedWidget->addWidget(router);
        netcard = new QWidget();
        netcard->setObjectName(QString::fromUtf8("netcard"));
        verticalLayout_16 = new QVBoxLayout(netcard);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(netcard);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        sp_ttlArp = new QSpinBox(netcard);
        sp_ttlArp->setObjectName(QString::fromUtf8("sp_ttlArp"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sp_ttlArp->sizePolicy().hasHeightForWidth());
        sp_ttlArp->setSizePolicy(sizePolicy);
        sp_ttlArp->setMinimumSize(QSize(0, 0));
        sp_ttlArp->setMaximumSize(QSize(16777215, 16777215));
        sp_ttlArp->setMinimum(10);
        sp_ttlArp->setMaximum(1200);

        verticalLayout_2->addWidget(sp_ttlArp);


        verticalLayout_16->addLayout(verticalLayout_2);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        label_9 = new QLabel(netcard);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_15->addWidget(label_9);

        sp_arpResponce = new QSpinBox(netcard);
        sp_arpResponce->setObjectName(QString::fromUtf8("sp_arpResponce"));
        sizePolicy.setHeightForWidth(sp_arpResponce->sizePolicy().hasHeightForWidth());
        sp_arpResponce->setSizePolicy(sizePolicy);
        sp_arpResponce->setMinimum(10);
        sp_arpResponce->setMaximum(300);

        verticalLayout_15->addWidget(sp_arpResponce);


        verticalLayout_16->addLayout(verticalLayout_15);

        verticalSpacer_6 = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_16->addItem(verticalSpacer_6);

        stackedWidget->addWidget(netcard);
        tcp = new QWidget();
        tcp->setObjectName(QString::fromUtf8("tcp"));
        verticalLayout_18 = new QVBoxLayout(tcp);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        label_10 = new QLabel(tcp);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_17->addWidget(label_10);

        sb_send = new QSpinBox(tcp);
        sb_send->setObjectName(QString::fromUtf8("sb_send"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sb_send->sizePolicy().hasHeightForWidth());
        sb_send->setSizePolicy(sizePolicy1);
        sb_send->setMaximumSize(QSize(75, 16777215));
        sb_send->setMaximum(10);
        sb_send->setValue(1);

        verticalLayout_17->addWidget(sb_send);

        label_11 = new QLabel(tcp);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_17->addWidget(label_11);

        sb_waitingTime = new QSpinBox(tcp);
        sb_waitingTime->setObjectName(QString::fromUtf8("sb_waitingTime"));
        sizePolicy1.setHeightForWidth(sb_waitingTime->sizePolicy().hasHeightForWidth());
        sb_waitingTime->setSizePolicy(sizePolicy1);
        sb_waitingTime->setMinimumSize(QSize(0, 0));
        sb_waitingTime->setMaximumSize(QSize(75, 16777215));
        sb_waitingTime->setMinimum(30);
        sb_waitingTime->setMaximum(130);
        sb_waitingTime->setValue(30);

        verticalLayout_17->addWidget(sb_waitingTime);


        verticalLayout_18->addLayout(verticalLayout_17);

        verticalSpacer_7 = new QSpacerItem(20, 109, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_18->addItem(verticalSpacer_7);

        stackedWidget->addWidget(tcp);

        verticalLayout_3->addWidget(stackedWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_default = new QPushButton(settingDialog);
        btn_default->setObjectName(QString::fromUtf8("btn_default"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/im/images/cogwheel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_default->setIcon(icon7);

        horizontalLayout->addWidget(btn_default);

        btn_apply = new QPushButton(settingDialog);
        btn_apply->setObjectName(QString::fromUtf8("btn_apply"));
        btn_apply->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/im/images/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_apply->setIcon(icon8);

        horizontalLayout->addWidget(btn_apply);

        btn_ok = new QPushButton(settingDialog);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/im/images/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_ok->setIcon(icon9);

        horizontalLayout->addWidget(btn_ok);

        btn_cancel = new QPushButton(settingDialog);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setEnabled(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/im/images/not.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancel->setIcon(icon10);

        horizontalLayout->addWidget(btn_cancel);


        verticalLayout_3->addLayout(horizontalLayout);

        QWidget::setTabOrder(btn_ok, btn_apply);
        QWidget::setTabOrder(btn_apply, btn_cancel);
        QWidget::setTabOrder(btn_cancel, computerComboBox);
        QWidget::setTabOrder(computerComboBox, hubComboBox);
        QWidget::setTabOrder(hubComboBox, switchComboBox);
        QWidget::setTabOrder(switchComboBox, sp_ttlMac);
        QWidget::setTabOrder(sp_ttlMac, routerComboBox);
        QWidget::setTabOrder(routerComboBox, listWidget);

        retranslateUi(settingDialog);
        QObject::connect(btn_cancel, SIGNAL(clicked()), settingDialog, SLOT(reject()));
        QObject::connect(btn_ok, SIGNAL(clicked()), settingDialog, SLOT(apply()));
        QObject::connect(btn_apply, SIGNAL(clicked()), settingDialog, SLOT(apply()));
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));
        QObject::connect(computerComboBox, SIGNAL(currentIndexChanged(int)), settingDialog, SLOT(applyEnable()));
        QObject::connect(hubComboBox, SIGNAL(currentIndexChanged(int)), settingDialog, SLOT(applyEnable()));
        QObject::connect(switchComboBox, SIGNAL(currentIndexChanged(int)), settingDialog, SLOT(applyEnable()));
        QObject::connect(sp_ttlMac, SIGNAL(valueChanged(int)), settingDialog, SLOT(applyEnable()));
        QObject::connect(languageBox, SIGNAL(currentIndexChanged(int)), settingDialog, SLOT(applyEnable()));
        QObject::connect(routerComboBox, SIGNAL(currentIndexChanged(int)), settingDialog, SLOT(applyEnable()));
        QObject::connect(sl_speed, SIGNAL(valueChanged(int)), settingDialog, SLOT(applyEnable()));
        QObject::connect(sb_send, SIGNAL(valueChanged(int)), settingDialog, SLOT(applyEnable()));
        QObject::connect(sb_waitingTime, SIGNAL(valueChanged(int)), settingDialog, SLOT(applyEnable()));
        QObject::connect(btn_default, SIGNAL(clicked()), settingDialog, SLOT(defaultSettings()));
        QObject::connect(sp_ttlArp, SIGNAL(valueChanged(int)), settingDialog, SLOT(applyEnable()));
        QObject::connect(sp_arpResponce, SIGNAL(valueChanged(int)), settingDialog, SLOT(applyEnable()));
        QObject::connect(cb_opengl, SIGNAL(clicked()), settingDialog, SLOT(applyEnable()));
        QObject::connect(cb_autosave, SIGNAL(clicked()), settingDialog, SLOT(applyEnable()));
        QObject::connect(sb_autosave, SIGNAL(valueChanged(int)), settingDialog, SLOT(applyEnable()));
        QObject::connect(cb_autosave, SIGNAL(toggled(bool)), settingDialog, SLOT(autosaveChanged(bool)));

        listWidget->setCurrentRow(-1);
        stackedWidget->setCurrentIndex(0);
        btn_ok->setDefault(true);


        QMetaObject::connectSlotsByName(settingDialog);
    } // setupUi

    void retranslateUi(QDialog *settingDialog)
    {
        settingDialog->setWindowTitle(QCoreApplication::translate("settingDialog", "Settings", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("settingDialog", "General", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("settingDialog", "Computer", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("settingDialog", "Hub", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("settingDialog", "Switch", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("settingDialog", "Router", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("settingDialog", "Netcard", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("settingDialog", "Tcp", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        cb_opengl->setText(QCoreApplication::translate("settingDialog", "Turn on/off OpenGL", nullptr));
        label_8->setText(QCoreApplication::translate("settingDialog", "Language: ", nullptr));
        languageBox->setItemText(0, QCoreApplication::translate("settingDialog", "English", nullptr));
        languageBox->setItemText(1, QCoreApplication::translate("settingDialog", "Russian", nullptr));
        languageBox->setItemText(2, QCoreApplication::translate("settingDialog", "Brazillian Portuguese", nullptr));
        languageBox->setItemText(3, QCoreApplication::translate("settingDialog", "Spanish", nullptr));

        cb_autosave->setText(QCoreApplication::translate("settingDialog", "Autosave", nullptr));
        label_7->setText(QCoreApplication::translate("settingDialog", "Animation speed:", nullptr));
        label_12->setText(QCoreApplication::translate("settingDialog", "Interval: ", nullptr));
        label_2->setText(QCoreApplication::translate("settingDialog", "Nubmer of interfaces by default:", nullptr));
        computerComboBox->setItemText(0, QCoreApplication::translate("settingDialog", "1", nullptr));
        computerComboBox->setItemText(1, QCoreApplication::translate("settingDialog", "2", nullptr));
        computerComboBox->setItemText(2, QCoreApplication::translate("settingDialog", "3", nullptr));
        computerComboBox->setItemText(3, QCoreApplication::translate("settingDialog", "4", nullptr));
        computerComboBox->setItemText(4, QCoreApplication::translate("settingDialog", "5", nullptr));
        computerComboBox->setItemText(5, QCoreApplication::translate("settingDialog", "6", nullptr));

        label_3->setText(QCoreApplication::translate("settingDialog", "Number of ports by default", nullptr));
        hubComboBox->setItemText(0, QCoreApplication::translate("settingDialog", "4", nullptr));
        hubComboBox->setItemText(1, QCoreApplication::translate("settingDialog", "5", nullptr));
        hubComboBox->setItemText(2, QCoreApplication::translate("settingDialog", "6", nullptr));
        hubComboBox->setItemText(3, QCoreApplication::translate("settingDialog", "8", nullptr));
        hubComboBox->setItemText(4, QCoreApplication::translate("settingDialog", "12", nullptr));
        hubComboBox->setItemText(5, QCoreApplication::translate("settingDialog", "24", nullptr));
        hubComboBox->setItemText(6, QCoreApplication::translate("settingDialog", "48", nullptr));

        label_4->setText(QCoreApplication::translate("settingDialog", "Number of ports by default: ", nullptr));
        switchComboBox->setItemText(0, QCoreApplication::translate("settingDialog", "4", nullptr));
        switchComboBox->setItemText(1, QCoreApplication::translate("settingDialog", "5", nullptr));
        switchComboBox->setItemText(2, QCoreApplication::translate("settingDialog", "8", nullptr));
        switchComboBox->setItemText(3, QCoreApplication::translate("settingDialog", "12", nullptr));
        switchComboBox->setItemText(4, QCoreApplication::translate("settingDialog", "16", nullptr));
        switchComboBox->setItemText(5, QCoreApplication::translate("settingDialog", "24", nullptr));
        switchComboBox->setItemText(6, QCoreApplication::translate("settingDialog", "32", nullptr));
        switchComboBox->setItemText(7, QCoreApplication::translate("settingDialog", "48", nullptr));

        label_5->setText(QCoreApplication::translate("settingDialog", "Switching table's records lifetime:", nullptr));
        sp_ttlMac->setSuffix(QCoreApplication::translate("settingDialog", " s", nullptr));
        label_6->setText(QCoreApplication::translate("settingDialog", "Number of ports by default: ", nullptr));
        routerComboBox->setItemText(0, QCoreApplication::translate("settingDialog", "2", nullptr));
        routerComboBox->setItemText(1, QCoreApplication::translate("settingDialog", "4", nullptr));
        routerComboBox->setItemText(2, QCoreApplication::translate("settingDialog", "5", nullptr));
        routerComboBox->setItemText(3, QCoreApplication::translate("settingDialog", "7", nullptr));
        routerComboBox->setItemText(4, QCoreApplication::translate("settingDialog", "8", nullptr));
        routerComboBox->setItemText(5, QCoreApplication::translate("settingDialog", "9", nullptr));

        label->setText(QCoreApplication::translate("settingDialog", "Lifetime arp-entries: ", nullptr));
        sp_ttlArp->setSuffix(QCoreApplication::translate("settingDialog", " s", nullptr));
        label_9->setText(QCoreApplication::translate("settingDialog", "Expectation time for arp-responce", nullptr));
        sp_arpResponce->setSuffix(QCoreApplication::translate("settingDialog", " s", nullptr));
        label_10->setText(QCoreApplication::translate("settingDialog", "Number of repeat sendings:", nullptr));
        label_11->setText(QCoreApplication::translate("settingDialog", "Waiting confirmation time:", nullptr));
        sb_waitingTime->setSuffix(QCoreApplication::translate("settingDialog", " s", nullptr));
        btn_default->setText(QCoreApplication::translate("settingDialog", "Default", nullptr));
        btn_apply->setText(QCoreApplication::translate("settingDialog", "Apply", nullptr));
        btn_ok->setText(QCoreApplication::translate("settingDialog", "Ok", nullptr));
        btn_cancel->setText(QCoreApplication::translate("settingDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settingDialog: public Ui_settingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDIALOG_H
