#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <opencv2/opencv.hpp>
using namespace cv;


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
    void on_pushButton_Clicked();
//  void on_pushButton2_Clicked();
private:
    cv::Mat image;
    QImage img;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
