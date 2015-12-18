/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
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
    QAction *actionQuit;
    QAction *actionXfxcb;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupSpectrogram;
    QVBoxLayout *verticalLayout_2;
    QCustomPlot *plot1;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *toolButton;
    QLabel *label_c0;
    QLabel *label_x0;
    QDoubleSpinBox *SBa;
    QLabel *label_c1;
    QLabel *label_x1;
    QDoubleSpinBox *sbB;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFichier;

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
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionXfxcb = new QAction(MainWindow);
        actionXfxcb->setObjectName(QStringLiteral("actionXfxcb"));
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

        toolButton_2 = new QToolButton(groupSpectrogram);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setMinimumSize(QSize(64, 64));

        horizontalLayout_3->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(groupSpectrogram);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setMinimumSize(QSize(64, 64));

        horizontalLayout_3->addWidget(toolButton_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        toolButton = new QToolButton(groupSpectrogram);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setMinimumSize(QSize(64, 64));

        horizontalLayout_3->addWidget(toolButton);

        label_c0 = new QLabel(groupSpectrogram);
        label_c0->setObjectName(QStringLiteral("label_c0"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_c0->sizePolicy().hasHeightForWidth());
        label_c0->setSizePolicy(sizePolicy2);
        label_c0->setMinimumSize(QSize(0, 0));

        horizontalLayout_3->addWidget(label_c0);

        label_x0 = new QLabel(groupSpectrogram);
        label_x0->setObjectName(QStringLiteral("label_x0"));

        horizontalLayout_3->addWidget(label_x0);

        SBa = new QDoubleSpinBox(groupSpectrogram);
        SBa->setObjectName(QStringLiteral("SBa"));
        SBa->setMinimum(200);
        SBa->setMaximum(1200);
        SBa->setValue(440);

        horizontalLayout_3->addWidget(SBa);

        label_c1 = new QLabel(groupSpectrogram);
        label_c1->setObjectName(QStringLiteral("label_c1"));

        horizontalLayout_3->addWidget(label_c1);

        label_x1 = new QLabel(groupSpectrogram);
        label_x1->setObjectName(QStringLiteral("label_x1"));

        horizontalLayout_3->addWidget(label_x1);

        sbB = new QDoubleSpinBox(groupSpectrogram);
        sbB->setObjectName(QStringLiteral("sbB"));
        sbB->setMinimum(200);
        sbB->setMaximum(1200);
        sbB->setValue(660);

        horizontalLayout_3->addWidget(sbB);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout_2->addWidget(groupSpectrogram, 0, 0, 2, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 22));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFichier->menuAction());
        menuFichier->addAction(actionQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        actionXfxcb->setText(QApplication::translate("MainWindow", "xfxcb", 0));
        groupSpectrogram->setTitle(QApplication::translate("MainWindow", "Spectrogram", 0));
        toolButton_2->setText(QApplication::translate("MainWindow", "Export", 0));
        toolButton_3->setText(QApplication::translate("MainWindow", "Autoscale", 0));
        toolButton->setText(QApplication::translate("MainWindow", "Calibrate", 0));
        label_c0->setText(QApplication::translate("MainWindow", "Cursor 1 ", 0));
        label_x0->setText(QApplication::translate("MainWindow", "1294", 0));
        SBa->setSuffix(QApplication::translate("MainWindow", " nm", 0));
        label_c1->setText(QApplication::translate("MainWindow", "Cursor2", 0));
        label_x1->setText(QApplication::translate("MainWindow", "3895", 0));
        sbB->setSuffix(QApplication::translate("MainWindow", " nm", 0));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
