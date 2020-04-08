#include<iostream>
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main(){
	Mat img=imread("img3.png");
	if(img.empty()){
		cout<<"Imgunable to read\n";
		cin.get();
		return -1;
		}
	bool check=imwrite("programmedIMG.png", img);
	if(check){
	cout<<"Written successfull\n";
	string windowName="DONE :)";
	namedWindow(windowName);
	imshow(windowName, img);
	waitKey(100);
	
	}
	else{
	cout<<"Write failed\n";
	return -1;
	}
	return 0;
}
