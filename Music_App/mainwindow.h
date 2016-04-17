#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>
#include <QApplication>
#include <QPushButton>
#include <time.h>
#include <windows.h>
#include <cstdlib>
#include <stdio.h>
#include <mmsystem.h>
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


public slots:

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
