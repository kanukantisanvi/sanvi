#include<iostream>
using namespace std;

//area of square
void area(int a)
{
	int area = a*a;
	cout<<"Area of square"<<area<<endl;
}

//area of circle
void area(float r)
{
	float area = 3.14*r*r;
	cout<<"Area of circle"<<area<<endl;
}
//area of rectangle
void area(int l, int b)
{
	int area = l*b;
	cout<<"Area of circle"<<area<<endl;
}

int main()
{
	area(4);
	area(3,4);
	area(float(1.5));
	return 0;
}
