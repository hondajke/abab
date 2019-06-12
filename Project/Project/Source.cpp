#ifndef TEST
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<cstdlib>
#include<ctime>
#include "Map.h";
using namespace	std;
int main(){
    srand(time(0));
    vector<Point> vec=generate_points_in_triangle(13,20,15);
    for(int i=0;i<vec.size();i++)
        cout<<vec[i].x<<" "<<vec[i].y<<endl;
    
    
  
_getch();
}

#endif