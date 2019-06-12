#include<vector>
#include<cstdlib>
#include<iostream>
#include<ctime>
#define _USE_MATH_DEFINES
#include <math.h>
#include "Map.h"

using namespace std;

double Rand_Double (double Limit=1)
{
    double d = static_cast<double>(rand()) / RAND_MAX;
    double ans=d*Limit;
    return ans;
    }




 bool Is_Point_Already_In_Vector(Point point,vector<Point> vec)
 {
     for(int i=0;i<vec.size();i++)
     {
         if(vec[i].x == point.x && vec[i].y==point.y)
             return true;
     }
     return false;
 }




vector<Point> generate_points_in_square(int n , double a)
{
    vector<Point> vec;
    while(vec.size()<n)
    {
        Point p(Rand_Double(a),Rand_Double(a));
        if(!Is_Point_Already_In_Vector(p,vec))
        vec.push_back(p);
    }

    return vec;
}

vector<Point> generate_points_in_circle(int n, double r)
{
	vector<Point> vec;
	double Radius, Angle,x,y;
	while (vec.size() < n)
	{
		 Radius = r * sqrt(Rand_Double());
		 Angle = 2 * M_PI * Rand_Double();
		 x = Radius * cos(Angle);
		 y = Radius * sin(Angle);
		 Point p(x,y);
	   	if (!Is_Point_Already_In_Vector(p, vec))
			vec.push_back(p);
	}

	return vec;
}

vector<Point> generate_points_in_triangle(int n, double a , double b)
{
	vector<Point> vec;
	double x, y;
	

	while (vec.size() < n)
	{
		x = Rand_Double(a);
		y = Rand_Double(b);
		double res = (x - 0) * (0 - b) - (y - b) * (a - 0);

		if (res<0)
		{
			x = x-2*(x - a / 2);
			y = y-2*(y - b / 2);
		}
		Point p(x, y);
		if (!Is_Point_Already_In_Vector(p, vec))
			vec.push_back(p);
	}

	return vec;
}