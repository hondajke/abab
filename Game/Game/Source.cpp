#include <iostream>
#include <windows.h>
#include <ctime>
#include <vector>
using namespace std;
class Point{
private:
	int x, y;
public:
	Point(int _x = 0, int _y = 0)
                : x(_x), y(_y) {}
        virtual ~Point() {}
 
        virtual void out_point(){
                std::cout << "x: " << x << std::endl
                        << "y: " << y << std::endl;
        }
 
        virtual void set_param(){
                std::cout << "x-> "; std::cin >> x;
                std::cout << "y-> "; std::cin >> y;
        }
 
        virtual void set_x(int _x) { x = _x;}
        virtual void set_y(int _y) { y = _y;}
};
class Map{
private:
		vector<Point> x[4];
public:
	void generate(int dx, int dy){
		int _x, _y;
		srand(time(NULL));
		int x1, y1;
		x1 = dx + rand() % dy;
		y1 = dx + rand() % dy;
		_x = 50;
		_y = 50;
		HDC hDC = GetDC( GetConsoleWindow( ) );
		HPEN Pen = CreatePen( PS_SOLID, 1, RGB(255, 255, 255));
		SelectObject( hDC, Pen );
		MoveToEx( hDC, _x, _y, NULL );
		LineTo( hDC, _x + x1, _y);
		LineTo( hDC, _x + x1, _y + y1);
		LineTo( hDC, _x, _y + y1);
		LineTo( hDC, _x, _y);
	}
};
int main(){
	Map T;
	T.generate(50,200);
	system("pause");
	return 0;
}