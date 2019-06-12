#include<vector>
using namespace std;

struct Point
{
    double x;
    double y;
    Point(double _x, double _y)
    {
        x=_x;
        y=_y;
    }
};

double Rand_Double (double Limit);
bool Is_Point_Already_In_Vector(Point point,vector<Point> vec);
vector<Point> generate_points_in_square(int n , double a);
vector<Point> generate_points_in_circle(int n, double r);
vector<Point> generate_points_in_triangle(int n, double a, double b);