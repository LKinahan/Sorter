#pragma once

#include <opencv2/opencv.hpp>
#include "CBase4618.h"
#include <pigpio.h>
#include <vector>
#include <string>

using namespace std;

#define SERVO1 13
#define SERVO2 21
#define BLULED 17
#define GRNLED 27
#define REDLED 22
#define BUTTON1 23
#define BUTTON2 24
#define JOYBUTTON 3
#define ON 1
#define OFF 0

//string mode_text;
/**
* @brief
* This class inherits from CBase4618
* @author Laurel Kinahan
*/
class CSort :public CBase4618 {
private:
    cv::VideoCapture vid;
    cv::Mat rgb, hsv, mask, temp, hsvlarge, yellow, balls, check;
    std::vector<cv::Vec4i> hierarchy;
    std::vector<std::vector<cv::Point>> contours_yellow;
    std::vector<std::vector<cv::Point>> contours_balls;
    cv::Point roi_PointOffset;
    cv::Point mode_textpoint;
    cv::Point count_textpoint;

public:
    CSort();
    ~CSort();
    int detectImage();
    void draw();
    void update();
    int kbhit(void);
    void StartStop();
    //    bool ManualG(int GRN);
    //    bool ManualO(int OTHER);
    void manual();
    void machine();
    void reset();
    char input;
    char keyPress;
    int OnOffFlag;
};
