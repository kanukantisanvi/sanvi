#include<iostream>
using namespace std;

int main()
{
	/*int a = 10;
	int f = 20;
	float b = 3.14;
	char c = 's';*/
	//string d = "sanvi";
	
	//int d = a+f;
	
	int a;
	cout<<"Enter a number";
	cin>>a;
	
	string s;
	cout<<"What is your name?";
	cin>>s;
	cout<<"Hi,"<<s;
	
		string s1;
	cout<<"What is your name?";
	getline(cin,s1);
	cout<<"Hi,"<<s1;
	//cout<<a<<"\n"<<b<<" "<<c<<endl<<d; 
	
	return 0;
}
