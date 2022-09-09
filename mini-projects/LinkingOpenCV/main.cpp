#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <bits/stdc++.h>

int main(int argc, char **argv){

    cv::VideoCapture cap(0);
    cv::Mat img;

    while(true){

        cap.read(img);
        cv::flip(img, img, 1);
        cv::imshow("Webcam", img);
        int key = cv::waitKey(1);
        //caso pressione "q" ou "esc", feche o programa
        if((key == 'q') || (key == 27)){
            break;
        }
    }
    return(0);
}
