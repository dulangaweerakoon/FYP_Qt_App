#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    imageScene = new QGraphicsScene(this);
    ui->graphicsView->setScene(imageScene);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit_2->setText(ui->lineEdit->text());
}

void MainWindow::update_graphicView(cv::Mat img)
{
   // ui->graphicsView->;
    cv::Mat temp;
    cv::cvtColor(img, temp, CV_BGR2RGB);
    QImage qImage((const uchar *) temp.data, temp.cols, temp.rows, temp.step, QImage::Format_RGB888);
    qImage.bits();

    imageScene->clear();

    imageScene->addPixmap(QPixmap::fromImage(qImage));
    imageScene->update();
    ui->graphicsView->update();
}
