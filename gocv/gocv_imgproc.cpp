#include "gocv_imgproc.hpp"

void GcvGaussianBlur_(cv::Mat src, cv::Mat &dst, cv::Size ksize, double sigmaX, double sigmaY, int borderType) {
    cv::GaussianBlur(src, dst, ksize, sigmaX, sigmaY, borderType);
}