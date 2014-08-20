#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
int main( int argc, char** argv ) 
{
	using namespace std ;
	cv::namedWindow( "EX1", cv::WINDOW_AUTOSIZE );
	cv::VideoCapture cap;
	cap.open( string(argv[1]) );
	cv::Mat frame;
	while( 1 ) 
	{
		cap >> frame;
		if( !frame.data ) break;
		// Ran out of film
		cv::imshow( "EX1", frame );
		if( cv::waitKey(33) >= 0 ) 
			break;
	}
	return 0;
}