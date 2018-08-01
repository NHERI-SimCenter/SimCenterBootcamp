/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionNew;
    QAction *actionQuit;
    QWidget *centralWidget;
    QLabel *label_city;
    QComboBox *cbx_state;
    QLabel *label_zip;
    QLineEdit *LE_zip;
    QLabel *label_state;
    QLineEdit *LE_city;
    QLabel *label_address;
    QLabel *label_date_of_birth;
    QLabel *label_last_name;
    QLabel *label_first_name;
    QLineEdit *LE_address;
    QLineEdit *LE_last_name;
    QLineEdit *LE_first_name;
    QLabel *label_date_string;
    QLineEdit *LE_date_month;
    QLabel *label_slash2;
    QLineEdit *LE_date_year;
    QLabel *label_slash1;
    QLineEdit *LE_date_day;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(601, 241);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_city = new QLabel(centralWidget);
        label_city->setObjectName(QStringLiteral("label_city"));
        label_city->setGeometry(QRect(15, 141, 24, 16));
        cbx_state = new QComboBox(centralWidget);
        cbx_state->setObjectName(QStringLiteral("cbx_state"));
        cbx_state->setGeometry(QRect(307, 138, 104, 26));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbx_state->sizePolicy().hasHeightForWidth());
        cbx_state->setSizePolicy(sizePolicy);
        cbx_state->setMinimumSize(QSize(80, 0));
        label_zip = new QLabel(centralWidget);
        label_zip->setObjectName(QStringLiteral("label_zip"));
        label_zip->setGeometry(QRect(429, 140, 21, 16));
        LE_zip = new QLineEdit(centralWidget);
        LE_zip->setObjectName(QStringLiteral("LE_zip"));
        LE_zip->setGeometry(QRect(460, 140, 121, 21));
        label_state = new QLabel(centralWidget);
        label_state->setObjectName(QStringLiteral("label_state"));
        label_state->setGeometry(QRect(270, 140, 32, 16));
        LE_city = new QLineEdit(centralWidget);
        LE_city->setObjectName(QStringLiteral("LE_city"));
        LE_city->setGeometry(QRect(100, 141, 161, 21));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(LE_city->sizePolicy().hasHeightForWidth());
        LE_city->setSizePolicy(sizePolicy1);
        label_address = new QLabel(centralWidget);
        label_address->setObjectName(QStringLiteral("label_address"));
        label_address->setGeometry(QRect(15, 110, 51, 16));
        label_date_of_birth = new QLabel(centralWidget);
        label_date_of_birth->setObjectName(QStringLiteral("label_date_of_birth"));
        label_date_of_birth->setGeometry(QRect(12, 74, 75, 16));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_date_of_birth->sizePolicy().hasHeightForWidth());
        label_date_of_birth->setSizePolicy(sizePolicy2);
        label_last_name = new QLabel(centralWidget);
        label_last_name->setObjectName(QStringLiteral("label_last_name"));
        label_last_name->setGeometry(QRect(12, 43, 63, 16));
        label_first_name = new QLabel(centralWidget);
        label_first_name->setObjectName(QStringLiteral("label_first_name"));
        label_first_name->setGeometry(QRect(12, 12, 68, 16));
        LE_address = new QLineEdit(centralWidget);
        LE_address->setObjectName(QStringLiteral("LE_address"));
        LE_address->setGeometry(QRect(100, 110, 481, 21));
        LE_last_name = new QLineEdit(centralWidget);
        LE_last_name->setObjectName(QStringLiteral("LE_last_name"));
        LE_last_name->setGeometry(QRect(97, 43, 481, 21));
        LE_first_name = new QLineEdit(centralWidget);
        LE_first_name->setObjectName(QStringLiteral("LE_first_name"));
        LE_first_name->setGeometry(QRect(97, 12, 481, 21));
        label_date_string = new QLabel(centralWidget);
        label_date_string->setObjectName(QStringLiteral("label_date_string"));
        label_date_string->setGeometry(QRect(490, 80, 84, 16));
        LE_date_month = new QLineEdit(centralWidget);
        LE_date_month->setObjectName(QStringLiteral("LE_date_month"));
        LE_date_month->setGeometry(QRect(98, 75, 125, 21));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(LE_date_month->sizePolicy().hasHeightForWidth());
        LE_date_month->setSizePolicy(sizePolicy3);
        label_slash2 = new QLabel(centralWidget);
        label_slash2->setObjectName(QStringLiteral("label_slash2"));
        label_slash2->setGeometry(QRect(353, 75, 16, 16));
        LE_date_year = new QLineEdit(centralWidget);
        LE_date_year->setObjectName(QStringLiteral("LE_date_year"));
        LE_date_year->setGeometry(QRect(358, 75, 125, 21));
        sizePolicy3.setHeightForWidth(LE_date_year->sizePolicy().hasHeightForWidth());
        LE_date_year->setSizePolicy(sizePolicy3);
        label_slash1 = new QLabel(centralWidget);
        label_slash1->setObjectName(QStringLiteral("label_slash1"));
        label_slash1->setGeometry(QRect(223, 75, 16, 16));
        LE_date_day = new QLineEdit(centralWidget);
        LE_date_day->setObjectName(QStringLiteral("LE_date_day"));
        LE_date_day->setGeometry(QRect(228, 75, 125, 21));
        sizePolicy3.setHeightForWidth(LE_date_day->sizePolicy().hasHeightForWidth());
        LE_date_day->setSizePolicy(sizePolicy3);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 601, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(LE_first_name, LE_last_name);
        QWidget::setTabOrder(LE_last_name, LE_date_month);
        QWidget::setTabOrder(LE_date_month, LE_date_day);
        QWidget::setTabOrder(LE_date_day, LE_date_year);
        QWidget::setTabOrder(LE_date_year, LE_address);
        QWidget::setTabOrder(LE_address, LE_city);
        QWidget::setTabOrder(LE_city, cbx_state);
        QWidget::setTabOrder(cbx_state, LE_zip);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "About", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "New", nullptr));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", nullptr));
        label_city->setText(QApplication::translate("MainWindow", "City", nullptr));
        label_zip->setText(QApplication::translate("MainWindow", "ZIP", nullptr));
        label_state->setText(QApplication::translate("MainWindow", "State", nullptr));
        label_address->setText(QApplication::translate("MainWindow", "Address", nullptr));
        label_date_of_birth->setText(QApplication::translate("MainWindow", "date of birth", nullptr));
        label_last_name->setText(QApplication::translate("MainWindow", "Last name", nullptr));
        label_first_name->setText(QApplication::translate("MainWindow", "First name:", nullptr));
        label_date_string->setText(QApplication::translate("MainWindow", "MM/DD/YYYY", nullptr));
        label_slash2->setText(QApplication::translate("MainWindow", "/", nullptr));
        label_slash1->setText(QApplication::translate("MainWindow", "/", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
