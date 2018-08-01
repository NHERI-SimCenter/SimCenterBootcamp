#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_LE_first_name_editingFinished();
    void on_LE_last_name_editingFinished();
    void on_LE_date_month_editingFinished();
    void on_LE_date_day_editingFinished();
    void on_LE_date_year_editingFinished();
    void on_LE_address_editingFinished();
    void on_LE_city_editingFinished();
    void on_LE_zip_editingFinished();

    void on_actionSave_triggered();
    void on_actionNew_triggered();
    void on_actionOpen_triggered();
    void on_actionAbout_triggered();
    void on_actionQuit_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
