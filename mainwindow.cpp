#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QInputDialog"
#include <opencv2/opencv.hpp>
#include <QFileDialog>
#include <QTextCodec>
#include <QMessageBox>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(pushButton,SIGNAL(tiggered()),this,SLOT(openFile(int value)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Clicked()
{
           QString filename = QFileDialog::getOpenFileName(this,tr("Open Image"),"",tr("Image File(*.bmp *.jpg *.jpeg *.png)"));
           QTextCodec *code = QTextCodec::codecForName("gb18030");
           std::string name = code->fromUnicode(filename).data();
           image = cv::imread(name);
           if(image.data)
           {
               cv::cvtColor(image,image,CV_BGR2RGB);
               img = QImage((const unsigned char*)(image.data),image.cols,image.rows, image.cols*image.channels(),  QImage::Format_RGB888);
               ui->label->clear();
               ui->label->setPixmap(QPixmap::fromImage(img));
               //ui->processPushButton->setEnabled(true);
               ui->label->resize(ui->label->pixmap()->size());
           }
}

