#include "opencv2\opencv.hpp"

int main()
{
	cv::Mat img;
	img = cv::imread("rabbit.jpg", CV_LOAD_IMAGE_COLOR); //讀檔(彩色)
	cv::imshow("show rabbit", img); //顯示圖片在叫做"show rabbit"的視窗

	cv::Mat img_gray;
	img_gray = cv::imread("rabbit.jpg", CV_LOAD_IMAGE_GRAYSCALE); //讀檔(灰階)
	cv::imshow("show gray rabbit", img_gray); //顯示圖片在叫做"show gray rabbit"的視窗

	cv::imwrite("gray_rabbit.jpg", img_gray); //把讀成灰階檔的圖片存起來
	cv::waitKey(0); //讓視窗暫停直到下次按下鍵盤任意鍵
}