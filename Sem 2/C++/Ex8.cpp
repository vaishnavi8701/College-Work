#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
	list<int> array;
	list<int> array1;
	list<int>::iterator it;
	
	int a,b,n,pos,i;
	
	//Entering elements of List 1
	cout <<"Enter two numbers to insert at the back in list 1: ";
	cin >>a >>b;
	array.push_back(a);
	array.push_back(b);
	
	cout <<"Enter two numbers to insert at the front in list 1: ";
	cin >>a >>b;
	array.push_front(a);
	array.push_front(b);
	
	cout <<"Displaying the List 1: ";
	for(it=array.begin(); it!=array.end(); it++)
		cout <<*it <<" ";
	cout <<endl;
	
	//Removing elements from List 1
	array.pop_back();
	cout <<"Removed Last Element." <<endl;
	cout <<"Displaying the List 1: ";
	for(it=array.begin(); it!=array.end(); it++)
		cout <<*it <<" ";
	cout <<endl;
	
	//Inserting Elements
	cout <<"Enter the position to insert: ";
	cin >> pos;
	cout << "Enter the number to insert at given position: ";
	cin >> n;
	it = array.begin();
	for(i=1; i!=pos; i++)
		it++;
	array.insert(it,n);
	cout <<"Displaying the List 1 after insertion: ";
	for(it=array.begin(); it!=array.end(); it++)
		cout <<*it <<" ";
	cout <<endl;
	
	//Entering elements of List 2
	cout <<"Enter two numbers to insert at the back in list 2: ";
	cin >>a >>b;
	array1.push_back(a);
	array1.push_back(b);
	
	cout <<"Enter two numbers to insert at the front in list 2: ";
	cin >>a >>b;
	array1.push_front(a);
	array1.push_front(b);
	
	cout <<"Displaying the List 2: ";
	for(it=array1.begin(); it!=array1.end(); it++)
		cout <<*it <<" ";
	cout <<endl;
	
	//Merging List 2 with List 1
	array.merge(array1);
	cout <<"Displaying the Merged List: ";
	for(it=array.begin(); it!=array.end(); it++)
		cout <<*it <<" ";
	cout <<endl;
	
	//Sorting List 1
	array.sort();
	cout <<"Displaying the Sorted List: ";
	for(it=array.begin(); it!=array.end(); it++)
		cout <<*it <<" ";
	cout <<endl;
	
	return 0;
}

