#include <iostream>
#define size 5
using namespace std;

template <class T,class T1>

T sort (T a[],T1 n)
{
	int temp,i,j;
	cout << "Sorting array.";
	for (i=0; i<n-1; i++)
	{
		for(j=0; j<n-1-i; j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	

	cout << "Displaying the array: ";
	for (i=0; i<n; i++)
	{
		cout << a[i] <<" ";
	}
	cout <<endl <<endl;
}

int main()
{
	int opt;
	do
	{
		cout << "Press 1 for Sorting integer array." <<endl;
		cout << "Press 2 for Sorting float array." <<endl;
		cout << "Press 3 for Sorting characters array." <<endl;
		cout << "Press 4 for Exit." <<endl;
		cout << "Enter your option here: ";
		cin >> opt;
		
		switch(opt)
		{
			case 1:{
				int arr[size],k;
				cout << "Enter your array here: ";
				for(k=0; k<size; k++)
					cin >> arr[k];
				sort(arr,size);				
				break;
			}
			
			case 2:{
				float arr[size];
				int k;
				cout << "Enter your array here: ";
				for(k=0; k<size; k++)
					cin >> arr[k];
				sort(arr,size);
				break;
			}	
			
			case 3:{
				char arr[size];
				int k;
				cout << "Enter your array here: ";
				for(k=0; k<size; k++)
					cin >> arr[k];
				sort(arr,size);
				break;
			}
		}
		
	}while(opt!=4);
	
	cout << "Thank you for using my application.";
}

