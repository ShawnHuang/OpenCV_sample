#include "Library_name.hpp"
#include <opencv2/opencv.hpp>

Library_name::Library_name(){
  this->img;
  cv::VideoCapture cap(0); // open the default camera

  cv::namedWindow("Camera", CV_WINDOW_AUTOSIZE);

  printf("Capturing...\n");    
  while(cap.isOpened())
  {
      cap>>img;
      cv::imshow("Camera", img);
      //if Esc has been pressed:
      if(cv::waitKey(10) == 27) break;
  }

  cap.release();
}
Library_name::~Library_name(){
}
