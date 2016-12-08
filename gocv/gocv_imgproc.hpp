#include <opencv2/opencv.hpp>

// opencv2/core/base.hpp might need to include

void GcvGaussianBlur_(cv::Mat src, cv::Mat &dst, cv::Size ksize, double sigmaX, double sigmaY=0, int borderType=BORDER_DEFAULT);