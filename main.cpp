#include "mainwindow.h"
#include <QApplication>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>


extern "C" {
#include <libavformat/avformat.h>
}

using namespace cv;

int main(int argc, char *argv[])
{
    // 测试opencv
//    Mat srcImg = imread("../../resources/test.jpeg");
//    imshow("source image", srcImg);
//
//    // 均值滤波
//    Mat dstImg;
//    blur(srcImg, dstImg, Size(5, 5));
//    imshow("dst image", dstImg);
//    waitKey(0);
//
//    return 0;


    // 测试ffmpeg
//    av_log_set_level(AV_LOG_DEBUG);
//    av_log(NULL, AV_LOG_INFO, "Now let's start the ffmpeg....\n\n");

    // 测试qt5
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}