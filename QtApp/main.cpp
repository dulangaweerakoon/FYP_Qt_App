#include "mainwindow.h"
#include <QApplication>
#include <QLineEdit>
#include <QPushButton>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>


using namespace cv;
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    VideoCapture cap(0); // open the default camera
        if(!cap.isOpened())  // check if we succeeded
            return -1;

//    for(;;){
//        Mat frame;
//        cap >> frame;
//        w.update_graphicView(frame);
//        waitKey(0);
//    }

      for (int i =0;i<1000;i+=10){
          w.update_globalTrack(i,i);
          waitKey(0);
      }

//    Mat image;
//        image = imread("/home/FYP/QtApp/analysis.png", CV_LOAD_IMAGE_COLOR);   // Read the file

//        if(! image.data )                              // Check for invalid input
//        {
//            cout <<  "Could not open or find the image" << std::endl ;
//            return -1;
//        }
//        w.update_graphicView(image);
//        namedWindow( "Display window", WINDOW_AUTOSIZE );// Create a window for display.
//        imshow( "Display window", image );                   // Show our image inside it.

//        waitKey(0);


    return a.exec();
}
