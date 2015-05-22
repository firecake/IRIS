/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupSpectrogram;
    QVBoxLayout *verticalLayout_2;
    QCustomPlot *plot1;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QToolButton *toolButton_3;
    QToolButton *toolButton_2;
    QToolButton *toolButton;
    QComboBox *CameraCombo;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1024, 768);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1024, 768));
        MainWindow->setMaximumSize(QSize(1024, 768));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupSpectrogram = new QGroupBox(centralWidget);
        groupSpectrogram->setObjectName(QStringLiteral("groupSpectrogram"));
        groupSpectrogram->setMinimumSize(QSize(0, 125));
        verticalLayout_2 = new QVBoxLayout(groupSpectrogram);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        plot1 = new QCustomPlot(groupSpectrogram);
        plot1->setObjectName(QStringLiteral("plot1"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(plot1->sizePolicy().hasHeightForWidth());
        plot1->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(plot1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        widget = new QWidget(groupSpectrogram);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(10, 0));

        horizontalLayout_3->addWidget(widget);

        label_2 = new QLabel(groupSpectrogram);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(900, 0));

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout_2->addWidget(groupSpectrogram, 0, 1, 3, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        toolButton_3 = new QToolButton(groupBox);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setMinimumSize(QSize(100, 64));

        verticalLayout->addWidget(toolButton_3);

        toolButton_2 = new QToolButton(groupBox);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setMinimumSize(QSize(100, 64));

        verticalLayout->addWidget(toolButton_2);

        toolButton = new QToolButton(groupBox);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setMinimumSize(QSize(100, 64));

        verticalLayout->addWidget(toolButton);

        CameraCombo = new QComboBox(groupBox);
        CameraCombo->setObjectName(QStringLiteral("CameraCombo"));

        verticalLayout->addWidget(CameraCombo);


        gridLayout_2->addWidget(groupBox, 0, 0, 3, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupSpectrogram->setTitle(QApplication::translate("MainWindow", "Spectrogram", 0));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Commands", 0));
        toolButton_3->setText(QApplication::translate("MainWindow", "Start acq.", 0));
        toolButton_2->setText(QApplication::translate("MainWindow", "Export", 0));
        toolButton->setText(QApplication::translate("MainWindow", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
