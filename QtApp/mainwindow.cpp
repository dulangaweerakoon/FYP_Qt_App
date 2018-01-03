#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    imageScene = new QGraphicsScene(this);
    globalScene = new QGraphicsScene(this);

    ui->graphicsView->setScene(imageScene);
    ui->glob_track_view->setScene(globalScene);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit_2->setText(ui->lineEdit->text());
}

void MainWindow::update_globalTrack(int x, int y){
    cv::Mat image;
    cv::Mat temp;
    image = cv::imread("/home/FYP/QtApp/floormap.png", CV_LOAD_IMAGE_COLOR);
    cv::cvtColor(image, temp, CV_BGR2RGB);
    cv::drawMarker(temp,cv::Point(x,y),0xffffff,cv::MARKER_CROSS,1,5,8);

    QImage qImage((const uchar *) temp.data, temp.cols, temp.rows, temp.step, QImage::Format_RGB888);
    qImage.bits();

    globalScene->clear();

    globalScene->addPixmap(QPixmap::fromImage(qImage));
    globalScene->update();
    ui->glob_track_view->update();
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
