//Ýlkay Durðun 152120181050 27.12.2023
#pragma once 
#include <iostream>
using namespace std;

class Pose {
	private:
		double x;
		double y;
		double th;
	 public:

		 double getX();
		 void setX(double x);
		 double getY();
		 void setY(double y);
		 double getth();
		 void setth(double th);
		 bool operator==(const Pose& other);
		 Pose operator+(const Pose& other);
		 Pose operator-(const Pose& other);
		 Pose& operator+=(const Pose& other);
		 Pose& operator-=(const Pose& other);
		 void operator<(const Pose& other);
		 void getPose(double& _x, double& _y, double& _th);
		 void setPose(double _x, double y, double _th);
		 double findDistanceTo(Pose pos);
		 double findAngleTo(Pose pos);

};