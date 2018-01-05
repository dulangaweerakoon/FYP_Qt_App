#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    imageScene = new QGraphicsScene(this);
    globalScene = new QGraphicsScene(this);
    heatmapScene = new QGraphicsScene(this);

    ui->graphicsView->setScene(imageScene);
    ui->glob_track_view->setScene(globalScene);
    ui->heatmap_view->setScene(heatmapScene);

    floormap = cv::imread("/home/FYP/QtApp/floormap.png", CV_LOAD_IMAGE_COLOR);
    cv::cvtColor(floormap, floormap, CV_BGR2RGB);

    map = cv::Mat::zeros(1177,682,CV_8UC1);
    pallete = cv::imread("/home/FYP/QtApp/map.jpg",CV_LOAD_IMAGE_COLOR);
    count = 0;

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
//    cv::Mat image;
    cv::Mat temp;
    floormap.copyTo(temp);
    //image = cv::imread("/home/FYP/QtApp/floormap.png", CV_LOAD_IMAGE_COLOR);
//    cv::cvtColor(image, temp, CV_BGR2RGB);
    cv::drawMarker(temp,cv::Point(x,y),0xff0000,cv::MARKER_CROSS,1,5,8);

    QImage qImage((const uchar *) temp.data, temp.cols, temp.rows, temp.step, QImage::Format_RGB888);
    qImage.bits();

    globalScene->clear();

    globalScene->addPixmap(QPixmap::fromImage(qImage));
    globalScene->update();
    ui->glob_track_view->update();
}

void MainWindow::update_heatmap(int x, int y){

    int val = pallete.at<cv::Vec3b>(0,0)[1];
    cv::Mat colourMap = cv::Mat::zeros(1177,682,CV_8UC3);
    for (int i=0;i<1177;i++){
        for (int j=0;j<682;j++){
            uint8_t temp = (map.at<uint8_t>(i,j)*count)/255;
            if (i>=y-5 && i<=y+5 && j>=x-5 &&j<=x+5){
                map.at<uint8_t>(i,j) = (temp+25)*255/(count+1);
                if (map.at<uint8_t>(i,j)==0){
                   colourMap.at<cv::Vec3b>(i,j)={0,0,0};
                }
                else{
                    colourMap.at<cv::Vec3b>(i,j) = pallete.at<cv::Vec3b>(map.at<uint8_t>(i,j),1);
                }
//                map.at<uint8_t>(i,j)+=255;
            }
            else{
                map.at<uint8_t>(i,j) = (temp)*255/(count+1);
                if (map.at<uint8_t>(i,j)==0){
                    colourMap.at<cv::Vec3b>(i,j)={0,0,0};
                }
                else{
                    colourMap.at<cv::Vec3b>(i,j) = pallete.at<cv::Vec3b>(map.at<uint8_t>(i,j),1);
                }
            }
        }
    }





    count+=1;

//    cv::Mat colourMap;
//    cv::applyColorMap(map,colourMap,cv::COLORMAP_JET);
    cv::cvtColor(colourMap,colourMap,CV_BGR2RGB);
    //colourMap = floormap + colourMap;
    QImage qImage((const uchar *) colourMap.data, colourMap.cols, colourMap.rows, colourMap.step, QImage::Format_RGB888);
    qImage.bits();

    heatmapScene->clear();

    heatmapScene->addPixmap(QPixmap::fromImage(qImage));
    heatmapScene->update();
    ui->heatmap_view->update();

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
