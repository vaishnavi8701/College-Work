#include <iostream>
using namespace std;

class arraySum 
{
	public:
			int arr[10],i,n,sum;
			arraySum()
			{
				sum = 0;
			}
			
			void getArray()
			{
				cout << "Enter the number n here: ";
				cin >> n;
				cout << "Enter the array elements: ";
				for (i=0; i<n; i++)
					cin >> arr[i];
			}
			
			void getArray(int x)
			{
				for(i=0; i<x; i++)
				{
					sum+=arr[i];
				}
				cout << "Sum is " <<sum;
			}
};

int main()
{
	arraySum a;
	a.getArray();
	a.getArray(a.n);
	return 0;
}
