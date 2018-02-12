#include <opencv2/opencv.hpp>
#include <stdio.h>
#include<iostream>
using namespace cv;
using namespace std;

int main()
{
    VideoCapture vid("data/trip401.mp4");
    namedWindow("figure", CV_WINDOW_AUTOSIZE);
    int frame_count=vid.get(CV_CAP_PROP_FRAME_COUNT);
    cout<<"frame_count="<<frame_count<<"\n";
    int k=2811;
    for(int i=1;i<frame_count;i++)
    {
          k=k+1;
          Mat frame,frame2,frame3;
          vid>> frame;
	  //flip(frame,frame2, 0);
	  //flip(frame2,frame3, 1);
          cout<<"i="<<k<<"\n";
          char p[128];
          sprintf(p,"frames/frame_%d.jpg",k);
          imwrite(p,frame);
          //imshow("figure", frame3);
          if( waitKey(1) == 27 ) break; // stop capturing by pressing ESC
    }
    return 1;
}
