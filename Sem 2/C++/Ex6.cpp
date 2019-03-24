#include <iostream>
using namespace std;

class vehicle 
{
	public:
		char name[25],fuelType[10],type[10];
		int no_wheels,airbags,suspensions,vehicleNumber;
		
		virtual void enter()
		{
			cout << "Enter the vehicle type here: ";
			cin >> type;
			cout << "Enter the vehicle number here: ";
			cin >> vehicleNumber;
			
		}
		
		virtual void show()
		{
			cout << "Vehicle Type: " <<type <<endl;
			cout << "Vehicle Reg. No. is " <<vehicleNumber <<endl;
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

class bike:public vehicle
{
	public:
		void enter()
		{
			cout << "Enter Bike Model: ";
			cin >> name;
			cout << "Enter Fuel Type: ";
			cin >> fuelType;
			cout << "Enter No. of Suspensions: ";
			cin >> suspensions;
			no_wheels = 4;
		}
		
		void show()
		{
			cout << "Bike Details:-\n";
			cout << "Model Name: " <<name <<endl;
			cout << "Fuel Type: " <<fuelType <<endl;
			cout << "Suspensions: " <<suspensions <<endl;
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
