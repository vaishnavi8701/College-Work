#include <iostream>
using namespace std;

class Array{
	float m[5];
	int i,n;
	public:
		Array()
		{
			n = 3;
		}
		
		void enter()
		{
			cout <<"Enter your array here:\n";
			
			for(i=0; i<n; i++)
			{
				cin >> m[i];
				
			}
		}
		
		void show()
		{
			cout << "Displaying the Result:\n";
			
			for(i=0; i<n; i++)
			{
				cout << m[i] <<" ";
			}
		}
		
		friend Array operator+(Array A,Array B);
		friend Array operator-(Array A,Array B);
		friend Array operator*(Array A,Array B);
};

Array operator+ (Array A,Array B)
{
	Array temp;
	for(int y=0; y<A.n; y++)
	{
		temp.m[y] = A.m[y] + B.m[y];	
	}
	
	return temp;
}

Array operator- (Array A,Array B)
{
	Array temp;
	for(int y=0; y<A.n; y++)
	{
		temp.m[y] = A.m[y] - B.m[y];	
	}
	
	return temp;
}

Array operator* (Array A,Array B)
{
	Array temp;
	for(int y=0; y<A.n; y++)
	{
		temp.m[y] = A.m[y] * B.m[y];	
	}
	
	return temp;
}

int main()
{
	Array A,B,C;
	A.enter();
	B.enter();
	C = A * B;
	C.show();
	return 0;
}

