#include <iostream>
using namespace std;

class clock
{
      public:
                int hr,min,sec;
                void enterTime()
                {
                        cout << "Enter the hours,minutes and seconds here: ";
                        cin >> hr >> min >> sec;
                }


}t1,t2;

int main()
{
        int hours,minutes,seconds;
        t1.enterTime();
        t2.enterTime();

        hours = t1.hr + t2.hr;
        minutes = t1.min + t2.min;
        seconds = t1.sec + t2.sec;

        cout <<"\n\nDisplaying the Result Time: \n" ;
        cout <<hours <<":" <<minutes <<":" <<seconds <<endl;


        return 0;
}
