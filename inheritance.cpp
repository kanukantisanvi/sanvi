#include<iostream>
using namespace std;

class person{
	private:
		string name;
	public:
		void run(){
			cout<<"Running"<<endl;
		}
			
};

class Student: public person{
	private:
		int rno;
	public:
		void read(){
			cout<<"Reading"<<endl;	
		}
};

int main()
{
	Student s1;
	s1.run();
	
	
	return 0;
}
