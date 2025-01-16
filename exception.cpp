#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	
	cin>>a>>b;
	
	try{
		if(b==0){
			throw("Error Because b is zero");
		}
		else{
			int div = a/b;
		cout<<div;
		}
		
	}
	catch(string s){
		cout<<s;
		
	}
	
	int div = a/b;
	
	cout<<div;
	
	return 0;
}
