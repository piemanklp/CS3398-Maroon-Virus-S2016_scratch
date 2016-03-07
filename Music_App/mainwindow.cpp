#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>
#include <QApplication>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void metronome()
{
    QWidget *metWindow = new QWidget;
    metWindow->setWindowTitle("Metronome");

    QSpinBox *spinner = new QSpinBox;
    QSlider *slider = new QSlider(Qt::Horizontal);
    spinner->setRange(40, 208);
    slider->setRange(40, 208);
    QObject::connect(spinner, SIGNAL(valueChanged(int)),
                     slider, SLOT(setValue(int)));
    QObject::connect(slider, SIGNAL(valueChanged(int)),
                     spinner, SLOT(setValue(int)));
    spinner->setValue(92);

    QPushButton *startButton = new QPushButton("Start");
    QObject::connect(startButton, SIGNAL(clicked()), metWindow, SLOT());
    QPushButton *stopButton = new QPushButton("Stop");
    QObject::connect(stopButton, SIGNAL(clicked()), metWindow, SLOT(close()));

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(startButton);
    layout->addWidget(slider);
    layout->addWidget(spinner);
    layout->addWidget(stopButton);
    metWindow->setLayout(layout);

    metWindow->show();
}

void playNote(){

}
void MainWindow::on_actionOpen_triggered()
{
    metronome();
    playNote();
}

