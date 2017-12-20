#include "opencv2\opencv.hpp"

using namespace cv;
using namespace std;

int main()
{

	string fileName = "pikachu.avi"; //檔案名稱
	VideoCapture video(fileName); //讀檔案, 若要改成讀取視訊鏡頭的影像串流改成0或是1

	if (!video.isOpened())
	{
		return 0;
	}

	Mat videoFrame;
	while (true)
	{
		video >> videoFrame; //將影像餵給videoFrame

		if (videoFrame.empty())
		{
			break;
		}

		imshow("Video demo", videoFrame); //顯示影像
		waitKey(22);
	}
	return 0;
}