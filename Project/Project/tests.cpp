#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string>
#include<math.h>
#include <stdlib.h>
#include "numbers.h";
#include "Map.h";
using namespace	std;
#ifdef TEST



#define BOOST_TEST_MODULE tests
#include <boost/test/included/unit_test.hpp>

bool Is_Point_In_Square(Point point,double a)
{
    if(point.x>=0.0 && point.x<=a && point.y>=0.0 && point.y<=a)
        return true;
    return false;
}

int cmp( const void* point1  ,const void* point2)
{
    Point p1=*((Point*)point1);
    Point p2=*((Point*)point2);
    if(p1.x>p2.x || (p1.x==p2.x && p1.y>p2.y))
        return 1;
    if(p1.x==p2.x && p1.y==p2.y)
        return 0;
    else 
        return -1;

}

bool Find_Duplicated_Points(vector<Point> vec)
{
    for (int i=0;i<vec.size()-1;i++)
        if(vec[i].x==vec[i+1].x && vec[i].y==vec[i+1].y)
            return true;
    return false;
}

bool Check_Duplicated_Points(vector<Point> vec)
{
    qsort(&vec[0],vec.size(),sizeof(Point),cmp);
    return Find_Duplicated_Points(vec);
}

bool Is_Point_In_Circle(Point point, double r)
{
	if (pow(point.x,2)+pow(point.y,2)<=pow(r,2))
		return true;
	return false;
}

/*double cross_product(double x1, double y1,
	double x2, double y2,
	double x, double y)
{
	return (x - x2) * (y2 - y1) - (y - y2) * (x2 - x1);
}

bool Is_Point_In_Triangle(Point point,double a, double b)
{
	double x1, x2, x3, y1, y2, y3, x, y;
	x = point.x;
	y = point.y;
	x1 = 0;
	y1 = 0;
	x2 = a;
	y2 = 0;
	x3 = 0;
	y3 = b;
	bool cp1 = cross_product(x1, y1, x2, y2, x, y) < 0.0;
	bool cp2 = cross_product(x2, y2, x3, y3, x, y) < 0.0;
	bool cp3 = cross_product(x3, y3, x1, y1, x, y) < 0.0;
	return cp1 == cp2 && cp2 == cp3 && cp3 == cp1;
}*/
bool Is_Point_In_Triangle(Point point, double a, double b)
{
	
	//(x1-x0)*(y2-y1)-(x2-x1)*(y1-y0)
	//(x2-x0)*(y3-y2)-(x3-x2)*(y2-y0)
	//(x3-x0)*(y1-y3)-(x1-x3)*(y3-y0)
	


	double res1, res2, res3;
	res1 = (0 - point.x)*(0 - 0) - (a - 0)*(0 - point.y);
	res2 = (a - point.x)*(b - 0) - (0 - a)*(0 - point.y);
	res3 = (0 - point.x)*(0 - b) - (0 - 0)*(b - point.y);
	if ((res1 > 0 && res2 > 0 && res3 > 0)||(res1 < 0 && res2 < 0 && res3 < 0) || res1 == 0 || res2 == 0 || res3 == 0)
		return true;
	return false;
}

BOOST_AUTO_TEST_SUITE(test_suite1)

BOOST_AUTO_TEST_CASE(Points_In_Square)
{
    unsigned int seed=rand();
    srand(seed);
    double a=15.123;
    int n=123;
    vector<Point> vec=generate_points_in_square(n,a);
    BOOST_TEST(!Check_Duplicated_Points(vec));
    for(int i=0;i<vec.size();i++)
    {
        BOOST_TEST(Is_Point_In_Square(vec[i],a));
    }
}

BOOST_AUTO_TEST_CASE(Points_In_Circle)
{
	unsigned int seed = rand();
	srand(seed);
	double r = 20.12;
	int n = 156;
	vector<Point> vec = generate_points_in_circle(n, r);
        BOOST_TEST(!Check_Duplicated_Points(vec));
	for (int i = 0; i < vec.size(); i++)
	{
		BOOST_TEST(Is_Point_In_Circle(vec[i], r));
	}
}

BOOST_AUTO_TEST_CASE(Points_In_Triangle)
{
	unsigned int seed = rand();
	srand(seed);
	double a = 18.52;
	double b = 7.1;
	int n = 159;
	vector<Point> vec = generate_points_in_triangle(n, a , b);
  //  vec.push_back(Point(1,1));
  //  vec.push_back(Point(1,1));
    BOOST_TEST(!Check_Duplicated_Points(vec));
	for (int i = 0; i < vec.size(); i++)
	{
		BOOST_TEST(Is_Point_In_Triangle(vec[i], a , b));
	}
}


BOOST_AUTO_TEST_SUITE_END()
#endif
