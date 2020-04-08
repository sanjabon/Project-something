#include<opencv2/opencv.hpp>		//includes all opencv libs
#include<iostream>
using namespace std;
using namespace cv;
int main(){
	cout<<"Lets Go Yea\n";
	VideoCapture vid("Sample.webm");		// Relative path is mentioned
	if(vid.isOpened()==false){
		cout<<"Cann't open the video file\n";
		cin.get();
		return -1;
		}
	double fps=vid.get(CAP_PROP_FPS);
	cout<<"FPS="<<fps<<endl;
	string window_name="Gira Gira";
	while( 1==1){
	Mat F;
	if(vid.read(F)){
		imshow(window_name, F);
		if(waitKey(40.5)==27){				// wait key returns the code of the key which is pressed,(-1 in case of No key pressed), in this case, 27 is for ESC
											// to get the speed of video precise, take read FPS and  1/FPS *1000  , 1(/24)*1000 in my case 
			cout<<"ESC pressed bye the user, Exit\n";
			break;
			}
		}
	else{ cout<<"Video ended\n";
		break;
		}
	}
	return 0;

}
