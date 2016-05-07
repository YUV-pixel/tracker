/*
 * main.cpp
 * 
 * Copyright 2016 abhi <abhi@abhi-MacBookPro>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include "opencv2/core/core.hpp"
#include "opencv2/flann/miniflann.hpp"
#include "opencv2/imgproc/imgproc_c.h"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/video/video.hpp"
#include "opencv2/features2d/features2d.hpp"
#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/calib3d/calib3d.hpp"
#include "opencv2/ml/ml.hpp"
#include "opencv2/highgui/highgui_c.h"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/contrib/contrib.hpp"


//using namespace std;
//using namespace cv;



int main(int argc, char **argv)
{
	std::vector<cv::Point > points;
	std::vector<int> line;
	double param = 1.345;
	double reps = 0.01;
	double aeps = 0.01;
	
	
	for(int i = 0; i <10; i++)
	{
		cv::Point point(i, i+1);
		
		points.push_back(point);
	}	
	cv::fitLine(points, line, CV_DIST_HUBER, param, reps, aeps );
	std::cout<< line[0] <<", "<< line[1] << std::endl;
		
	return 0;
}
