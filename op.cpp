#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	int c;
	//arthmetic op
	c = a+b;
	cout<<c<<endl;
	c = a-b;
	cout<<c<<endl;
	c = a*b;
	cout<<c<<endl;
	c = a/b;
	cout<<c<<endl;
	c = a%b;
	cout<<c<<endl;
	
	//unary op
	c = -a;
	cout<<c<<endl;
	
	//assignment op
	c = a;
	cout<<c<<endl;
	c = 0;
	c+= 1;
	cout<<c<<endl;
	
	//logical op
	cout<<(4>>2)<<endl;
	
	return 0;
	
}
