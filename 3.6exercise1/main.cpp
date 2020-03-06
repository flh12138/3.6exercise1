#include<opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main()
{

	cv::Mat src_color = imread("E:\\PIC\\1.png");
    std::vector	<cv::Mat> channels;
	cv::split(src_color, channels);
	cv::Mat R = channels.at(0);
	cv::Mat G = channels.at(1);
	cv::Mat B = channels.at(2);
	cv::imshow("red", R);
	cv::imshow("blue", B);
	cv::imshow("green", G);
	cv::imshow("original", src_color);
	waitKey(0);

}