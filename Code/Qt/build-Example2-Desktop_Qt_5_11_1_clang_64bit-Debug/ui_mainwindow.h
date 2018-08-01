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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
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
    QGridLayout *gridLayout;
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
    QHBoxLayout *layout_date;
    QLineEdit *LE_date_month;
    QLabel *label_slash1;
    QLineEdit *LE_date_day;
    QLabel *label_slash2;
    QLineEdit *LE_date_year;
    QSpacerItem *verticalSpacer;
    QLabel *label_date_string;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(735, 354);
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
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(-1);
        label_city = new QLabel(centralWidget);
        label_city->setObjectName(QStringLiteral("label_city"));

        gridLayout->addWidget(label_city, 4, 0, 1, 1);

        cbx_state = new QComboBox(centralWidget);
        cbx_state->setObjectName(QStringLiteral("cbx_state"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbx_state->sizePolicy().hasHeightForWidth());
        cbx_state->setSizePolicy(sizePolicy);
        cbx_state->setMinimumSize(QSize(80, 0));

        gridLayout->addWidget(cbx_state, 4, 5, 1, 1);

        label_zip = new QLabel(centralWidget);
        label_zip->setObjectName(QStringLiteral("label_zip"));

        gridLayout->addWidget(label_zip, 4, 6, 1, 1);

        LE_zip = new QLineEdit(centralWidget);
        LE_zip->setObjectName(QStringLiteral("LE_zip"));

        gridLayout->addWidget(LE_zip, 4, 7, 1, 1);

        label_state = new QLabel(centralWidget);
        label_state->setObjectName(QStringLiteral("label_state"));

        gridLayout->addWidget(label_state, 4, 4, 1, 1);

        LE_city = new QLineEdit(centralWidget);
        LE_city->setObjectName(QStringLiteral("LE_city"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(LE_city->sizePolicy().hasHeightForWidth());
        LE_city->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(LE_city, 4, 1, 1, 3);

        label_address = new QLabel(centralWidget);
        label_address->setObjectName(QStringLiteral("label_address"));

        gridLayout->addWidget(label_address, 3, 0, 1, 1);

        label_date_of_birth = new QLabel(centralWidget);
        label_date_of_birth->setObjectName(QStringLiteral("label_date_of_birth"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_date_of_birth->sizePolicy().hasHeightForWidth());
        label_date_of_birth->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_date_of_birth, 2, 0, 1, 1);

        label_last_name = new QLabel(centralWidget);
        label_last_name->setObjectName(QStringLiteral("label_last_name"));

        gridLayout->addWidget(label_last_name, 1, 0, 1, 1);

        label_first_name = new QLabel(centralWidget);
        label_first_name->setObjectName(QStringLiteral("label_first_name"));

        gridLayout->addWidget(label_first_name, 0, 0, 1, 1);

        LE_address = new QLineEdit(centralWidget);
        LE_address->setObjectName(QStringLiteral("LE_address"));

        gridLayout->addWidget(LE_address, 3, 1, 1, 7);

        LE_last_name = new QLineEdit(centralWidget);
        LE_last_name->setObjectName(QStringLiteral("LE_last_name"));

        gridLayout->addWidget(LE_last_name, 1, 1, 1, 7);

        LE_first_name = new QLineEdit(centralWidget);
        LE_first_name->setObjectName(QStringLiteral("LE_first_name"));

        gridLayout->addWidget(LE_first_name, 0, 1, 1, 7);

        layout_date = new QHBoxLayout();
        layout_date->setSpacing(0);
        layout_date->setObjectName(QStringLiteral("layout_date"));
        LE_date_month = new QLineEdit(centralWidget);
        LE_date_month->setObjectName(QStringLiteral("LE_date_month"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(LE_date_month->sizePolicy().hasHeightForWidth());
        LE_date_month->setSizePolicy(sizePolicy3);

        layout_date->addWidget(LE_date_month);

        label_slash1 = new QLabel(centralWidget);
        label_slash1->setObjectName(QStringLiteral("label_slash1"));

        layout_date->addWidget(label_slash1);

        LE_date_day = new QLineEdit(centralWidget);
        LE_date_day->setObjectName(QStringLiteral("LE_date_day"));
        sizePolicy3.setHeightForWidth(LE_date_day->sizePolicy().hasHeightForWidth());
        LE_date_day->setSizePolicy(sizePolicy3);

        layout_date->addWidget(LE_date_day);

        label_slash2 = new QLabel(centralWidget);
        label_slash2->setObjectName(QStringLiteral("label_slash2"));

        layout_date->addWidget(label_slash2);

        LE_date_year = new QLineEdit(centralWidget);
        LE_date_year->setObjectName(QStringLiteral("LE_date_year"));
        sizePolicy3.setHeightForWidth(LE_date_year->sizePolicy().hasHeightForWidth());
        LE_date_year->setSizePolicy(sizePolicy3);

        layout_date->addWidget(LE_date_year);


        gridLayout->addLayout(layout_date, 2, 1, 1, 5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        label_date_string = new QLabel(centralWidget);
        label_date_string->setObjectName(QStringLiteral("label_date_string"));

        gridLayout->addWidget(label_date_string, 2, 7, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 735, 22));
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
        label_slash1->setText(QApplication::translate("MainWindow", "/", nullptr));
        label_slash2->setText(QApplication::translate("MainWindow", "/", nullptr));
        label_date_string->setText(QApplication::translate("MainWindow", "MM/DD/YYYY", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
