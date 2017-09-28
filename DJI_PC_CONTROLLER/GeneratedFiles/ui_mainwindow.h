/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_16;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *input_layout;
    QLabel *label_2;
    QLineEdit *ip_edit;
    QLabel *label;
    QLineEdit *port_edit;
    QPushButton *connect_btn;
    QGroupBox *telemetry_box;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_13;
    QGroupBox *velocity_box;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *velocity_x_edit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *velocity_y_edit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *velocity_z_edit;
    QGroupBox *attitude_box;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *pitch_edit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QLineEdit *roll_edit;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *yaw_edit;
    QGroupBox *gps_box;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLineEdit *latitude_edit;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *longitude_edit;
    QHBoxLayout *EtcBox;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_16;
    QLineEdit *altitude_edit;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_17;
    QLineEdit *dtime_edit;
    QPlainTextEdit *log_edit;
    QGroupBox *video_box;
    QVBoxLayout *verticalLayout_7;
    QGraphicsView *video_view;
    QGroupBox *controls_box;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *velocities_edit;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *left_vlayout;
    QLabel *label_12;
    QSlider *pitch_slider;
    QVBoxLayout *center_vlayout;
    QLabel *label_13;
    QDial *yaw_dial;
    QVBoxLayout *right_vlayout;
    QLabel *label_14;
    QSlider *throttle_slider;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_15;
    QSlider *roll_slider;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1111, 480);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_16 = new QHBoxLayout(centralWidget);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        input_layout = new QHBoxLayout();
        input_layout->setSpacing(6);
        input_layout->setObjectName(QStringLiteral("input_layout"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        input_layout->addWidget(label_2);

        ip_edit = new QLineEdit(centralWidget);
        ip_edit->setObjectName(QStringLiteral("ip_edit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ip_edit->sizePolicy().hasHeightForWidth());
        ip_edit->setSizePolicy(sizePolicy);
        ip_edit->setMinimumSize(QSize(100, 0));

        input_layout->addWidget(ip_edit);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        input_layout->addWidget(label);

        port_edit = new QLineEdit(centralWidget);
        port_edit->setObjectName(QStringLiteral("port_edit"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(port_edit->sizePolicy().hasHeightForWidth());
        port_edit->setSizePolicy(sizePolicy1);
        port_edit->setMinimumSize(QSize(20, 0));
        port_edit->setMaximumSize(QSize(60, 16777215));

        input_layout->addWidget(port_edit);

        connect_btn = new QPushButton(centralWidget);
        connect_btn->setObjectName(QStringLiteral("connect_btn"));
        connect_btn->setEnabled(true);

        input_layout->addWidget(connect_btn);


        verticalLayout->addLayout(input_layout);

        telemetry_box = new QGroupBox(centralWidget);
        telemetry_box->setObjectName(QStringLiteral("telemetry_box"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(telemetry_box->sizePolicy().hasHeightForWidth());
        telemetry_box->setSizePolicy(sizePolicy2);
        telemetry_box->setCheckable(true);
        telemetry_box->setChecked(false);
        verticalLayout_6 = new QVBoxLayout(telemetry_box);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        velocity_box = new QGroupBox(telemetry_box);
        velocity_box->setObjectName(QStringLiteral("velocity_box"));
        verticalLayout_2 = new QVBoxLayout(velocity_box);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(velocity_box);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        velocity_x_edit = new QLineEdit(velocity_box);
        velocity_x_edit->setObjectName(QStringLiteral("velocity_x_edit"));
        velocity_x_edit->setReadOnly(true);

        horizontalLayout_4->addWidget(velocity_x_edit);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(velocity_box);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        velocity_y_edit = new QLineEdit(velocity_box);
        velocity_y_edit->setObjectName(QStringLiteral("velocity_y_edit"));
        velocity_y_edit->setReadOnly(true);

        horizontalLayout_5->addWidget(velocity_y_edit);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_7 = new QLabel(velocity_box);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_6->addWidget(label_7);

        velocity_z_edit = new QLineEdit(velocity_box);
        velocity_z_edit->setObjectName(QStringLiteral("velocity_z_edit"));
        velocity_z_edit->setReadOnly(true);

        horizontalLayout_6->addWidget(velocity_z_edit);


        verticalLayout_2->addLayout(horizontalLayout_6);


        horizontalLayout_13->addWidget(velocity_box);

        attitude_box = new QGroupBox(telemetry_box);
        attitude_box->setObjectName(QStringLiteral("attitude_box"));
        verticalLayout_3 = new QVBoxLayout(attitude_box);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_8 = new QLabel(attitude_box);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(30, 0));

        horizontalLayout_8->addWidget(label_8);

        pitch_edit = new QLineEdit(attitude_box);
        pitch_edit->setObjectName(QStringLiteral("pitch_edit"));
        pitch_edit->setReadOnly(true);

        horizontalLayout_8->addWidget(pitch_edit);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_4 = new QLabel(attitude_box);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setMinimumSize(QSize(30, 0));

        horizontalLayout_7->addWidget(label_4);

        roll_edit = new QLineEdit(attitude_box);
        roll_edit->setObjectName(QStringLiteral("roll_edit"));
        roll_edit->setReadOnly(true);

        horizontalLayout_7->addWidget(roll_edit);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_9 = new QLabel(attitude_box);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(30, 0));

        horizontalLayout_9->addWidget(label_9);

        yaw_edit = new QLineEdit(attitude_box);
        yaw_edit->setObjectName(QStringLiteral("yaw_edit"));
        yaw_edit->setReadOnly(true);

        horizontalLayout_9->addWidget(yaw_edit);


        verticalLayout_3->addLayout(horizontalLayout_9);


        horizontalLayout_13->addWidget(attitude_box);


        verticalLayout_6->addLayout(horizontalLayout_13);

        gps_box = new QGroupBox(telemetry_box);
        gps_box->setObjectName(QStringLiteral("gps_box"));
        horizontalLayout_12 = new QHBoxLayout(gps_box);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_11 = new QLabel(gps_box);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_11->addWidget(label_11);

        latitude_edit = new QLineEdit(gps_box);
        latitude_edit->setObjectName(QStringLiteral("latitude_edit"));
        latitude_edit->setReadOnly(true);

        horizontalLayout_11->addWidget(latitude_edit);


        horizontalLayout_12->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_10 = new QLabel(gps_box);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_10->addWidget(label_10);

        longitude_edit = new QLineEdit(gps_box);
        longitude_edit->setObjectName(QStringLiteral("longitude_edit"));
        longitude_edit->setReadOnly(true);

        horizontalLayout_10->addWidget(longitude_edit);


        horizontalLayout_12->addLayout(horizontalLayout_10);


        verticalLayout_6->addWidget(gps_box);

        EtcBox = new QHBoxLayout();
        EtcBox->setSpacing(6);
        EtcBox->setObjectName(QStringLiteral("EtcBox"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_16 = new QLabel(telemetry_box);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_15->addWidget(label_16);

        altitude_edit = new QLineEdit(telemetry_box);
        altitude_edit->setObjectName(QStringLiteral("altitude_edit"));
        altitude_edit->setReadOnly(true);

        horizontalLayout_15->addWidget(altitude_edit);


        EtcBox->addLayout(horizontalLayout_15);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_17 = new QLabel(telemetry_box);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_17->addWidget(label_17);

        dtime_edit = new QLineEdit(telemetry_box);
        dtime_edit->setObjectName(QStringLiteral("dtime_edit"));
        dtime_edit->setReadOnly(true);

        horizontalLayout_17->addWidget(dtime_edit);


        EtcBox->addLayout(horizontalLayout_17);


        verticalLayout_6->addLayout(EtcBox);


        verticalLayout->addWidget(telemetry_box);

        log_edit = new QPlainTextEdit(centralWidget);
        log_edit->setObjectName(QStringLiteral("log_edit"));
        log_edit->setReadOnly(true);

        verticalLayout->addWidget(log_edit);


        horizontalLayout_16->addLayout(verticalLayout);

        video_box = new QGroupBox(centralWidget);
        video_box->setObjectName(QStringLiteral("video_box"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(video_box->sizePolicy().hasHeightForWidth());
        video_box->setSizePolicy(sizePolicy3);
        video_box->setCheckable(true);
        video_box->setChecked(false);
        verticalLayout_7 = new QVBoxLayout(video_box);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        video_view = new QGraphicsView(video_box);
        video_view->setObjectName(QStringLiteral("video_view"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(video_view->sizePolicy().hasHeightForWidth());
        video_view->setSizePolicy(sizePolicy4);

        verticalLayout_7->addWidget(video_view);


        horizontalLayout_16->addWidget(video_box);

        controls_box = new QGroupBox(centralWidget);
        controls_box->setObjectName(QStringLiteral("controls_box"));
        controls_box->setAutoFillBackground(false);
        controls_box->setCheckable(true);
        controls_box->setChecked(false);
        verticalLayout_9 = new QVBoxLayout(controls_box);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        velocities_edit = new QLineEdit(controls_box);
        velocities_edit->setObjectName(QStringLiteral("velocities_edit"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(velocities_edit->sizePolicy().hasHeightForWidth());
        velocities_edit->setSizePolicy(sizePolicy5);
        velocities_edit->setFrame(true);
        velocities_edit->setAlignment(Qt::AlignCenter);
        velocities_edit->setReadOnly(true);

        verticalLayout_9->addWidget(velocities_edit);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(3);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        left_vlayout = new QVBoxLayout();
        left_vlayout->setSpacing(6);
        left_vlayout->setObjectName(QStringLiteral("left_vlayout"));
        label_12 = new QLabel(controls_box);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        left_vlayout->addWidget(label_12);

        pitch_slider = new QSlider(controls_box);
        pitch_slider->setObjectName(QStringLiteral("pitch_slider"));
        pitch_slider->setMinimum(-15);
        pitch_slider->setMaximum(15);
        pitch_slider->setOrientation(Qt::Vertical);
        pitch_slider->setTickPosition(QSlider::TicksBelow);
        pitch_slider->setTickInterval(5);

        left_vlayout->addWidget(pitch_slider);


        horizontalLayout_14->addLayout(left_vlayout);

        center_vlayout = new QVBoxLayout();
        center_vlayout->setSpacing(7);
        center_vlayout->setObjectName(QStringLiteral("center_vlayout"));
        label_13 = new QLabel(controls_box);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy2.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy2);
        label_13->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        center_vlayout->addWidget(label_13);

        yaw_dial = new QDial(controls_box);
        yaw_dial->setObjectName(QStringLiteral("yaw_dial"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(yaw_dial->sizePolicy().hasHeightForWidth());
        yaw_dial->setSizePolicy(sizePolicy6);
        yaw_dial->setMinimum(-180);
        yaw_dial->setMaximum(180);
        yaw_dial->setWrapping(true);
        yaw_dial->setNotchTarget(30);
        yaw_dial->setNotchesVisible(true);

        center_vlayout->addWidget(yaw_dial);


        horizontalLayout_14->addLayout(center_vlayout);

        right_vlayout = new QVBoxLayout();
        right_vlayout->setSpacing(6);
        right_vlayout->setObjectName(QStringLiteral("right_vlayout"));
        right_vlayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_14 = new QLabel(controls_box);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        right_vlayout->addWidget(label_14);

        throttle_slider = new QSlider(controls_box);
        throttle_slider->setObjectName(QStringLiteral("throttle_slider"));
        throttle_slider->setLayoutDirection(Qt::LeftToRight);
        throttle_slider->setMinimum(-15);
        throttle_slider->setMaximum(15);
        throttle_slider->setOrientation(Qt::Vertical);
        throttle_slider->setTickPosition(QSlider::TicksAbove);
        throttle_slider->setTickInterval(5);

        right_vlayout->addWidget(throttle_slider);


        horizontalLayout_14->addLayout(right_vlayout);


        verticalLayout_9->addLayout(horizontalLayout_14);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_15 = new QLabel(controls_box);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_15);

        roll_slider = new QSlider(controls_box);
        roll_slider->setObjectName(QStringLiteral("roll_slider"));
        roll_slider->setMinimum(-15);
        roll_slider->setMaximum(15);
        roll_slider->setSingleStep(1);
        roll_slider->setOrientation(Qt::Horizontal);
        roll_slider->setInvertedAppearance(false);
        roll_slider->setInvertedControls(false);
        roll_slider->setTickPosition(QSlider::TicksAbove);
        roll_slider->setTickInterval(5);

        verticalLayout_8->addWidget(roll_slider);


        verticalLayout_9->addLayout(verticalLayout_8);


        horizontalLayout_16->addWidget(controls_box);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1111, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "IP", Q_NULLPTR));
        ip_edit->setText(QApplication::translate("MainWindow", "192.168.1.100", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Port", Q_NULLPTR));
        port_edit->setText(QApplication::translate("MainWindow", "1212", Q_NULLPTR));
        connect_btn->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        telemetry_box->setTitle(QApplication::translate("MainWindow", "Telemetry", Q_NULLPTR));
        velocity_box->setTitle(QApplication::translate("MainWindow", "Velocity", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Z", Q_NULLPTR));
        attitude_box->setTitle(QApplication::translate("MainWindow", "Attitude", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Pitch", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Roll", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Yaw", Q_NULLPTR));
        gps_box->setTitle(QApplication::translate("MainWindow", "GPS", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Latitude", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Longitude", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Altitude", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "DTime", Q_NULLPTR));
        log_edit->setPlainText(QString());
        video_box->setTitle(QApplication::translate("MainWindow", "Video", Q_NULLPTR));
        controls_box->setTitle(QApplication::translate("MainWindow", "Controls", Q_NULLPTR));
        velocities_edit->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "Pitch", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Yaw", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Throttle", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Roll", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
