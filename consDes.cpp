#include<iostream
using namespace stg;

class Car{ 

    private:
        string color; // fixed typo here
    public:
        Car(string value){ // fixed typo here
            cout << "Object created" << endl;
            color = value;
        }
        ~Car()
        {
        	cout<<"Objected Destroyed"<<endl;
		}
        void printColor()
        {
            cout << color << endl;
        }
        void setColor(string c)
        {
            color = c; // fixed typo here
        }
};

int main()
{
    Car car1("black");
    
    car1.printColor(); // Uncommented and corrected method call to print the color
    
    return 0;
}

