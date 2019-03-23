#include <iostream>
using namespace std;

class vehicle 
{
	public:
		char name[25],fuelType[10];
		int no_wheels,airbags;
		
		virtual void enter()
		{
			cout << "Running Base class enter function.";
		}
		
		virtual void show()
		{
			cout << "Running base class show function.";
		}
		
};

class car:public vehicle
{
	public:
		void enter()
		{
			cout << "Enter Car Model: ";
			cin >> name;
			cout << "Enter Fuel Type: ";
			cin >> fuelType;
			cout << "Enter No. of Airbags: ";
			cin >> airbags;
			no_wheels = 4;
		}
		
		void show()
		{
			cout << "Car Details:-\n";
			cout << "Model Name: " <<name <<endl;
			cout << "Fuel Type: " <<fuelType <<endl;
			cout << "Airbags: " <<airbags <<endl;
			cout << "Wheels: "<<no_wheels <<endl;
		}
};

int main()
{
	vehicle *ptr;
	car ob;
	ptr = &ob;
	ptr->enter();
	ptr->show();
	return 0;
}
