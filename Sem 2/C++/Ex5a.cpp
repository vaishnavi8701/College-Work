#include <iostream>
#define size 20
using namespace std;

class personal
{
        public:
                char name[size],fathern[size],dept[size],dob[size];
                long double phno;
                int rollno;
                void enter()
                {
                        cout << "Enter Student Name: ";
                        cin >> name;
                        cout << "Enter Student Father Name: ";
                        cin >> fathern;
                        cout << "Enter Student Date of Birth: ";
                        cin >> dob;
                        cout << "\nEnter Student Phone Number: ";
                        cin >> phno;
                        cout << "\nEnter Student Department: ";
                        cin >> dept;
                        cout << "Enter Student Roll No.: ";
                        cin >> rollno;
                }

};

class mark
{
        public:
                float marks[5],avg,total;
                int i;

                void getMarks()
                {
                        for(i=0; i<5; i++)
                        {
                                cout << "Enter your mark of Sub" << i+1 <<" here: ";
                                cin >> marks[i];
                        }
                }

	int calAvg()
                {
                        total = 0;
                        for(i=0; i<5; i++)
                        {
                                total += marks[i];
                        }
                        avg = total / 5;
                        return avg;
                }
};

class cms:public personal,public mark
{
        public:
        void display()
        {
                personal::enter();
                mark::getMarks();
                mark::calAvg();
                cout << "\n";
                cout << "Student Details:-\n";
                cout << "Name: " <<name <<endl;
                cout << "Roll No: " <<rollno;
                cout << endl;
                cout << "Mark Detials:-\n";
                for (int y=0; y<5; y++)
                {
                        cout << "Sub " <<i+1 <<" : " <<marks[y] <<endl;
        }
                cout << endl;
                cout << "Total: " <<total <<"/500" <<endl;
                cout <<"Average: " <<avg <<endl;
        }
};

int main()
{
        cms A;
        A.display();
        return 0;
}

