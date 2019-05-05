#include <iostream>
#define size 5
using namespace std;

template <class T>
class stack{
	public:
		T arr[size];
		int top,i,width;
		
		stack()
		{
			top = -1;
			width = 0;
			for(i=0; i<size; i++)
				arr[i] = 0;
		}
		
		T push(T n)
		{
			++top;
			if(top >= size)
				cout << "Stack is Full." <<endl <<endl;
			else
			{
				arr[top] = n;
				width++;
			}	
		}
		
		T pop()
		{
			if(top <= -1)
				cout << "Stack is Empty." <<endl <<endl;
			else 
			{
				arr[top] = 0;
				top--;
				width--;
			}
		}
		
		void display()
		{
			if(width == 0)
				cout << "No elements in Stack"<<endl <<endl;
			else
			{
			cout << "Displaying the stack: ";
			for(i=0; i<width; i++)
				cout <<arr[i] <<" ";
			cout <<endl <<endl;
			}
		}
};

int main()
{
	int opt,choice;
	do
	{
		cout <<"Main Menu:-\n";
		cout << "Press 1 for Integer Stack." <<endl;
		cout << "Press 2 for Float Stack." <<endl;
		cout << "Press 3 for Character stack." <<endl;
		cout << "Press 4 for Exit." <<endl;
		cout << "Enter your option here: ";
		cin >> opt;
		cout <<endl;
		switch(opt)
		{
			case 1:{
				stack<int> ob;
				
				do{
				cout << "Press 1 to Insert number." <<endl;
				cout << "Press 2 to Eject / Delete number." <<endl;
				cout << "Press 3 to Display the Stack." <<endl;
				cout << "Press 4 for Exit." <<endl;
				cout << "Enter the choice here: ";
				cin >> choice;
				int num;
				cout <<endl;
				switch(choice)
				{
					case 1:{
						cout << "Enter the number: ";
						cin >> num;
						ob.push(num);
						cout <<endl;
						break;
					}
					
					case 2:{
						ob.pop();
						cout <<endl;
						break;
					}
					
					case 3:{
						ob.display();
						break;
					}
				}
			}while(choice!=4);
			break;
		}
		
		case 2:{
				stack<float> ob;
				
				do{
				cout << "Press 1 to Insert float number." <<endl;
				cout << "Press 2 to Eject / Delete float number." <<endl;
				cout << "Press 3 to Display the Stack." <<endl;
				cout << "Press 4 for Exit." <<endl;
				cout << "Enter the choice here: ";
				cin >> choice;
				float num;
				cout <<endl;
				switch(choice)
				{
					case 1:{
						cout << "Enter the float number: ";
						cin >> num;
						ob.push(num);
						cout <<endl;
						break;
					}
					
					case 2:{
						ob.pop();
						cout <<endl;
						break;
					}
					
					case 3:{
						ob.display();
						break;
					}
				}
			}while(choice!=4);
			break;
			
		}
		
		case 3:{
				stack<char> ob;
				
				do{
				cout << "Press 1 to Insert letter." <<endl;
				cout << "Press 2 to Eject / Delete letter." <<endl;
				cout << "Press 3 to Display the Stack." <<endl;
				cout << "Press 4 for Exit." <<endl;
				cout << "Enter the choice here: ";
				cin >> choice;
				char letter;
				cout <<endl;
				switch(choice)
				{
					case 1:{
						cout << "\nEnter the letter: ";
						cin >> letter;
						ob.push(letter);
						cout <<endl;
						break;
					}
					
					case 2:{
						ob.pop();
						cout <<endl;
						break;
					}
					
					case 3:{
						ob.display();
						break;
					}
				}
				
			}while(choice!=4);
			break;
			
		}
		
		}}while(opt!=4);
		
		cout << "Thank you for using my application\n";
	return 0;
}
