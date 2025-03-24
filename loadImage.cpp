/*   Load image file  */
//https://www.youtube.com/watch?v=2FYm3GOonhk  22:30
//https://www.computervision.zone/courses/opencv-cv/
//https://www.computervision.zone/topic/chapter-1-read-images-videos-and-webcams/



#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

#include <windows.h>
#include <Lmcons.h>
using namespace cv;
using namespace std;


/////////////////  Images  /  /////////////////////

void main() {

    
    
    
    
    string image_name = "2.jpg";
    string user_name = "rockman";

    string path = "C:/Users/" + user_name + "/Pictures/Saved Pictures/"  + image_name;
   
     


    Mat img = imread(path);
    imshow("Image", img);
    waitKey(0);

}
