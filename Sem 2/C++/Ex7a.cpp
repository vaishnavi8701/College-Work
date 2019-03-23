#include <iostream>
using namespace std;

int main()
{
	
		int a,b;
		cout << "Enter the Value of A here: ";
		cin >> a;
		cout << "Enter the Value of B here: ";
		cin >> b;
	try{	
		if(b == 0)
			throw b;		
		cout << "A divided by B is " <<(a/b);
	}
	
	catch(...)
		{
			cout <<"ZeroError: Division cannot be possible.";
		}
		
	return 0;
}
