#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QStringList>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStringList theStates = {"AL", "AK", "AZ", "AR",
                             "CA", "CO", "CT",
                             "DE",
                             "FL",
                             "GA",
                             "HI",
                             "ID", "IL", "IN", "IA",
                             "KS", "KY",
                             "LA",
                             "ME", "MD", "MA", "MI", "MN", "MS", "MO", "MT",
                             "NE", "NV", "NH", "NJ", "NM", "NY", "NC", "ND",
                             "OH", "OK", "OR",
                             "PA",
                             "RI",
                             "SC", "SD",
                             "TN", "TX",
                             "UT",
                             "VT", "VA",
                             "WA", "WV", "WI", "WY"};
    ui->cbx_state->addItems(theStates);
}

MainWindow::~MainWindow()
{
    delete ui;
}


