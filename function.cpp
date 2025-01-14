include<iostream>
using namespace std;

void sayHello(string x)
{
	cout<<"Hello "<<x<<endl;
}
int add(int a, int b)
{
	int c = a + b;
	return c;
}

int main()
{
//	sayHello("sanvi");
//	int k = add(3, 6);
//	
//	cout<<k<<endl;
	
	for(int i=0;i<=5;i++)
	{
		if(i==3)
		{
			break;
		}
		cout<<i<<endl;
	}
		
	return 0;	
}
