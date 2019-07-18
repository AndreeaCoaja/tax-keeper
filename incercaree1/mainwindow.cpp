#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "repo.h"
#include "consummonth.h"

#include <QStringListModel>
#include <QStringList>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    repo.readFromFile();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

        for (int i = 0; i< this->repo.data.size(); ++i)
            if (ui->comboBox->currentText().toStdString() == this->repo.data[i].getMonth())
            {
                this->repo.data[i].add(ui->lineEdit->text().toFloat());
                break;
            }

        ui->lineEdit->clear();
}




void MainWindow::on_pushButton_2_clicked()
{
    for (int i = 0; i< this->repo.data.size(); ++i) {
        this->repo.appendToFile(this->repo.data[i]);
    }
}
