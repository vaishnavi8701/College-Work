#include <iostream>
using namespace std;

int main()
{
	int array[10] = {1,2,3,4,5,6,7,8,9,10},n;
	
	try{
		cout << "Enter the position to view the element here: ";
		cin >> n;
		
		if (n < 1 || n > 10)
			throw "SizeError: Position is OUT OF RANGE";
			
		cout << "Viewing the element: " << array[n-1] <<endl;
		
	}
	
	catch(const char *errorMessage)
		{
			cout << errorMessage;
		}
		
	return 0;
}
