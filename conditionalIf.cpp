#include<iostream>
using namespace std;

int main()
{
	bool rain;
	cout<<"Is it raining?"<<endl;
	cin>>rain;
	
	if(rain==true)
	{
		cout<<"you cannot go to cinema"<<endl;
	}
	else
	{
		cout<<"you can go to cenima"<<endl;
	}
	
	int a;
	int b;
	
	cout<<"Enter A and B values"<<endl;
	cin>>a>>b;
	
	if(a<b){
		cout<<"B is greater"<<endl;
	}
	else{
		cout<<"A is greater"<<endl;
	}
	return 0;
}
