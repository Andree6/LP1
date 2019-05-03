#include<iostream>
using namespace std;

int area (int length, int width);
int main(){
	return length*width;
}
const int frame_width=2;
int framed_area(int x, int y)
{
	return area(x-frame_width ,y-frame_width);
}
