/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "tmgraphview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpenDatabase;
    QAction *actionSave_Image;
    QAction *actionQuit;
    QAction *actionMetadata;
    QAction *actionOverview_zoom;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    TMGraphView *graph;
    QTextEdit *event_display;
    QHBoxLayout *horizontalLayout_2;
    QLabel *cursor_address;
    QLabel *cursor_time;
    QLabel *label_3;
    QLineEdit *graph_address;
    QLabel *label_4;
    QLineEdit *graph_time;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuTrace;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(800, 600);
        actionOpenDatabase = new QAction(MainWindow);
        actionOpenDatabase->setObjectName(QString::fromUtf8("actionOpenDatabase"));
        actionSave_Image = new QAction(MainWindow);
        actionSave_Image->setObjectName(QString::fromUtf8("actionSave_Image"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionMetadata = new QAction(MainWindow);
        actionMetadata->setObjectName(QString::fromUtf8("actionMetadata"));
        actionOverview_zoom = new QAction(MainWindow);
        actionOverview_zoom->setObjectName(QString::fromUtf8("actionOverview_zoom"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setOrientation(Qt::Horizontal);
        graph = new TMGraphView(splitter);
        graph->setObjectName(QString::fromUtf8("graph"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(graph->sizePolicy().hasHeightForWidth());
        graph->setSizePolicy(sizePolicy2);
        graph->setBaseSize(QSize(0, 0));
        splitter->addWidget(graph);
        event_display = new QTextEdit(splitter);
        event_display->setObjectName(QString::fromUtf8("event_display"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(event_display->sizePolicy().hasHeightForWidth());
        event_display->setSizePolicy(sizePolicy3);
        event_display->setBaseSize(QSize(0, 0));
        event_display->setReadOnly(true);
        splitter->addWidget(event_display);

        verticalLayout->addWidget(splitter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        cursor_address = new QLabel(centralWidget);
        cursor_address->setObjectName(QString::fromUtf8("cursor_address"));
        sizePolicy.setHeightForWidth(cursor_address->sizePolicy().hasHeightForWidth());
        cursor_address->setSizePolicy(sizePolicy);
        cursor_address->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(cursor_address);

        cursor_time = new QLabel(centralWidget);
        cursor_time->setObjectName(QString::fromUtf8("cursor_time"));

        horizontalLayout_2->addWidget(cursor_time);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        graph_address = new QLineEdit(centralWidget);
        graph_address->setObjectName(QString::fromUtf8("graph_address"));

        horizontalLayout_2->addWidget(graph_address);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_4);

        graph_time = new QLineEdit(centralWidget);
        graph_time->setObjectName(QString::fromUtf8("graph_time"));

        horizontalLayout_2->addWidget(graph_time);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuTrace = new QMenu(menuBar);
        menuTrace->setObjectName(QString::fromUtf8("menuTrace"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuTrace->menuAction());
        menuFile->addAction(actionOpenDatabase);
        menuFile->addAction(actionSave_Image);
        menuFile->addAction(actionQuit);
        menuTrace->addAction(actionMetadata);
        menuTrace->addAction(actionOverview_zoom);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "TraceGraph", nullptr));
        actionOpenDatabase->setText(QCoreApplication::translate("MainWindow", "Open Database", nullptr));
#if QT_CONFIG(tooltip)
        actionOpenDatabase->setToolTip(QCoreApplication::translate("MainWindow", "Open Database", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSave_Image->setText(QCoreApplication::translate("MainWindow", "Save Image", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionMetadata->setText(QCoreApplication::translate("MainWindow", "Metadata", nullptr));
        actionOverview_zoom->setText(QCoreApplication::translate("MainWindow", "Overview zoom", nullptr));
        cursor_address->setText(QString());
        cursor_time->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Address:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Time:", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuTrace->setTitle(QCoreApplication::translate("MainWindow", "Trace", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
