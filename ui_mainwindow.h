/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QVTKOpenGLNativeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_diagnosis;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_9;
    QLabel *lb_Status_PF_Sensor;
    QSpacerItem *verticalSpacer_7;
    QLabel *lb_Status_PF_Motor;
    QSpacerItem *verticalSpacer_8;
    QLabel *lb_Status_PF_PDU;
    QSpacerItem *verticalSpacer_9;
    QLabel *lb_Status_PF_Battery;
    QSpacerItem *verticalSpacer_10;
    QLabel *lb_Status_PF_Network;
    QSpacerItem *verticalSpacer;
    QLabel *lb_Status_PF_Network_2;
    QPushButton *bt_Check;
    QLabel *lb_RobotType_4;
    QPushButton *bt_Save;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *verticalLayout_10;
    QLabel *lb_List_Sensor;
    QSpacerItem *verticalSpacer_3;
    QLabel *lb_List_Motor;
    QSpacerItem *verticalSpacer_4;
    QLabel *lb_List_PDU;
    QSpacerItem *verticalSpacer_5;
    QLabel *lb_List_Battery;
    QSpacerItem *verticalSpacer_6;
    QLabel *lb_List_Network;
    QSpacerItem *verticalSpacer_2;
    QLabel *lb_List_Network_2;
    QLabel *lb_Status;
    QLabel *lb_List;
    QLabel *lb_Info;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *lb_Lidar_Front;
    QLabel *lb_Lidar_Back;
    QLabel *lb_Lidar_Bottom;
    QLabel *lb_Cam_Left;
    QLabel *lb_Cam_Right;
    QLabel *lb_Cam_QR;
    QLabel *lb_RobotType_29;
    QLabel *lb_RobotType_30;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lb_Motor_0;
    QLabel *lb_Motor_1;
    QLabel *lb_Motor_2;
    QLabel *lb_Motor_3;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lb_Motor_Connection_title;
    QLabel *lb_Motor_Status_title;
    QLabel *lb_Motor_Temp_title;
    QLabel *lb_Motor_Cur_title;
    QLabel *lb_Motor_Core_temp_title;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lb_Motor_Connection;
    QLabel *lb_Motor_Status;
    QLabel *lb_Motor_Temp;
    QLabel *lb_Motor_Cur;
    QLabel *lb_Motor_Core_temp;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lb_Battery_In_title;
    QLabel *lb_Battery_Out_title;
    QLabel *lb_Battery_Cur_title;
    QLabel *lb_Battery_Power_title;
    QLabel *lb_Battery_Total_power_title;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lb_Battery_In;
    QLabel *lb_Battery_Out;
    QLabel *lb_Battery_Cur;
    QLabel *lb_Battery_Power;
    QLabel *lb_Battery_Total_power;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *lb_PDU_Charge_title;
    QLabel *lb_PDU_Emo_title;
    QLabel *lb_PDU_Remote_title;
    QLabel *lb_PDU_Ping_title;
    QLabel *lb_PDU_Packet_title;
    QWidget *horizontalLayoutWidget_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *lb_PDU_Charge;
    QLabel *lb_PDU_Emo;
    QLabel *lb_PDU_Remote;
    QLabel *lb_PDU_Ping;
    QLabel *lb_PDU_Packet;
    QWidget *horizontalLayoutWidget_10;
    QHBoxLayout *horizontalLayout_10;
    QLabel *lb_Network_title;
    QLabel *lb_Network_Ip_title;
    QLabel *lb_Network_Strength_title;
    QWidget *horizontalLayoutWidget_11;
    QHBoxLayout *horizontalLayout_11;
    QLabel *lb_Network_ID;
    QLabel *lb_Network_IP;
    QLabel *lb_Network_Strength;
    QPushButton *bt_Update;
    QPushButton *bt_Reset;
    QPushButton *bt_CamConecTry;
    QWidget *horizontalLayoutWidget_12;
    QHBoxLayout *horizontalLayout_12;
    QLabel *lb_Network_Strength_title_2;
    QWidget *horizontalLayoutWidget_13;
    QHBoxLayout *horizontalLayout_13;
    QLabel *lb_Network_ID_2;
    QWidget *tab_ping;
    QLabel *lb_List_2;
    QLabel *lb_List_3;
    QLabel *lb_ping_pdu;
    QLabel *lb_ping_lidar_1;
    QLabel *lb_ping_lidar_2;
    QLabel *lb_List_4;
    QWidget *tab_auto;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *lb_auto_MobileStatusInfo;
    QLabel *lb_auto_MobilePoseInfo;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *lb_Auto_Motor_Status;
    QPushButton *bt_Auto_Motor_Check;
    QPushButton *bt_Auto_Emergency;
    QLabel *lb_Auto_dist;
    QLabel *lb_Auto_eg;
    QDoubleSpinBox *dsb_Auto_MoveRotateW;
    QLabel *lb_Auto_v;
    QDoubleSpinBox *dsb_Auto_MoveLinearDist;
    QDoubleSpinBox *dsb_Auto_MoveLinearV;
    QDoubleSpinBox *dsb_Auto_MoveRotateDeg;
    QLabel *lb_Auto_w;
    QWidget *tab_sensor;
    QTabWidget *tabWidget_sensor;
    QWidget *tab_Lidar;
    QVTKOpenGLNativeWidget *qvtkWidget;
    QWidget *tab_Camera;
    QLabel *lb_CodeInfo;
    QLabel *lb_Screen1;
    QLabel *lb_Camera_Right;
    QLabel *lb_Camera_Left;
    QPushButton *bt_CameraChange;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_7;
    QWidget *tab_system;
    QTabWidget *tabWidget_system;
    QWidget *tab_motor;
    QDoubleSpinBox *spb_AccV;
    QPushButton *bt_JogL;
    QPushButton *bt_JogF;
    QDoubleSpinBox *spb_JogV;
    QPushButton *bt_MotorInit;
    QPushButton *bt_Emergency;
    QPushButton *bt_JogB;
    QDoubleSpinBox *spb_DecelW;
    QDoubleSpinBox *spb_JogW;
    QDoubleSpinBox *spb_DecelV;
    QDoubleSpinBox *spb_AccW;
    QPushButton *bt_JogR;
    QLabel *lb_w;
    QLabel *lb_dist;
    QLabel *lb_v;
    QDoubleSpinBox *dsb_MoveRotateW;
    QPushButton *bt_MoveLinear;
    QPushButton *bt_MoveRotate;
    QDoubleSpinBox *dsb_MoveLinearDist;
    QDoubleSpinBox *dsb_MoveRotateDeg;
    QDoubleSpinBox *dsb_MoveLinearV;
    QLabel *lb_deg;
    QPushButton *bt_JoystickConnection;
    QWidget *tab_battery;
    QWidget *tab_network;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_8;
    QLabel *lb_SystemInfo;
    QLabel *lb_MobilePoseInfo;
    QLabel *lb_MobileStatusInfo;
    QWidget *tab_indicator;
    QTabWidget *tabWidget_Indicator_Display;
    QWidget *tab_led;
    QPushButton *bt_TestLed;
    QSpinBox *spb_Led;
    QLabel *lb_CodeInfo_4;
    QPushButton *bt_TestLed_loop;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *lb_CodeInfo_5;
    QLabel *lb_CodeInfo_6;
    QLabel *lb_CodeInfo_7;
    QLabel *lb_CodeInfo_8;
    QLabel *lb_CodeInfo_9;
    QLabel *lb_CodeInfo_10;
    QLabel *lb_CodeInfo_11;
    QLabel *lb_CodeInfo_12;
    QLabel *lb_CodeInfo_13;
    QLabel *lb_CodeInfo_14;
    QLabel *lb_CodeInfo_15;
    QLabel *lb_CodeInfo_16;
    QLabel *lb_CodeInfo_17;
    QLabel *lb_CodeInfo_18;
    QLabel *lb_CodeInfo_19;
    QSpacerItem *verticalSpacer_16;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *lb_CodeInfo_20;
    QLabel *lb_CodeInfo_21;
    QLabel *lb_CodeInfo_22;
    QLabel *lb_CodeInfo_23;
    QLabel *lb_CodeInfo_24;
    QLabel *lb_CodeInfo_25;
    QLabel *lb_CodeInfo_26;
    QLabel *lb_CodeInfo_27;
    QLabel *lb_CodeInfo_28;
    QLabel *lb_CodeInfo_29;
    QLabel *lb_CodeInfo_30;
    QLabel *lb_CodeInfo_31;
    QLabel *lb_CodeInfo_32;
    QLabel *lb_CodeInfo_33;
    QLabel *lb_CodeInfo_34;
    QSpacerItem *verticalSpacer_17;
    QWidget *tab_sound;
    QPushButton *bt_ClickSound;
    QLabel *lb_CodeInfo_3;
    QWidget *tab_display;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QWidget *tab_server;
    QWidget *tab_test;
    QPushButton *bt_Test;
    QPushButton *bt_Sync;
    QPushButton *bt_StatusCheck;
    QCheckBox *ckb_TestDebug;
    QPushButton *bt_TestImgSave;
    QPushButton *bt_Connection;
    QComboBox *cb_RobotType;
    QLabel *lb_RobotType;
    QCheckBox *ckb_Lidar;
    QCheckBox *ckb_Mobile;
    QCheckBox *ckb_Cam;
    QCheckBox *ckb_Joystick;
    QPushButton *bt_Disconnection;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1083, 687);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 40, 1071, 531));
        tab_diagnosis = new QWidget();
        tab_diagnosis->setObjectName(QString::fromUtf8("tab_diagnosis"));
        verticalLayoutWidget_8 = new QWidget(tab_diagnosis);
        verticalLayoutWidget_8->setObjectName(QString::fromUtf8("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(10, 80, 52, 391));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        lb_Status_PF_Sensor = new QLabel(verticalLayoutWidget_8);
        lb_Status_PF_Sensor->setObjectName(QString::fromUtf8("lb_Status_PF_Sensor"));
        QFont font;
        font.setPointSize(11);
        lb_Status_PF_Sensor->setFont(font);

        verticalLayout_9->addWidget(lb_Status_PF_Sensor);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_7);

        lb_Status_PF_Motor = new QLabel(verticalLayoutWidget_8);
        lb_Status_PF_Motor->setObjectName(QString::fromUtf8("lb_Status_PF_Motor"));
        lb_Status_PF_Motor->setFont(font);

        verticalLayout_9->addWidget(lb_Status_PF_Motor);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_8);

        lb_Status_PF_PDU = new QLabel(verticalLayoutWidget_8);
        lb_Status_PF_PDU->setObjectName(QString::fromUtf8("lb_Status_PF_PDU"));
        lb_Status_PF_PDU->setFont(font);

        verticalLayout_9->addWidget(lb_Status_PF_PDU);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_9);

        lb_Status_PF_Battery = new QLabel(verticalLayoutWidget_8);
        lb_Status_PF_Battery->setObjectName(QString::fromUtf8("lb_Status_PF_Battery"));
        lb_Status_PF_Battery->setFont(font);

        verticalLayout_9->addWidget(lb_Status_PF_Battery);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_10);

        lb_Status_PF_Network = new QLabel(verticalLayoutWidget_8);
        lb_Status_PF_Network->setObjectName(QString::fromUtf8("lb_Status_PF_Network"));
        lb_Status_PF_Network->setFont(font);

        verticalLayout_9->addWidget(lb_Status_PF_Network);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer);

        lb_Status_PF_Network_2 = new QLabel(verticalLayoutWidget_8);
        lb_Status_PF_Network_2->setObjectName(QString::fromUtf8("lb_Status_PF_Network_2"));
        lb_Status_PF_Network_2->setFont(font);

        verticalLayout_9->addWidget(lb_Status_PF_Network_2);

        bt_Check = new QPushButton(tab_diagnosis);
        bt_Check->setObjectName(QString::fromUtf8("bt_Check"));
        bt_Check->setGeometry(QRect(10, 10, 61, 21));
        lb_RobotType_4 = new QLabel(tab_diagnosis);
        lb_RobotType_4->setObjectName(QString::fromUtf8("lb_RobotType_4"));
        lb_RobotType_4->setGeometry(QRect(950, 10, 101, 21));
        lb_RobotType_4->setFont(font);
        bt_Save = new QPushButton(tab_diagnosis);
        bt_Save->setObjectName(QString::fromUtf8("bt_Save"));
        bt_Save->setGeometry(QRect(80, 10, 61, 21));
        verticalLayoutWidget_9 = new QWidget(tab_diagnosis);
        verticalLayoutWidget_9->setObjectName(QString::fromUtf8("verticalLayoutWidget_9"));
        verticalLayoutWidget_9->setGeometry(QRect(70, 80, 71, 391));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget_9);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        lb_List_Sensor = new QLabel(verticalLayoutWidget_9);
        lb_List_Sensor->setObjectName(QString::fromUtf8("lb_List_Sensor"));
        lb_List_Sensor->setFont(font);

        verticalLayout_10->addWidget(lb_List_Sensor);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_3);

        lb_List_Motor = new QLabel(verticalLayoutWidget_9);
        lb_List_Motor->setObjectName(QString::fromUtf8("lb_List_Motor"));
        lb_List_Motor->setFont(font);

        verticalLayout_10->addWidget(lb_List_Motor);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_4);

        lb_List_PDU = new QLabel(verticalLayoutWidget_9);
        lb_List_PDU->setObjectName(QString::fromUtf8("lb_List_PDU"));
        lb_List_PDU->setFont(font);

        verticalLayout_10->addWidget(lb_List_PDU);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_5);

        lb_List_Battery = new QLabel(verticalLayoutWidget_9);
        lb_List_Battery->setObjectName(QString::fromUtf8("lb_List_Battery"));
        lb_List_Battery->setFont(font);

        verticalLayout_10->addWidget(lb_List_Battery);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_6);

        lb_List_Network = new QLabel(verticalLayoutWidget_9);
        lb_List_Network->setObjectName(QString::fromUtf8("lb_List_Network"));
        lb_List_Network->setFont(font);

        verticalLayout_10->addWidget(lb_List_Network);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_2);

        lb_List_Network_2 = new QLabel(verticalLayoutWidget_9);
        lb_List_Network_2->setObjectName(QString::fromUtf8("lb_List_Network_2"));
        lb_List_Network_2->setFont(font);

        verticalLayout_10->addWidget(lb_List_Network_2);

        lb_Status = new QLabel(tab_diagnosis);
        lb_Status->setObjectName(QString::fromUtf8("lb_Status"));
        lb_Status->setGeometry(QRect(10, 50, 51, 21));
        lb_Status->setFont(font);
        lb_List = new QLabel(tab_diagnosis);
        lb_List->setObjectName(QString::fromUtf8("lb_List"));
        lb_List->setGeometry(QRect(70, 50, 51, 21));
        lb_List->setFont(font);
        lb_Info = new QLabel(tab_diagnosis);
        lb_Info->setObjectName(QString::fromUtf8("lb_Info"));
        lb_Info->setGeometry(QRect(140, 50, 51, 21));
        lb_Info->setFont(font);
        horizontalLayoutWidget = new QWidget(tab_diagnosis);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(140, 100, 921, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lb_Lidar_Front = new QLabel(horizontalLayoutWidget);
        lb_Lidar_Front->setObjectName(QString::fromUtf8("lb_Lidar_Front"));
        lb_Lidar_Front->setFont(font);
        lb_Lidar_Front->setFrameShape(QFrame::Box);

        horizontalLayout->addWidget(lb_Lidar_Front);

        lb_Lidar_Back = new QLabel(horizontalLayoutWidget);
        lb_Lidar_Back->setObjectName(QString::fromUtf8("lb_Lidar_Back"));
        lb_Lidar_Back->setFont(font);
        lb_Lidar_Back->setFrameShape(QFrame::Box);

        horizontalLayout->addWidget(lb_Lidar_Back);

        lb_Lidar_Bottom = new QLabel(horizontalLayoutWidget);
        lb_Lidar_Bottom->setObjectName(QString::fromUtf8("lb_Lidar_Bottom"));
        lb_Lidar_Bottom->setFont(font);
        lb_Lidar_Bottom->setFrameShape(QFrame::Box);

        horizontalLayout->addWidget(lb_Lidar_Bottom);

        lb_Cam_Left = new QLabel(horizontalLayoutWidget);
        lb_Cam_Left->setObjectName(QString::fromUtf8("lb_Cam_Left"));
        lb_Cam_Left->setFont(font);
        lb_Cam_Left->setFrameShape(QFrame::Box);

        horizontalLayout->addWidget(lb_Cam_Left);

        lb_Cam_Right = new QLabel(horizontalLayoutWidget);
        lb_Cam_Right->setObjectName(QString::fromUtf8("lb_Cam_Right"));
        lb_Cam_Right->setFont(font);
        lb_Cam_Right->setFrameShape(QFrame::Box);

        horizontalLayout->addWidget(lb_Cam_Right);

        lb_Cam_QR = new QLabel(horizontalLayoutWidget);
        lb_Cam_QR->setObjectName(QString::fromUtf8("lb_Cam_QR"));
        lb_Cam_QR->setFont(font);
        lb_Cam_QR->setFrameShape(QFrame::Box);

        horizontalLayout->addWidget(lb_Cam_QR);

        lb_RobotType_29 = new QLabel(tab_diagnosis);
        lb_RobotType_29->setObjectName(QString::fromUtf8("lb_RobotType_29"));
        lb_RobotType_29->setGeometry(QRect(140, 80, 51, 21));
        lb_RobotType_29->setFont(font);
        lb_RobotType_29->setFrameShape(QFrame::Box);
        lb_RobotType_30 = new QLabel(tab_diagnosis);
        lb_RobotType_30->setObjectName(QString::fromUtf8("lb_RobotType_30"));
        lb_RobotType_30->setGeometry(QRect(600, 80, 51, 21));
        lb_RobotType_30->setFont(font);
        lb_RobotType_30->setFrameShape(QFrame::Box);
        horizontalLayoutWidget_3 = new QWidget(tab_diagnosis);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(140, 150, 921, 23));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lb_Motor_0 = new QLabel(horizontalLayoutWidget_3);
        lb_Motor_0->setObjectName(QString::fromUtf8("lb_Motor_0"));
        lb_Motor_0->setFont(font);
        lb_Motor_0->setFrameShape(QFrame::StyledPanel);

        horizontalLayout_3->addWidget(lb_Motor_0);

        lb_Motor_1 = new QLabel(horizontalLayoutWidget_3);
        lb_Motor_1->setObjectName(QString::fromUtf8("lb_Motor_1"));
        lb_Motor_1->setFont(font);
        lb_Motor_1->setFrameShape(QFrame::StyledPanel);

        horizontalLayout_3->addWidget(lb_Motor_1);

        lb_Motor_2 = new QLabel(horizontalLayoutWidget_3);
        lb_Motor_2->setObjectName(QString::fromUtf8("lb_Motor_2"));
        lb_Motor_2->setFont(font);
        lb_Motor_2->setFrameShape(QFrame::StyledPanel);

        horizontalLayout_3->addWidget(lb_Motor_2);

        lb_Motor_3 = new QLabel(horizontalLayoutWidget_3);
        lb_Motor_3->setObjectName(QString::fromUtf8("lb_Motor_3"));
        lb_Motor_3->setFont(font);
        lb_Motor_3->setFrameShape(QFrame::StyledPanel);

        horizontalLayout_3->addWidget(lb_Motor_3);

        horizontalLayoutWidget_4 = new QWidget(tab_diagnosis);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(140, 180, 921, 21));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        lb_Motor_Connection_title = new QLabel(horizontalLayoutWidget_4);
        lb_Motor_Connection_title->setObjectName(QString::fromUtf8("lb_Motor_Connection_title"));
        lb_Motor_Connection_title->setFont(font);
        lb_Motor_Connection_title->setFrameShape(QFrame::Box);

        horizontalLayout_4->addWidget(lb_Motor_Connection_title);

        lb_Motor_Status_title = new QLabel(horizontalLayoutWidget_4);
        lb_Motor_Status_title->setObjectName(QString::fromUtf8("lb_Motor_Status_title"));
        lb_Motor_Status_title->setFont(font);
        lb_Motor_Status_title->setFrameShape(QFrame::Box);

        horizontalLayout_4->addWidget(lb_Motor_Status_title);

        lb_Motor_Temp_title = new QLabel(horizontalLayoutWidget_4);
        lb_Motor_Temp_title->setObjectName(QString::fromUtf8("lb_Motor_Temp_title"));
        lb_Motor_Temp_title->setFont(font);
        lb_Motor_Temp_title->setFrameShape(QFrame::Box);

        horizontalLayout_4->addWidget(lb_Motor_Temp_title);

        lb_Motor_Cur_title = new QLabel(horizontalLayoutWidget_4);
        lb_Motor_Cur_title->setObjectName(QString::fromUtf8("lb_Motor_Cur_title"));
        lb_Motor_Cur_title->setFont(font);
        lb_Motor_Cur_title->setFrameShape(QFrame::Box);

        horizontalLayout_4->addWidget(lb_Motor_Cur_title);

        lb_Motor_Core_temp_title = new QLabel(horizontalLayoutWidget_4);
        lb_Motor_Core_temp_title->setObjectName(QString::fromUtf8("lb_Motor_Core_temp_title"));
        lb_Motor_Core_temp_title->setFont(font);
        lb_Motor_Core_temp_title->setFrameShape(QFrame::Box);

        horizontalLayout_4->addWidget(lb_Motor_Core_temp_title);

        horizontalLayoutWidget_6 = new QWidget(tab_diagnosis);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(140, 200, 921, 21));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        lb_Motor_Connection = new QLabel(horizontalLayoutWidget_6);
        lb_Motor_Connection->setObjectName(QString::fromUtf8("lb_Motor_Connection"));
        lb_Motor_Connection->setFont(font);
        lb_Motor_Connection->setFrameShape(QFrame::Box);

        horizontalLayout_6->addWidget(lb_Motor_Connection);

        lb_Motor_Status = new QLabel(horizontalLayoutWidget_6);
        lb_Motor_Status->setObjectName(QString::fromUtf8("lb_Motor_Status"));
        lb_Motor_Status->setFont(font);
        lb_Motor_Status->setFrameShape(QFrame::Box);

        horizontalLayout_6->addWidget(lb_Motor_Status);

        lb_Motor_Temp = new QLabel(horizontalLayoutWidget_6);
        lb_Motor_Temp->setObjectName(QString::fromUtf8("lb_Motor_Temp"));
        lb_Motor_Temp->setFont(font);
        lb_Motor_Temp->setFrameShape(QFrame::Box);

        horizontalLayout_6->addWidget(lb_Motor_Temp);

        lb_Motor_Cur = new QLabel(horizontalLayoutWidget_6);
        lb_Motor_Cur->setObjectName(QString::fromUtf8("lb_Motor_Cur"));
        lb_Motor_Cur->setFont(font);
        lb_Motor_Cur->setFrameShape(QFrame::Box);

        horizontalLayout_6->addWidget(lb_Motor_Cur);

        lb_Motor_Core_temp = new QLabel(horizontalLayoutWidget_6);
        lb_Motor_Core_temp->setObjectName(QString::fromUtf8("lb_Motor_Core_temp"));
        lb_Motor_Core_temp->setFont(font);
        lb_Motor_Core_temp->setFrameShape(QFrame::Box);

        horizontalLayout_6->addWidget(lb_Motor_Core_temp);

        horizontalLayoutWidget_5 = new QWidget(tab_diagnosis);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(140, 310, 921, 21));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        lb_Battery_In_title = new QLabel(horizontalLayoutWidget_5);
        lb_Battery_In_title->setObjectName(QString::fromUtf8("lb_Battery_In_title"));
        lb_Battery_In_title->setFont(font);
        lb_Battery_In_title->setFrameShape(QFrame::Box);

        horizontalLayout_5->addWidget(lb_Battery_In_title);

        lb_Battery_Out_title = new QLabel(horizontalLayoutWidget_5);
        lb_Battery_Out_title->setObjectName(QString::fromUtf8("lb_Battery_Out_title"));
        lb_Battery_Out_title->setFont(font);
        lb_Battery_Out_title->setFrameShape(QFrame::Box);

        horizontalLayout_5->addWidget(lb_Battery_Out_title);

        lb_Battery_Cur_title = new QLabel(horizontalLayoutWidget_5);
        lb_Battery_Cur_title->setObjectName(QString::fromUtf8("lb_Battery_Cur_title"));
        lb_Battery_Cur_title->setFont(font);
        lb_Battery_Cur_title->setFrameShape(QFrame::Box);

        horizontalLayout_5->addWidget(lb_Battery_Cur_title);

        lb_Battery_Power_title = new QLabel(horizontalLayoutWidget_5);
        lb_Battery_Power_title->setObjectName(QString::fromUtf8("lb_Battery_Power_title"));
        lb_Battery_Power_title->setFont(font);
        lb_Battery_Power_title->setFrameShape(QFrame::Box);

        horizontalLayout_5->addWidget(lb_Battery_Power_title);

        lb_Battery_Total_power_title = new QLabel(horizontalLayoutWidget_5);
        lb_Battery_Total_power_title->setObjectName(QString::fromUtf8("lb_Battery_Total_power_title"));
        lb_Battery_Total_power_title->setFont(font);
        lb_Battery_Total_power_title->setFrameShape(QFrame::Box);

        horizontalLayout_5->addWidget(lb_Battery_Total_power_title);

        horizontalLayoutWidget_7 = new QWidget(tab_diagnosis);
        horizontalLayoutWidget_7->setObjectName(QString::fromUtf8("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(140, 330, 921, 21));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        lb_Battery_In = new QLabel(horizontalLayoutWidget_7);
        lb_Battery_In->setObjectName(QString::fromUtf8("lb_Battery_In"));
        lb_Battery_In->setFont(font);
        lb_Battery_In->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(lb_Battery_In);

        lb_Battery_Out = new QLabel(horizontalLayoutWidget_7);
        lb_Battery_Out->setObjectName(QString::fromUtf8("lb_Battery_Out"));
        lb_Battery_Out->setFont(font);
        lb_Battery_Out->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(lb_Battery_Out);

        lb_Battery_Cur = new QLabel(horizontalLayoutWidget_7);
        lb_Battery_Cur->setObjectName(QString::fromUtf8("lb_Battery_Cur"));
        lb_Battery_Cur->setFont(font);
        lb_Battery_Cur->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(lb_Battery_Cur);

        lb_Battery_Power = new QLabel(horizontalLayoutWidget_7);
        lb_Battery_Power->setObjectName(QString::fromUtf8("lb_Battery_Power"));
        lb_Battery_Power->setMaximumSize(QSize(8000000, 16777215));
        lb_Battery_Power->setFont(font);
        lb_Battery_Power->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(lb_Battery_Power);

        lb_Battery_Total_power = new QLabel(horizontalLayoutWidget_7);
        lb_Battery_Total_power->setObjectName(QString::fromUtf8("lb_Battery_Total_power"));
        lb_Battery_Total_power->setFont(font);
        lb_Battery_Total_power->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(lb_Battery_Total_power);

        horizontalLayoutWidget_8 = new QWidget(tab_diagnosis);
        horizontalLayoutWidget_8->setObjectName(QString::fromUtf8("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(140, 240, 921, 21));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        lb_PDU_Charge_title = new QLabel(horizontalLayoutWidget_8);
        lb_PDU_Charge_title->setObjectName(QString::fromUtf8("lb_PDU_Charge_title"));
        lb_PDU_Charge_title->setFont(font);
        lb_PDU_Charge_title->setFrameShape(QFrame::Box);

        horizontalLayout_8->addWidget(lb_PDU_Charge_title);

        lb_PDU_Emo_title = new QLabel(horizontalLayoutWidget_8);
        lb_PDU_Emo_title->setObjectName(QString::fromUtf8("lb_PDU_Emo_title"));
        lb_PDU_Emo_title->setFont(font);
        lb_PDU_Emo_title->setFrameShape(QFrame::Box);

        horizontalLayout_8->addWidget(lb_PDU_Emo_title);

        lb_PDU_Remote_title = new QLabel(horizontalLayoutWidget_8);
        lb_PDU_Remote_title->setObjectName(QString::fromUtf8("lb_PDU_Remote_title"));
        lb_PDU_Remote_title->setFont(font);
        lb_PDU_Remote_title->setFrameShape(QFrame::Box);

        horizontalLayout_8->addWidget(lb_PDU_Remote_title);

        lb_PDU_Ping_title = new QLabel(horizontalLayoutWidget_8);
        lb_PDU_Ping_title->setObjectName(QString::fromUtf8("lb_PDU_Ping_title"));
        lb_PDU_Ping_title->setMaximumSize(QSize(16777215, 16777215));
        lb_PDU_Ping_title->setFont(font);
        lb_PDU_Ping_title->setFrameShape(QFrame::Box);

        horizontalLayout_8->addWidget(lb_PDU_Ping_title);

        lb_PDU_Packet_title = new QLabel(horizontalLayoutWidget_8);
        lb_PDU_Packet_title->setObjectName(QString::fromUtf8("lb_PDU_Packet_title"));
        lb_PDU_Packet_title->setMaximumSize(QSize(16777215, 16777215));
        lb_PDU_Packet_title->setFont(font);
        lb_PDU_Packet_title->setFrameShape(QFrame::Box);

        horizontalLayout_8->addWidget(lb_PDU_Packet_title);

        horizontalLayoutWidget_9 = new QWidget(tab_diagnosis);
        horizontalLayoutWidget_9->setObjectName(QString::fromUtf8("horizontalLayoutWidget_9"));
        horizontalLayoutWidget_9->setGeometry(QRect(140, 260, 921, 21));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_9);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        lb_PDU_Charge = new QLabel(horizontalLayoutWidget_9);
        lb_PDU_Charge->setObjectName(QString::fromUtf8("lb_PDU_Charge"));
        lb_PDU_Charge->setMaximumSize(QSize(8000000, 16777215));
        lb_PDU_Charge->setFont(font);
        lb_PDU_Charge->setFrameShape(QFrame::Box);

        horizontalLayout_9->addWidget(lb_PDU_Charge);

        lb_PDU_Emo = new QLabel(horizontalLayoutWidget_9);
        lb_PDU_Emo->setObjectName(QString::fromUtf8("lb_PDU_Emo"));
        lb_PDU_Emo->setFont(font);
        lb_PDU_Emo->setFrameShape(QFrame::Box);

        horizontalLayout_9->addWidget(lb_PDU_Emo);

        lb_PDU_Remote = new QLabel(horizontalLayoutWidget_9);
        lb_PDU_Remote->setObjectName(QString::fromUtf8("lb_PDU_Remote"));
        lb_PDU_Remote->setFont(font);
        lb_PDU_Remote->setFrameShape(QFrame::Box);

        horizontalLayout_9->addWidget(lb_PDU_Remote);

        lb_PDU_Ping = new QLabel(horizontalLayoutWidget_9);
        lb_PDU_Ping->setObjectName(QString::fromUtf8("lb_PDU_Ping"));
        lb_PDU_Ping->setMaximumSize(QSize(16777215, 16777215));
        lb_PDU_Ping->setFont(font);
        lb_PDU_Ping->setFrameShape(QFrame::Box);

        horizontalLayout_9->addWidget(lb_PDU_Ping);

        lb_PDU_Packet = new QLabel(horizontalLayoutWidget_9);
        lb_PDU_Packet->setObjectName(QString::fromUtf8("lb_PDU_Packet"));
        lb_PDU_Packet->setFont(font);
        lb_PDU_Packet->setFrameShape(QFrame::Box);

        horizontalLayout_9->addWidget(lb_PDU_Packet);

        horizontalLayoutWidget_10 = new QWidget(tab_diagnosis);
        horizontalLayoutWidget_10->setObjectName(QString::fromUtf8("horizontalLayoutWidget_10"));
        horizontalLayoutWidget_10->setGeometry(QRect(140, 370, 921, 21));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_10);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        lb_Network_title = new QLabel(horizontalLayoutWidget_10);
        lb_Network_title->setObjectName(QString::fromUtf8("lb_Network_title"));
        lb_Network_title->setFont(font);
        lb_Network_title->setFrameShape(QFrame::Box);

        horizontalLayout_10->addWidget(lb_Network_title);

        lb_Network_Ip_title = new QLabel(horizontalLayoutWidget_10);
        lb_Network_Ip_title->setObjectName(QString::fromUtf8("lb_Network_Ip_title"));
        lb_Network_Ip_title->setFont(font);
        lb_Network_Ip_title->setFrameShape(QFrame::Box);

        horizontalLayout_10->addWidget(lb_Network_Ip_title);

        lb_Network_Strength_title = new QLabel(horizontalLayoutWidget_10);
        lb_Network_Strength_title->setObjectName(QString::fromUtf8("lb_Network_Strength_title"));
        lb_Network_Strength_title->setFont(font);
        lb_Network_Strength_title->setFrameShape(QFrame::Box);

        horizontalLayout_10->addWidget(lb_Network_Strength_title);

        horizontalLayoutWidget_11 = new QWidget(tab_diagnosis);
        horizontalLayoutWidget_11->setObjectName(QString::fromUtf8("horizontalLayoutWidget_11"));
        horizontalLayoutWidget_11->setGeometry(QRect(140, 390, 921, 21));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        lb_Network_ID = new QLabel(horizontalLayoutWidget_11);
        lb_Network_ID->setObjectName(QString::fromUtf8("lb_Network_ID"));
        lb_Network_ID->setFont(font);
        lb_Network_ID->setFrameShape(QFrame::Box);

        horizontalLayout_11->addWidget(lb_Network_ID);

        lb_Network_IP = new QLabel(horizontalLayoutWidget_11);
        lb_Network_IP->setObjectName(QString::fromUtf8("lb_Network_IP"));
        lb_Network_IP->setFont(font);
        lb_Network_IP->setFrameShape(QFrame::Box);

        horizontalLayout_11->addWidget(lb_Network_IP);

        lb_Network_Strength = new QLabel(horizontalLayoutWidget_11);
        lb_Network_Strength->setObjectName(QString::fromUtf8("lb_Network_Strength"));
        lb_Network_Strength->setFont(font);
        lb_Network_Strength->setFrameShape(QFrame::Box);

        horizontalLayout_11->addWidget(lb_Network_Strength);

        bt_Update = new QPushButton(tab_diagnosis);
        bt_Update->setObjectName(QString::fromUtf8("bt_Update"));
        bt_Update->setGeometry(QRect(950, 40, 91, 21));
        bt_Reset = new QPushButton(tab_diagnosis);
        bt_Reset->setObjectName(QString::fromUtf8("bt_Reset"));
        bt_Reset->setGeometry(QRect(210, 10, 61, 21));
        bt_CamConecTry = new QPushButton(tab_diagnosis);
        bt_CamConecTry->setObjectName(QString::fromUtf8("bt_CamConecTry"));
        bt_CamConecTry->setGeometry(QRect(650, 80, 121, 21));
        horizontalLayoutWidget_12 = new QWidget(tab_diagnosis);
        horizontalLayoutWidget_12->setObjectName(QString::fromUtf8("horizontalLayoutWidget_12"));
        horizontalLayoutWidget_12->setGeometry(QRect(140, 430, 921, 21));
        horizontalLayout_12 = new QHBoxLayout(horizontalLayoutWidget_12);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        lb_Network_Strength_title_2 = new QLabel(horizontalLayoutWidget_12);
        lb_Network_Strength_title_2->setObjectName(QString::fromUtf8("lb_Network_Strength_title_2"));
        lb_Network_Strength_title_2->setFont(font);
        lb_Network_Strength_title_2->setFrameShape(QFrame::Box);

        horizontalLayout_12->addWidget(lb_Network_Strength_title_2);

        horizontalLayoutWidget_13 = new QWidget(tab_diagnosis);
        horizontalLayoutWidget_13->setObjectName(QString::fromUtf8("horizontalLayoutWidget_13"));
        horizontalLayoutWidget_13->setGeometry(QRect(140, 450, 921, 21));
        horizontalLayout_13 = new QHBoxLayout(horizontalLayoutWidget_13);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        lb_Network_ID_2 = new QLabel(horizontalLayoutWidget_13);
        lb_Network_ID_2->setObjectName(QString::fromUtf8("lb_Network_ID_2"));
        lb_Network_ID_2->setFont(font);
        lb_Network_ID_2->setFrameShape(QFrame::Box);

        horizontalLayout_13->addWidget(lb_Network_ID_2);

        tabWidget->addTab(tab_diagnosis, QString());
        tab_ping = new QWidget();
        tab_ping->setObjectName(QString::fromUtf8("tab_ping"));
        lb_List_2 = new QLabel(tab_ping);
        lb_List_2->setObjectName(QString::fromUtf8("lb_List_2"));
        lb_List_2->setGeometry(QRect(20, 30, 51, 21));
        lb_List_2->setFont(font);
        lb_List_3 = new QLabel(tab_ping);
        lb_List_3->setObjectName(QString::fromUtf8("lb_List_3"));
        lb_List_3->setGeometry(QRect(10, 120, 51, 21));
        lb_List_3->setFont(font);
        lb_ping_pdu = new QLabel(tab_ping);
        lb_ping_pdu->setObjectName(QString::fromUtf8("lb_ping_pdu"));
        lb_ping_pdu->setGeometry(QRect(60, 30, 261, 71));
        QFont font1;
        font1.setPointSize(8);
        lb_ping_pdu->setFont(font1);
        lb_ping_pdu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lb_ping_pdu->setFrameShape(QFrame::Box);
        lb_ping_pdu->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lb_ping_lidar_1 = new QLabel(tab_ping);
        lb_ping_lidar_1->setObjectName(QString::fromUtf8("lb_ping_lidar_1"));
        lb_ping_lidar_1->setGeometry(QRect(60, 120, 261, 71));
        lb_ping_lidar_1->setFont(font1);
        lb_ping_lidar_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lb_ping_lidar_1->setFrameShape(QFrame::Box);
        lb_ping_lidar_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lb_ping_lidar_2 = new QLabel(tab_ping);
        lb_ping_lidar_2->setObjectName(QString::fromUtf8("lb_ping_lidar_2"));
        lb_ping_lidar_2->setGeometry(QRect(60, 200, 261, 71));
        lb_ping_lidar_2->setFont(font1);
        lb_ping_lidar_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lb_ping_lidar_2->setFrameShape(QFrame::Box);
        lb_ping_lidar_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lb_List_4 = new QLabel(tab_ping);
        lb_List_4->setObjectName(QString::fromUtf8("lb_List_4"));
        lb_List_4->setGeometry(QRect(10, 300, 61, 21));
        lb_List_4->setFont(font);
        tabWidget->addTab(tab_ping, QString());
        tab_auto = new QWidget();
        tab_auto->setObjectName(QString::fromUtf8("tab_auto"));
        verticalLayoutWidget = new QWidget(tab_auto);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(490, 10, 281, 381));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lb_auto_MobileStatusInfo = new QLabel(verticalLayoutWidget);
        lb_auto_MobileStatusInfo->setObjectName(QString::fromUtf8("lb_auto_MobileStatusInfo"));
        lb_auto_MobileStatusInfo->setFont(font1);
        lb_auto_MobileStatusInfo->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lb_auto_MobileStatusInfo->setFrameShape(QFrame::Box);
        lb_auto_MobileStatusInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(lb_auto_MobileStatusInfo);

        lb_auto_MobilePoseInfo = new QLabel(verticalLayoutWidget);
        lb_auto_MobilePoseInfo->setObjectName(QString::fromUtf8("lb_auto_MobilePoseInfo"));
        lb_auto_MobilePoseInfo->setFont(font1);
        lb_auto_MobilePoseInfo->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lb_auto_MobilePoseInfo->setFrameShape(QFrame::Box);
        lb_auto_MobilePoseInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(lb_auto_MobilePoseInfo);

        verticalLayoutWidget_2 = new QWidget(tab_auto);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(780, 10, 281, 381));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lb_Auto_Motor_Status = new QLabel(tab_auto);
        lb_Auto_Motor_Status->setObjectName(QString::fromUtf8("lb_Auto_Motor_Status"));
        lb_Auto_Motor_Status->setGeometry(QRect(10, 10, 91, 21));
        lb_Auto_Motor_Status->setFont(font);
        bt_Auto_Motor_Check = new QPushButton(tab_auto);
        bt_Auto_Motor_Check->setObjectName(QString::fromUtf8("bt_Auto_Motor_Check"));
        bt_Auto_Motor_Check->setGeometry(QRect(20, 100, 221, 31));
        bt_Auto_Emergency = new QPushButton(tab_auto);
        bt_Auto_Emergency->setObjectName(QString::fromUtf8("bt_Auto_Emergency"));
        bt_Auto_Emergency->setGeometry(QRect(290, 10, 191, 381));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(false);
        font2.setWeight(50);
        bt_Auto_Emergency->setFont(font2);
        bt_Auto_Emergency->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 97, 81);"));
        lb_Auto_dist = new QLabel(tab_auto);
        lb_Auto_dist->setObjectName(QString::fromUtf8("lb_Auto_dist"));
        lb_Auto_dist->setGeometry(QRect(20, 40, 31, 20));
        lb_Auto_eg = new QLabel(tab_auto);
        lb_Auto_eg->setObjectName(QString::fromUtf8("lb_Auto_eg"));
        lb_Auto_eg->setGeometry(QRect(20, 70, 31, 21));
        dsb_Auto_MoveRotateW = new QDoubleSpinBox(tab_auto);
        dsb_Auto_MoveRotateW->setObjectName(QString::fromUtf8("dsb_Auto_MoveRotateW"));
        dsb_Auto_MoveRotateW->setGeometry(QRect(180, 70, 65, 21));
        dsb_Auto_MoveRotateW->setMinimum(-180.000000000000000);
        dsb_Auto_MoveRotateW->setMaximum(180.000000000000000);
        dsb_Auto_MoveRotateW->setSingleStep(0.100000000000000);
        dsb_Auto_MoveRotateW->setValue(20.000000000000000);
        lb_Auto_v = new QLabel(tab_auto);
        lb_Auto_v->setObjectName(QString::fromUtf8("lb_Auto_v"));
        lb_Auto_v->setGeometry(QRect(160, 40, 21, 16));
        dsb_Auto_MoveLinearDist = new QDoubleSpinBox(tab_auto);
        dsb_Auto_MoveLinearDist->setObjectName(QString::fromUtf8("dsb_Auto_MoveLinearDist"));
        dsb_Auto_MoveLinearDist->setGeometry(QRect(60, 40, 71, 21));
        dsb_Auto_MoveLinearDist->setMinimum(-5.000000000000000);
        dsb_Auto_MoveLinearDist->setMaximum(5.000000000000000);
        dsb_Auto_MoveLinearDist->setSingleStep(0.010000000000000);
        dsb_Auto_MoveLinearDist->setValue(1.000000000000000);
        dsb_Auto_MoveLinearV = new QDoubleSpinBox(tab_auto);
        dsb_Auto_MoveLinearV->setObjectName(QString::fromUtf8("dsb_Auto_MoveLinearV"));
        dsb_Auto_MoveLinearV->setGeometry(QRect(180, 40, 65, 21));
        dsb_Auto_MoveLinearV->setMinimum(-1.500000000000000);
        dsb_Auto_MoveLinearV->setMaximum(1.500000000000000);
        dsb_Auto_MoveLinearV->setSingleStep(0.010000000000000);
        dsb_Auto_MoveLinearV->setValue(0.200000000000000);
        dsb_Auto_MoveRotateDeg = new QDoubleSpinBox(tab_auto);
        dsb_Auto_MoveRotateDeg->setObjectName(QString::fromUtf8("dsb_Auto_MoveRotateDeg"));
        dsb_Auto_MoveRotateDeg->setGeometry(QRect(60, 70, 71, 21));
        dsb_Auto_MoveRotateDeg->setMinimum(-180.000000000000000);
        dsb_Auto_MoveRotateDeg->setMaximum(180.000000000000000);
        dsb_Auto_MoveRotateDeg->setSingleStep(0.100000000000000);
        dsb_Auto_MoveRotateDeg->setValue(180.000000000000000);
        lb_Auto_w = new QLabel(tab_auto);
        lb_Auto_w->setObjectName(QString::fromUtf8("lb_Auto_w"));
        lb_Auto_w->setGeometry(QRect(160, 70, 21, 17));
        tabWidget->addTab(tab_auto, QString());
        tab_sensor = new QWidget();
        tab_sensor->setObjectName(QString::fromUtf8("tab_sensor"));
        tabWidget_sensor = new QTabWidget(tab_sensor);
        tabWidget_sensor->setObjectName(QString::fromUtf8("tabWidget_sensor"));
        tabWidget_sensor->setGeometry(QRect(260, 0, 811, 431));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget_sensor->sizePolicy().hasHeightForWidth());
        tabWidget_sensor->setSizePolicy(sizePolicy1);
        tabWidget_sensor->setMinimumSize(QSize(330, 200));
        tabWidget_sensor->setFont(font1);
        tab_Lidar = new QWidget();
        tab_Lidar->setObjectName(QString::fromUtf8("tab_Lidar"));
        qvtkWidget = new QVTKOpenGLNativeWidget(tab_Lidar);
        qvtkWidget->setObjectName(QString::fromUtf8("qvtkWidget"));
        qvtkWidget->setGeometry(QRect(0, 0, 801, 401));
        qvtkWidget->setFont(font1);
        qvtkWidget->setMouseTracking(false);
        qvtkWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tabWidget_sensor->addTab(tab_Lidar, QString());
        tab_Camera = new QWidget();
        tab_Camera->setObjectName(QString::fromUtf8("tab_Camera"));
        lb_CodeInfo = new QLabel(tab_Camera);
        lb_CodeInfo->setObjectName(QString::fromUtf8("lb_CodeInfo"));
        lb_CodeInfo->setGeometry(QRect(30, 250, 201, 41));
        lb_Screen1 = new QLabel(tab_Camera);
        lb_Screen1->setObjectName(QString::fromUtf8("lb_Screen1"));
        lb_Screen1->setGeometry(QRect(0, 0, 180, 180));
        lb_Screen1->setFont(font1);
        lb_Screen1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        lb_Camera_Right = new QLabel(tab_Camera);
        lb_Camera_Right->setObjectName(QString::fromUtf8("lb_Camera_Right"));
        lb_Camera_Right->setGeometry(QRect(350, 0, 160, 90));
        lb_Camera_Right->setFont(font1);
        lb_Camera_Right->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        lb_Camera_Left = new QLabel(tab_Camera);
        lb_Camera_Left->setObjectName(QString::fromUtf8("lb_Camera_Left"));
        lb_Camera_Left->setGeometry(QRect(190, 0, 160, 90));
        lb_Camera_Left->setFont(font1);
        lb_Camera_Left->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        bt_CameraChange = new QPushButton(tab_Camera);
        bt_CameraChange->setObjectName(QString::fromUtf8("bt_CameraChange"));
        bt_CameraChange->setGeometry(QRect(520, 10, 89, 25));
        tabWidget_sensor->addTab(tab_Camera, QString());
        verticalLayoutWidget_6 = new QWidget(tab_sensor);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(-10, 0, 271, 431));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(tab_sensor, QString());
        tab_system = new QWidget();
        tab_system->setObjectName(QString::fromUtf8("tab_system"));
        tabWidget_system = new QTabWidget(tab_system);
        tabWidget_system->setObjectName(QString::fromUtf8("tabWidget_system"));
        tabWidget_system->setGeometry(QRect(260, 0, 811, 431));
        sizePolicy1.setHeightForWidth(tabWidget_system->sizePolicy().hasHeightForWidth());
        tabWidget_system->setSizePolicy(sizePolicy1);
        tabWidget_system->setMinimumSize(QSize(330, 200));
        tabWidget_system->setFont(font1);
        tab_motor = new QWidget();
        tab_motor->setObjectName(QString::fromUtf8("tab_motor"));
        spb_AccV = new QDoubleSpinBox(tab_motor);
        spb_AccV->setObjectName(QString::fromUtf8("spb_AccV"));
        spb_AccV->setGeometry(QRect(140, 300, 51, 21));
        spb_AccV->setFont(font1);
        spb_AccV->setDecimals(1);
        spb_AccV->setMaximum(120.000000000000000);
        spb_AccV->setSingleStep(0.100000000000000);
        spb_AccV->setValue(0.300000000000000);
        bt_JogL = new QPushButton(tab_motor);
        bt_JogL->setObjectName(QString::fromUtf8("bt_JogL"));
        bt_JogL->setGeometry(QRect(10, 320, 41, 41));
        bt_JogL->setFont(font1);
        bt_JogL->setAutoRepeat(false);
        bt_JogL->setAutoRepeatDelay(100);
        bt_JogF = new QPushButton(tab_motor);
        bt_JogF->setObjectName(QString::fromUtf8("bt_JogF"));
        bt_JogF->setGeometry(QRect(50, 280, 41, 41));
        bt_JogF->setFont(font1);
        bt_JogF->setAutoRepeat(false);
        bt_JogF->setAutoRepeatDelay(100);
        spb_JogV = new QDoubleSpinBox(tab_motor);
        spb_JogV->setObjectName(QString::fromUtf8("spb_JogV"));
        spb_JogV->setGeometry(QRect(140, 280, 101, 20));
        spb_JogV->setFont(font1);
        spb_JogV->setMaximum(2.000000000000000);
        spb_JogV->setSingleStep(0.100000000000000);
        spb_JogV->setValue(1.000000000000000);
        bt_MotorInit = new QPushButton(tab_motor);
        bt_MotorInit->setObjectName(QString::fromUtf8("bt_MotorInit"));
        bt_MotorInit->setGeometry(QRect(10, 280, 31, 31));
        bt_MotorInit->setFont(font1);
        bt_Emergency = new QPushButton(tab_motor);
        bt_Emergency->setObjectName(QString::fromUtf8("bt_Emergency"));
        bt_Emergency->setGeometry(QRect(250, 280, 71, 81));
        bt_Emergency->setFont(font2);
        bt_Emergency->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 97, 81);"));
        bt_JogB = new QPushButton(tab_motor);
        bt_JogB->setObjectName(QString::fromUtf8("bt_JogB"));
        bt_JogB->setGeometry(QRect(50, 320, 41, 41));
        bt_JogB->setFont(font1);
        bt_JogB->setAutoRepeat(false);
        bt_JogB->setAutoRepeatDelay(100);
        spb_DecelW = new QDoubleSpinBox(tab_motor);
        spb_DecelW->setObjectName(QString::fromUtf8("spb_DecelW"));
        spb_DecelW->setGeometry(QRect(190, 340, 51, 21));
        spb_DecelW->setFont(font1);
        spb_DecelW->setDecimals(1);
        spb_DecelW->setMaximum(120.000000000000000);
        spb_DecelW->setSingleStep(5.000000000000000);
        spb_DecelW->setValue(60.000000000000000);
        spb_JogW = new QDoubleSpinBox(tab_motor);
        spb_JogW->setObjectName(QString::fromUtf8("spb_JogW"));
        spb_JogW->setGeometry(QRect(140, 320, 101, 21));
        spb_JogW->setFont(font1);
        spb_JogW->setMaximum(120.000000000000000);
        spb_JogW->setValue(45.000000000000000);
        spb_DecelV = new QDoubleSpinBox(tab_motor);
        spb_DecelV->setObjectName(QString::fromUtf8("spb_DecelV"));
        spb_DecelV->setGeometry(QRect(190, 300, 51, 21));
        spb_DecelV->setFont(font1);
        spb_DecelV->setDecimals(1);
        spb_DecelV->setMaximum(120.000000000000000);
        spb_DecelV->setSingleStep(0.100000000000000);
        spb_DecelV->setValue(0.600000000000000);
        spb_AccW = new QDoubleSpinBox(tab_motor);
        spb_AccW->setObjectName(QString::fromUtf8("spb_AccW"));
        spb_AccW->setGeometry(QRect(140, 340, 51, 21));
        spb_AccW->setFont(font1);
        spb_AccW->setDecimals(1);
        spb_AccW->setMaximum(120.000000000000000);
        spb_AccW->setSingleStep(5.000000000000000);
        spb_AccW->setValue(30.000000000000000);
        bt_JogR = new QPushButton(tab_motor);
        bt_JogR->setObjectName(QString::fromUtf8("bt_JogR"));
        bt_JogR->setGeometry(QRect(90, 320, 41, 41));
        bt_JogR->setFont(font1);
        bt_JogR->setAutoRepeat(false);
        bt_JogR->setAutoRepeatDelay(100);
        lb_w = new QLabel(tab_motor);
        lb_w->setObjectName(QString::fromUtf8("lb_w"));
        lb_w->setGeometry(QRect(120, 50, 21, 17));
        lb_dist = new QLabel(tab_motor);
        lb_dist->setObjectName(QString::fromUtf8("lb_dist"));
        lb_dist->setGeometry(QRect(10, 20, 31, 20));
        lb_v = new QLabel(tab_motor);
        lb_v->setObjectName(QString::fromUtf8("lb_v"));
        lb_v->setGeometry(QRect(120, 20, 21, 16));
        dsb_MoveRotateW = new QDoubleSpinBox(tab_motor);
        dsb_MoveRotateW->setObjectName(QString::fromUtf8("dsb_MoveRotateW"));
        dsb_MoveRotateW->setGeometry(QRect(140, 50, 65, 21));
        dsb_MoveRotateW->setMinimum(-180.000000000000000);
        dsb_MoveRotateW->setMaximum(180.000000000000000);
        dsb_MoveRotateW->setSingleStep(0.100000000000000);
        bt_MoveLinear = new QPushButton(tab_motor);
        bt_MoveLinear->setObjectName(QString::fromUtf8("bt_MoveLinear"));
        bt_MoveLinear->setGeometry(QRect(210, 20, 91, 20));
        bt_MoveRotate = new QPushButton(tab_motor);
        bt_MoveRotate->setObjectName(QString::fromUtf8("bt_MoveRotate"));
        bt_MoveRotate->setGeometry(QRect(210, 50, 91, 21));
        dsb_MoveLinearDist = new QDoubleSpinBox(tab_motor);
        dsb_MoveLinearDist->setObjectName(QString::fromUtf8("dsb_MoveLinearDist"));
        dsb_MoveLinearDist->setGeometry(QRect(40, 20, 65, 21));
        dsb_MoveLinearDist->setMinimum(-5.000000000000000);
        dsb_MoveLinearDist->setMaximum(5.000000000000000);
        dsb_MoveLinearDist->setSingleStep(0.010000000000000);
        dsb_MoveRotateDeg = new QDoubleSpinBox(tab_motor);
        dsb_MoveRotateDeg->setObjectName(QString::fromUtf8("dsb_MoveRotateDeg"));
        dsb_MoveRotateDeg->setGeometry(QRect(40, 50, 65, 21));
        dsb_MoveRotateDeg->setMinimum(-180.000000000000000);
        dsb_MoveRotateDeg->setMaximum(180.000000000000000);
        dsb_MoveRotateDeg->setSingleStep(0.100000000000000);
        dsb_MoveLinearV = new QDoubleSpinBox(tab_motor);
        dsb_MoveLinearV->setObjectName(QString::fromUtf8("dsb_MoveLinearV"));
        dsb_MoveLinearV->setGeometry(QRect(140, 20, 65, 21));
        dsb_MoveLinearV->setMinimum(-1.500000000000000);
        dsb_MoveLinearV->setMaximum(1.500000000000000);
        dsb_MoveLinearV->setSingleStep(0.010000000000000);
        lb_deg = new QLabel(tab_motor);
        lb_deg->setObjectName(QString::fromUtf8("lb_deg"));
        lb_deg->setGeometry(QRect(10, 50, 31, 21));
        bt_JoystickConnection = new QPushButton(tab_motor);
        bt_JoystickConnection->setObjectName(QString::fromUtf8("bt_JoystickConnection"));
        bt_JoystickConnection->setGeometry(QRect(20, 100, 281, 41));
        tabWidget_system->addTab(tab_motor, QString());
        tab_battery = new QWidget();
        tab_battery->setObjectName(QString::fromUtf8("tab_battery"));
        tabWidget_system->addTab(tab_battery, QString());
        tab_network = new QWidget();
        tab_network->setObjectName(QString::fromUtf8("tab_network"));
        tabWidget_system->addTab(tab_network, QString());
        verticalLayoutWidget_7 = new QWidget(tab_system);
        verticalLayoutWidget_7->setObjectName(QString::fromUtf8("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(0, 0, 261, 431));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        lb_SystemInfo = new QLabel(verticalLayoutWidget_7);
        lb_SystemInfo->setObjectName(QString::fromUtf8("lb_SystemInfo"));
        lb_SystemInfo->setFont(font1);
        lb_SystemInfo->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lb_SystemInfo->setFrameShape(QFrame::Box);
        lb_SystemInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_8->addWidget(lb_SystemInfo);

        lb_MobilePoseInfo = new QLabel(verticalLayoutWidget_7);
        lb_MobilePoseInfo->setObjectName(QString::fromUtf8("lb_MobilePoseInfo"));
        lb_MobilePoseInfo->setFont(font1);
        lb_MobilePoseInfo->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lb_MobilePoseInfo->setFrameShape(QFrame::Box);
        lb_MobilePoseInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_8->addWidget(lb_MobilePoseInfo);

        lb_MobileStatusInfo = new QLabel(verticalLayoutWidget_7);
        lb_MobileStatusInfo->setObjectName(QString::fromUtf8("lb_MobileStatusInfo"));
        lb_MobileStatusInfo->setFont(font1);
        lb_MobileStatusInfo->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lb_MobileStatusInfo->setFrameShape(QFrame::Box);
        lb_MobileStatusInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_8->addWidget(lb_MobileStatusInfo);

        tabWidget->addTab(tab_system, QString());
        tab_indicator = new QWidget();
        tab_indicator->setObjectName(QString::fromUtf8("tab_indicator"));
        tabWidget_Indicator_Display = new QTabWidget(tab_indicator);
        tabWidget_Indicator_Display->setObjectName(QString::fromUtf8("tabWidget_Indicator_Display"));
        tabWidget_Indicator_Display->setGeometry(QRect(260, 0, 811, 431));
        sizePolicy1.setHeightForWidth(tabWidget_Indicator_Display->sizePolicy().hasHeightForWidth());
        tabWidget_Indicator_Display->setSizePolicy(sizePolicy1);
        tabWidget_Indicator_Display->setMinimumSize(QSize(330, 200));
        tabWidget_Indicator_Display->setFont(font1);
        tab_led = new QWidget();
        tab_led->setObjectName(QString::fromUtf8("tab_led"));
        bt_TestLed = new QPushButton(tab_led);
        bt_TestLed->setObjectName(QString::fromUtf8("bt_TestLed"));
        bt_TestLed->setGeometry(QRect(230, 10, 71, 20));
        spb_Led = new QSpinBox(tab_led);
        spb_Led->setObjectName(QString::fromUtf8("spb_Led"));
        spb_Led->setGeometry(QRect(180, 9, 44, 21));
        spb_Led->setMaximum(14);
        lb_CodeInfo_4 = new QLabel(tab_led);
        lb_CodeInfo_4->setObjectName(QString::fromUtf8("lb_CodeInfo_4"));
        lb_CodeInfo_4->setGeometry(QRect(10, 10, 81, 21));
        bt_TestLed_loop = new QPushButton(tab_led);
        bt_TestLed_loop->setObjectName(QString::fromUtf8("bt_TestLed_loop"));
        bt_TestLed_loop->setGeometry(QRect(310, 10, 71, 20));
        verticalLayoutWidget_3 = new QWidget(tab_led);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(40, 40, 143, 361));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lb_CodeInfo_5 = new QLabel(verticalLayoutWidget_3);
        lb_CodeInfo_5->setObjectName(QString::fromUtf8("lb_CodeInfo_5"));

        verticalLayout_3->addWidget(lb_CodeInfo_5);

        lb_CodeInfo_6 = new QLabel(verticalLayoutWidget_3);
        lb_CodeInfo_6->setObjectName(QString::fromUtf8("lb_CodeInfo_6"));

        verticalLayout_3->addWidget(lb_CodeInfo_6);

        lb_CodeInfo_7 = new QLabel(verticalLayoutWidget_3);
        lb_CodeInfo_7->setObjectName(QString::fromUtf8("lb_CodeInfo_7"));

        verticalLayout_3->addWidget(lb_CodeInfo_7);

        lb_CodeInfo_8 = new QLabel(verticalLayoutWidget_3);
        lb_CodeInfo_8->setObjectName(QString::fromUtf8("lb_CodeInfo_8"));

        verticalLayout_3->addWidget(lb_CodeInfo_8);

        lb_CodeInfo_9 = new QLabel(verticalLayoutWidget_3);
        lb_CodeInfo_9->setObjectName(QString::fromUtf8("lb_CodeInfo_9"));

        verticalLayout_3->addWidget(lb_CodeInfo_9);

        lb_CodeInfo_10 = new QLabel(verticalLayoutWidget_3);
        lb_CodeInfo_10->setObjectName(QString::fromUtf8("lb_CodeInfo_10"));

        verticalLayout_3->addWidget(lb_CodeInfo_10);

        lb_CodeInfo_11 = new QLabel(verticalLayoutWidget_3);
        lb_CodeInfo_11->setObjectName(QString::fromUtf8("lb_CodeInfo_11"));

        verticalLayout_3->addWidget(lb_CodeInfo_11);

        lb_CodeInfo_12 = new QLabel(verticalLayoutWidget_3);
        lb_CodeInfo_12->setObjectName(QString::fromUtf8("lb_CodeInfo_12"));

        verticalLayout_3->addWidget(lb_CodeInfo_12);

        lb_CodeInfo_13 = new QLabel(verticalLayoutWidget_3);
        lb_CodeInfo_13->setObjectName(QString::fromUtf8("lb_CodeInfo_13"));

        verticalLayout_3->addWidget(lb_CodeInfo_13);

        lb_CodeInfo_14 = new QLabel(verticalLayoutWidget_3);
        lb_CodeInfo_14->setObjectName(QString::fromUtf8("lb_CodeInfo_14"));

        verticalLayout_3->addWidget(lb_CodeInfo_14);

        lb_CodeInfo_15 = new QLabel(verticalLayoutWidget_3);
        lb_CodeInfo_15->setObjectName(QString::fromUtf8("lb_CodeInfo_15"));

        verticalLayout_3->addWidget(lb_CodeInfo_15);

        lb_CodeInfo_16 = new QLabel(verticalLayoutWidget_3);
        lb_CodeInfo_16->setObjectName(QString::fromUtf8("lb_CodeInfo_16"));

        verticalLayout_3->addWidget(lb_CodeInfo_16);

        lb_CodeInfo_17 = new QLabel(verticalLayoutWidget_3);
        lb_CodeInfo_17->setObjectName(QString::fromUtf8("lb_CodeInfo_17"));

        verticalLayout_3->addWidget(lb_CodeInfo_17);

        lb_CodeInfo_18 = new QLabel(verticalLayoutWidget_3);
        lb_CodeInfo_18->setObjectName(QString::fromUtf8("lb_CodeInfo_18"));

        verticalLayout_3->addWidget(lb_CodeInfo_18);

        lb_CodeInfo_19 = new QLabel(verticalLayoutWidget_3);
        lb_CodeInfo_19->setObjectName(QString::fromUtf8("lb_CodeInfo_19"));

        verticalLayout_3->addWidget(lb_CodeInfo_19);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_16);

        verticalLayoutWidget_4 = new QWidget(tab_led);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(10, 40, 22, 361));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lb_CodeInfo_20 = new QLabel(verticalLayoutWidget_4);
        lb_CodeInfo_20->setObjectName(QString::fromUtf8("lb_CodeInfo_20"));

        verticalLayout_4->addWidget(lb_CodeInfo_20);

        lb_CodeInfo_21 = new QLabel(verticalLayoutWidget_4);
        lb_CodeInfo_21->setObjectName(QString::fromUtf8("lb_CodeInfo_21"));

        verticalLayout_4->addWidget(lb_CodeInfo_21);

        lb_CodeInfo_22 = new QLabel(verticalLayoutWidget_4);
        lb_CodeInfo_22->setObjectName(QString::fromUtf8("lb_CodeInfo_22"));

        verticalLayout_4->addWidget(lb_CodeInfo_22);

        lb_CodeInfo_23 = new QLabel(verticalLayoutWidget_4);
        lb_CodeInfo_23->setObjectName(QString::fromUtf8("lb_CodeInfo_23"));

        verticalLayout_4->addWidget(lb_CodeInfo_23);

        lb_CodeInfo_24 = new QLabel(verticalLayoutWidget_4);
        lb_CodeInfo_24->setObjectName(QString::fromUtf8("lb_CodeInfo_24"));

        verticalLayout_4->addWidget(lb_CodeInfo_24);

        lb_CodeInfo_25 = new QLabel(verticalLayoutWidget_4);
        lb_CodeInfo_25->setObjectName(QString::fromUtf8("lb_CodeInfo_25"));

        verticalLayout_4->addWidget(lb_CodeInfo_25);

        lb_CodeInfo_26 = new QLabel(verticalLayoutWidget_4);
        lb_CodeInfo_26->setObjectName(QString::fromUtf8("lb_CodeInfo_26"));

        verticalLayout_4->addWidget(lb_CodeInfo_26);

        lb_CodeInfo_27 = new QLabel(verticalLayoutWidget_4);
        lb_CodeInfo_27->setObjectName(QString::fromUtf8("lb_CodeInfo_27"));

        verticalLayout_4->addWidget(lb_CodeInfo_27);

        lb_CodeInfo_28 = new QLabel(verticalLayoutWidget_4);
        lb_CodeInfo_28->setObjectName(QString::fromUtf8("lb_CodeInfo_28"));

        verticalLayout_4->addWidget(lb_CodeInfo_28);

        lb_CodeInfo_29 = new QLabel(verticalLayoutWidget_4);
        lb_CodeInfo_29->setObjectName(QString::fromUtf8("lb_CodeInfo_29"));

        verticalLayout_4->addWidget(lb_CodeInfo_29);

        lb_CodeInfo_30 = new QLabel(verticalLayoutWidget_4);
        lb_CodeInfo_30->setObjectName(QString::fromUtf8("lb_CodeInfo_30"));

        verticalLayout_4->addWidget(lb_CodeInfo_30);

        lb_CodeInfo_31 = new QLabel(verticalLayoutWidget_4);
        lb_CodeInfo_31->setObjectName(QString::fromUtf8("lb_CodeInfo_31"));

        verticalLayout_4->addWidget(lb_CodeInfo_31);

        lb_CodeInfo_32 = new QLabel(verticalLayoutWidget_4);
        lb_CodeInfo_32->setObjectName(QString::fromUtf8("lb_CodeInfo_32"));

        verticalLayout_4->addWidget(lb_CodeInfo_32);

        lb_CodeInfo_33 = new QLabel(verticalLayoutWidget_4);
        lb_CodeInfo_33->setObjectName(QString::fromUtf8("lb_CodeInfo_33"));

        verticalLayout_4->addWidget(lb_CodeInfo_33);

        lb_CodeInfo_34 = new QLabel(verticalLayoutWidget_4);
        lb_CodeInfo_34->setObjectName(QString::fromUtf8("lb_CodeInfo_34"));

        verticalLayout_4->addWidget(lb_CodeInfo_34);

        verticalSpacer_17 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_17);

        tabWidget_Indicator_Display->addTab(tab_led, QString());
        tab_sound = new QWidget();
        tab_sound->setObjectName(QString::fromUtf8("tab_sound"));
        bt_ClickSound = new QPushButton(tab_sound);
        bt_ClickSound->setObjectName(QString::fromUtf8("bt_ClickSound"));
        bt_ClickSound->setGeometry(QRect(20, 10, 61, 41));
        lb_CodeInfo_3 = new QLabel(tab_sound);
        lb_CodeInfo_3->setObjectName(QString::fromUtf8("lb_CodeInfo_3"));
        lb_CodeInfo_3->setGeometry(QRect(20, 110, 201, 41));
        tabWidget_Indicator_Display->addTab(tab_sound, QString());
        tab_display = new QWidget();
        tab_display->setObjectName(QString::fromUtf8("tab_display"));
        tabWidget_Indicator_Display->addTab(tab_display, QString());
        verticalLayoutWidget_5 = new QWidget(tab_indicator);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(-40, 0, 301, 431));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(tab_indicator, QString());
        tab_server = new QWidget();
        tab_server->setObjectName(QString::fromUtf8("tab_server"));
        tabWidget->addTab(tab_server, QString());
        tab_test = new QWidget();
        tab_test->setObjectName(QString::fromUtf8("tab_test"));
        bt_Test = new QPushButton(tab_test);
        bt_Test->setObjectName(QString::fromUtf8("bt_Test"));
        bt_Test->setGeometry(QRect(70, 30, 41, 31));
        bt_Sync = new QPushButton(tab_test);
        bt_Sync->setObjectName(QString::fromUtf8("bt_Sync"));
        bt_Sync->setGeometry(QRect(20, 30, 41, 31));
        bt_StatusCheck = new QPushButton(tab_test);
        bt_StatusCheck->setObjectName(QString::fromUtf8("bt_StatusCheck"));
        bt_StatusCheck->setGeometry(QRect(250, 30, 121, 31));
        ckb_TestDebug = new QCheckBox(tab_test);
        ckb_TestDebug->setObjectName(QString::fromUtf8("ckb_TestDebug"));
        ckb_TestDebug->setGeometry(QRect(230, 130, 92, 20));
        bt_TestImgSave = new QPushButton(tab_test);
        bt_TestImgSave->setObjectName(QString::fromUtf8("bt_TestImgSave"));
        bt_TestImgSave->setGeometry(QRect(150, 130, 71, 20));
        tabWidget->addTab(tab_test, QString());
        bt_Connection = new QPushButton(centralwidget);
        bt_Connection->setObjectName(QString::fromUtf8("bt_Connection"));
        bt_Connection->setGeometry(QRect(190, 10, 91, 21));
        cb_RobotType = new QComboBox(centralwidget);
        cb_RobotType->addItem(QString());
        cb_RobotType->addItem(QString());
        cb_RobotType->addItem(QString());
        cb_RobotType->addItem(QString());
        cb_RobotType->setObjectName(QString::fromUtf8("cb_RobotType"));
        cb_RobotType->setGeometry(QRect(100, 10, 81, 22));
        cb_RobotType->setFont(font1);
        lb_RobotType = new QLabel(centralwidget);
        lb_RobotType->setObjectName(QString::fromUtf8("lb_RobotType"));
        lb_RobotType->setGeometry(QRect(10, 10, 81, 21));
        lb_RobotType->setFont(font);
        ckb_Lidar = new QCheckBox(centralwidget);
        ckb_Lidar->setObjectName(QString::fromUtf8("ckb_Lidar"));
        ckb_Lidar->setGeometry(QRect(410, 10, 61, 23));
        ckb_Lidar->setChecked(false);
        ckb_Mobile = new QCheckBox(centralwidget);
        ckb_Mobile->setObjectName(QString::fromUtf8("ckb_Mobile"));
        ckb_Mobile->setGeometry(QRect(530, 10, 71, 23));
        ckb_Mobile->setChecked(false);
        ckb_Cam = new QCheckBox(centralwidget);
        ckb_Cam->setObjectName(QString::fromUtf8("ckb_Cam"));
        ckb_Cam->setGeometry(QRect(470, 10, 51, 23));
        ckb_Cam->setChecked(false);
        ckb_Joystick = new QCheckBox(centralwidget);
        ckb_Joystick->setObjectName(QString::fromUtf8("ckb_Joystick"));
        ckb_Joystick->setGeometry(QRect(600, 10, 81, 23));
        ckb_Joystick->setChecked(false);
        bt_Disconnection = new QPushButton(centralwidget);
        bt_Disconnection->setObjectName(QString::fromUtf8("bt_Disconnection"));
        bt_Disconnection->setGeometry(QRect(290, 10, 111, 21));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(7);
        tabWidget_sensor->setCurrentIndex(1);
        tabWidget_system->setCurrentIndex(0);
        tabWidget_Indicator_Display->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lb_Status_PF_Sensor->setText(QCoreApplication::translate("MainWindow", "P/F", nullptr));
        lb_Status_PF_Motor->setText(QCoreApplication::translate("MainWindow", "P/F", nullptr));
        lb_Status_PF_PDU->setText(QCoreApplication::translate("MainWindow", "P/F", nullptr));
        lb_Status_PF_Battery->setText(QCoreApplication::translate("MainWindow", "P/F", nullptr));
        lb_Status_PF_Network->setText(QCoreApplication::translate("MainWindow", "P/F", nullptr));
        lb_Status_PF_Network_2->setText(QCoreApplication::translate("MainWindow", "P/F", nullptr));
        bt_Check->setText(QCoreApplication::translate("MainWindow", "Check", nullptr));
        lb_RobotType_4->setText(QCoreApplication::translate("MainWindow", "Version:1.0.0", nullptr));
        bt_Save->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        lb_List_Sensor->setText(QCoreApplication::translate("MainWindow", "Sensor", nullptr));
        lb_List_Motor->setText(QCoreApplication::translate("MainWindow", "Motor", nullptr));
        lb_List_PDU->setText(QCoreApplication::translate("MainWindow", "PDU", nullptr));
        lb_List_Battery->setText(QCoreApplication::translate("MainWindow", "Battery", nullptr));
        lb_List_Network->setText(QCoreApplication::translate("MainWindow", "Network", nullptr));
        lb_List_Network_2->setText(QCoreApplication::translate("MainWindow", "SLAMNAV", nullptr));
        lb_Status->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        lb_List->setText(QCoreApplication::translate("MainWindow", "List", nullptr));
        lb_Info->setText(QCoreApplication::translate("MainWindow", "Info", nullptr));
        lb_Lidar_Front->setText(QCoreApplication::translate("MainWindow", "Lidar Front", nullptr));
        lb_Lidar_Back->setText(QCoreApplication::translate("MainWindow", "Lidar Back", nullptr));
        lb_Lidar_Bottom->setText(QCoreApplication::translate("MainWindow", "Bottom", nullptr));
        lb_Cam_Left->setText(QCoreApplication::translate("MainWindow", "Cam Left", nullptr));
        lb_Cam_Right->setText(QCoreApplication::translate("MainWindow", "Cam Right", nullptr));
        lb_Cam_QR->setText(QCoreApplication::translate("MainWindow", "QR", nullptr));
        lb_RobotType_29->setText(QCoreApplication::translate("MainWindow", "Lidar", nullptr));
        lb_RobotType_30->setText(QCoreApplication::translate("MainWindow", "Cam", nullptr));
        lb_Motor_0->setText(QCoreApplication::translate("MainWindow", "0(Right/Front_Left)", nullptr));
        lb_Motor_1->setText(QCoreApplication::translate("MainWindow", "1(Left/Front_Right)", nullptr));
        lb_Motor_2->setText(QCoreApplication::translate("MainWindow", "2(Rear_Left)", nullptr));
        lb_Motor_3->setText(QCoreApplication::translate("MainWindow", "3(Rear_Right)", nullptr));
        lb_Motor_Connection_title->setText(QCoreApplication::translate("MainWindow", "Connection", nullptr));
        lb_Motor_Status_title->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        lb_Motor_Temp_title->setText(QCoreApplication::translate("MainWindow", "Temp", nullptr));
        lb_Motor_Cur_title->setText(QCoreApplication::translate("MainWindow", "Cur", nullptr));
        lb_Motor_Core_temp_title->setText(QCoreApplication::translate("MainWindow", "Core_temp", nullptr));
        lb_Motor_Connection->setText(QCoreApplication::translate("MainWindow", "0,0,0,0", nullptr));
        lb_Motor_Status->setText(QCoreApplication::translate("MainWindow", "0,0,0,0", nullptr));
        lb_Motor_Temp->setText(QCoreApplication::translate("MainWindow", "0,0,0,0", nullptr));
        lb_Motor_Cur->setText(QCoreApplication::translate("MainWindow", "0,0,0,0", nullptr));
        lb_Motor_Core_temp->setText(QCoreApplication::translate("MainWindow", "0,0,0,0,state", nullptr));
        lb_Battery_In_title->setText(QCoreApplication::translate("MainWindow", "In", nullptr));
        lb_Battery_Out_title->setText(QCoreApplication::translate("MainWindow", "Out", nullptr));
        lb_Battery_Cur_title->setText(QCoreApplication::translate("MainWindow", "Cur", nullptr));
        lb_Battery_Power_title->setText(QCoreApplication::translate("MainWindow", "Power", nullptr));
        lb_Battery_Total_power_title->setText(QCoreApplication::translate("MainWindow", "Total_power", nullptr));
        lb_Battery_In->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lb_Battery_Out->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lb_Battery_Cur->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lb_Battery_Power->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lb_Battery_Total_power->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lb_PDU_Charge_title->setText(QCoreApplication::translate("MainWindow", "Charge", nullptr));
        lb_PDU_Emo_title->setText(QCoreApplication::translate("MainWindow", "Emo", nullptr));
        lb_PDU_Remote_title->setText(QCoreApplication::translate("MainWindow", "Remote", nullptr));
        lb_PDU_Ping_title->setText(QCoreApplication::translate("MainWindow", "Ping", nullptr));
        lb_PDU_Packet_title->setText(QCoreApplication::translate("MainWindow", "Packet size", nullptr));
        lb_PDU_Charge->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lb_PDU_Emo->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lb_PDU_Remote->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lb_PDU_Ping->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lb_PDU_Packet->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lb_Network_title->setText(QCoreApplication::translate("MainWindow", "Network", nullptr));
        lb_Network_Ip_title->setText(QCoreApplication::translate("MainWindow", "IP", nullptr));
        lb_Network_Strength_title->setText(QCoreApplication::translate("MainWindow", "Strength", nullptr));
        lb_Network_ID->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        lb_Network_IP->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        lb_Network_Strength->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        bt_Update->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        bt_Reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        bt_CamConecTry->setText(QCoreApplication::translate("MainWindow", "Connection try", nullptr));
        lb_Network_Strength_title_2->setText(QCoreApplication::translate("MainWindow", "SLAMNAV", nullptr));
        lb_Network_ID_2->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_diagnosis), QCoreApplication::translate("MainWindow", "Diagnosis", nullptr));
        lb_List_2->setText(QCoreApplication::translate("MainWindow", "PDU", nullptr));
        lb_List_3->setText(QCoreApplication::translate("MainWindow", "Lidar", nullptr));
        lb_ping_pdu->setText(QCoreApplication::translate("MainWindow", "[MOBILE_POSE]", nullptr));
        lb_ping_lidar_1->setText(QCoreApplication::translate("MainWindow", "[MOBILE_POSE]", nullptr));
        lb_ping_lidar_2->setText(QCoreApplication::translate("MainWindow", "[MOBILE_POSE]", nullptr));
        lb_List_4->setText(QCoreApplication::translate("MainWindow", "Network", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_ping), QCoreApplication::translate("MainWindow", "Ping", nullptr));
        lb_auto_MobileStatusInfo->setText(QCoreApplication::translate("MainWindow", "[MOBILE_STATUS]", nullptr));
        lb_auto_MobilePoseInfo->setText(QCoreApplication::translate("MainWindow", "[MOBILE_POSE]", nullptr));
        lb_Auto_Motor_Status->setText(QCoreApplication::translate("MainWindow", "Motor Test", nullptr));
        bt_Auto_Motor_Check->setText(QCoreApplication::translate("MainWindow", "Run/Move/Check", nullptr));
        bt_Auto_Emergency->setText(QCoreApplication::translate("MainWindow", "Emergency\n"
"stop", nullptr));
        lb_Auto_dist->setText(QCoreApplication::translate("MainWindow", "dist:", nullptr));
        lb_Auto_eg->setText(QCoreApplication::translate("MainWindow", "deg:", nullptr));
        lb_Auto_v->setText(QCoreApplication::translate("MainWindow", "v:", nullptr));
        lb_Auto_w->setText(QCoreApplication::translate("MainWindow", "w:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_auto), QCoreApplication::translate("MainWindow", "Auto", nullptr));
        tabWidget_sensor->setTabText(tabWidget_sensor->indexOf(tab_Lidar), QCoreApplication::translate("MainWindow", "Lidar", nullptr));
        lb_CodeInfo->setText(QCoreApplication::translate("MainWindow", "[CODE_INFO]", nullptr));
        lb_Screen1->setText(QString());
        lb_Camera_Right->setText(QString());
        lb_Camera_Left->setText(QString());
        bt_CameraChange->setText(QCoreApplication::translate("MainWindow", "Change", nullptr));
        tabWidget_sensor->setTabText(tabWidget_sensor->indexOf(tab_Camera), QCoreApplication::translate("MainWindow", "Camera", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_sensor), QCoreApplication::translate("MainWindow", "Sensor", nullptr));
        spb_AccV->setSuffix(QString());
        bt_JogL->setText(QCoreApplication::translate("MainWindow", "L", nullptr));
        bt_JogF->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
        spb_JogV->setSuffix(QCoreApplication::translate("MainWindow", " mps", nullptr));
        bt_MotorInit->setText(QCoreApplication::translate("MainWindow", "Init", nullptr));
        bt_Emergency->setText(QCoreApplication::translate("MainWindow", "Emergency\n"
"stop", nullptr));
        bt_JogB->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        spb_DecelW->setSuffix(QString());
        spb_JogW->setSuffix(QCoreApplication::translate("MainWindow", " dps", nullptr));
        spb_DecelV->setSuffix(QString());
        spb_AccW->setSuffix(QString());
        bt_JogR->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        lb_w->setText(QCoreApplication::translate("MainWindow", "w:", nullptr));
        lb_dist->setText(QCoreApplication::translate("MainWindow", "dist:", nullptr));
        lb_v->setText(QCoreApplication::translate("MainWindow", "v:", nullptr));
        bt_MoveLinear->setText(QCoreApplication::translate("MainWindow", "move linear", nullptr));
        bt_MoveRotate->setText(QCoreApplication::translate("MainWindow", "move rotate", nullptr));
        lb_deg->setText(QCoreApplication::translate("MainWindow", "deg:", nullptr));
        bt_JoystickConnection->setText(QCoreApplication::translate("MainWindow", "Joystick Connection", nullptr));
        tabWidget_system->setTabText(tabWidget_system->indexOf(tab_motor), QCoreApplication::translate("MainWindow", "Motor", nullptr));
        tabWidget_system->setTabText(tabWidget_system->indexOf(tab_battery), QCoreApplication::translate("MainWindow", "Battery", nullptr));
        tabWidget_system->setTabText(tabWidget_system->indexOf(tab_network), QCoreApplication::translate("MainWindow", "Network", nullptr));
        lb_SystemInfo->setText(QCoreApplication::translate("MainWindow", "[SYSTEM_INFO]", nullptr));
        lb_MobilePoseInfo->setText(QCoreApplication::translate("MainWindow", "[MOBILE_POSE]", nullptr));
        lb_MobileStatusInfo->setText(QCoreApplication::translate("MainWindow", "[MOBILE_STATUS]", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_system), QCoreApplication::translate("MainWindow", "System", nullptr));
        bt_TestLed->setText(QCoreApplication::translate("MainWindow", "LED test", nullptr));
        lb_CodeInfo_4->setText(QCoreApplication::translate("MainWindow", "[COLOR_INFO]", nullptr));
        bt_TestLed_loop->setText(QCoreApplication::translate("MainWindow", "LED loop", nullptr));
        lb_CodeInfo_5->setText(QCoreApplication::translate("MainWindow", "LED_OFF ", nullptr));
        lb_CodeInfo_6->setText(QCoreApplication::translate("MainWindow", "LED_RED ", nullptr));
        lb_CodeInfo_7->setText(QCoreApplication::translate("MainWindow", "LED_GREEN ", nullptr));
        lb_CodeInfo_8->setText(QCoreApplication::translate("MainWindow", "LED_WHITE=0", nullptr));
        lb_CodeInfo_9->setText(QCoreApplication::translate("MainWindow", "LED_BLUE", nullptr));
        lb_CodeInfo_10->setText(QCoreApplication::translate("MainWindow", "LED_YELLOW", nullptr));
        lb_CodeInfo_11->setText(QCoreApplication::translate("MainWindow", "LED_MAGENTA", nullptr));
        lb_CodeInfo_12->setText(QCoreApplication::translate("MainWindow", "LED_RED_BLINK", nullptr));
        lb_CodeInfo_13->setText(QCoreApplication::translate("MainWindow", "LED_GREEN_BLINK", nullptr));
        lb_CodeInfo_14->setText(QCoreApplication::translate("MainWindow", "LED_WHITE_BLINK", nullptr));
        lb_CodeInfo_15->setText(QCoreApplication::translate("MainWindow", "LED_BLUE_BLINK", nullptr));
        lb_CodeInfo_16->setText(QCoreApplication::translate("MainWindow", "LED_YELLOW_BLINK", nullptr));
        lb_CodeInfo_17->setText(QCoreApplication::translate("MainWindow", "LED_RIGHT_YELLOW_BLINK", nullptr));
        lb_CodeInfo_18->setText(QCoreApplication::translate("MainWindow", "LED_LEFT_YELLOW_BLINK", nullptr));
        lb_CodeInfo_19->setText(QCoreApplication::translate("MainWindow", "LED_MAGENTA_BLINK", nullptr));
        lb_CodeInfo_20->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lb_CodeInfo_21->setText(QCoreApplication::translate("MainWindow", "1 ", nullptr));
        lb_CodeInfo_22->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        lb_CodeInfo_23->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        lb_CodeInfo_24->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        lb_CodeInfo_25->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        lb_CodeInfo_26->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        lb_CodeInfo_27->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        lb_CodeInfo_28->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        lb_CodeInfo_29->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        lb_CodeInfo_30->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        lb_CodeInfo_31->setText(QCoreApplication::translate("MainWindow", "11", nullptr));
        lb_CodeInfo_32->setText(QCoreApplication::translate("MainWindow", "12", nullptr));
        lb_CodeInfo_33->setText(QCoreApplication::translate("MainWindow", "13", nullptr));
        lb_CodeInfo_34->setText(QCoreApplication::translate("MainWindow", "14", nullptr));
        tabWidget_Indicator_Display->setTabText(tabWidget_Indicator_Display->indexOf(tab_led), QCoreApplication::translate("MainWindow", "LED", nullptr));
        bt_ClickSound->setText(QCoreApplication::translate("MainWindow", "Click\n"
"Sound", nullptr));
        lb_CodeInfo_3->setText(QCoreApplication::translate("MainWindow", "[CODE_INFO]", nullptr));
        tabWidget_Indicator_Display->setTabText(tabWidget_Indicator_Display->indexOf(tab_sound), QCoreApplication::translate("MainWindow", "Sound", nullptr));
        tabWidget_Indicator_Display->setTabText(tabWidget_Indicator_Display->indexOf(tab_display), QCoreApplication::translate("MainWindow", "Display", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_indicator), QCoreApplication::translate("MainWindow", "Indicator", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_server), QCoreApplication::translate("MainWindow", "Server", nullptr));
        bt_Test->setText(QCoreApplication::translate("MainWindow", "Test", nullptr));
        bt_Sync->setText(QCoreApplication::translate("MainWindow", "Sync", nullptr));
        bt_StatusCheck->setText(QCoreApplication::translate("MainWindow", "StatusCheck", nullptr));
        ckb_TestDebug->setText(QCoreApplication::translate("MainWindow", "Debug", nullptr));
        bt_TestImgSave->setText(QCoreApplication::translate("MainWindow", "IMG save", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_test), QCoreApplication::translate("MainWindow", "Test", nullptr));
        bt_Connection->setText(QCoreApplication::translate("MainWindow", "Connection", nullptr));
        cb_RobotType->setItemText(0, QCoreApplication::translate("MainWindow", "-", nullptr));
        cb_RobotType->setItemText(1, QCoreApplication::translate("MainWindow", "S100", nullptr));
        cb_RobotType->setItemText(2, QCoreApplication::translate("MainWindow", "D400", nullptr));
        cb_RobotType->setItemText(3, QCoreApplication::translate("MainWindow", "Mecanum", nullptr));

        cb_RobotType->setCurrentText(QCoreApplication::translate("MainWindow", "-", nullptr));
        lb_RobotType->setText(QCoreApplication::translate("MainWindow", "Robot type", nullptr));
        ckb_Lidar->setText(QCoreApplication::translate("MainWindow", "Lidar", nullptr));
        ckb_Mobile->setText(QCoreApplication::translate("MainWindow", "Mobile", nullptr));
        ckb_Cam->setText(QCoreApplication::translate("MainWindow", "Cam", nullptr));
        ckb_Joystick->setText(QCoreApplication::translate("MainWindow", "Joystick", nullptr));
        bt_Disconnection->setText(QCoreApplication::translate("MainWindow", "Disconnection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
