/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QWidget *tab_2;
    QGraphicsView *graphicsView;
    QWidget *tab_3;
    QGraphicsView *glob_track_view;
    QWidget *tab_4;
    QWidget *tab_5;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(832, 657);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 831, 651));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        formLayoutWidget = new QWidget(tab);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 40, 411, 61));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(50);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 120, 151, 71));
        pushButton->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Tab_Icons/QtApp/icons/server.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Tab_Icons/QtApp/icons/options-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        graphicsView = new QGraphicsView(tab_2);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 30, 341, 321));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Tab_Icons/QtApp/icons/cctv.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        glob_track_view = new QGraphicsView(tab_3);
        glob_track_view->setObjectName(QStringLiteral("glob_track_view"));
        glob_track_view->setGeometry(QRect(0, 0, 831, 611));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Tab_Icons/QtApp/icons/tracking.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_3, icon3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Tab_Icons/QtApp/icons/heatmap.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_4, icon4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Tab_Icons/QtApp/icons/analysis.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_5, icon5, QString());
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "People Tracking System", 0));
        label->setText(QApplication::translate("MainWindow", "Port", 0));
        label_2->setText(QApplication::translate("MainWindow", "Threshold", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Start Server", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Configuration", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Camera", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Global Tracking", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Heat Map", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Analysis", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
