#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void update_graphicView(cv::Mat img);
    void update_globalTrack(int x, int y);

private slots:
    void on_pushButton_clicked();


private:
    Ui::MainWindow *ui;
    QGraphicsScene *imageScene;
    QGraphicsScene *globalScene;

};

#endif // MAINWINDOW_H
