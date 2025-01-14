#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	
	 char name [20];
	 cout<<"please enter your name"<<endl;
	 cin>>name;
	 cout<<"you have entered"<<name<<endl;
	 
	 string name1="sanvi";
	 string name2="sai";
	 cout<<"please enter your name1"<<endl;
	 cin>>name1;
	 cout<<"you have entered name1 as"<<name1<<endl;
	 cout<<name1.size()<<endl;
	 //reverse(name1.begin(),name1.end());
	 sort(name1.begin(),name1.end());
	 cout<<name1<<endl;
	 string name3 = name1+name2;
	 cout<<name3<<endl;
	
	return 0;
}
