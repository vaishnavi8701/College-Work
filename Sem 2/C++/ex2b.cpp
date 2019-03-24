#include <iostream>
using namespace std;

class travel
{
public:
        int no_adults,no_children,dist,rate;
        int i;
        travel()
        {
                cout << "Enter number of adult passengers: ";
                cin >> no_adults;
                cout << "Enter number of child passengers: ";
                cin >> no_children;
                cout << "Enter travelling distance: ";
                cin >> dist;
                rate = 2000;
                if(dist > 300)
                        {
                                for (i=0; i<dist-300; i++)
                                {
                                    rate = rate + 5;
                                }
                        }
                if (dist > 5000)
                {
                        cout << "You have Exceed our distance capacity.\n";
                }



        }


        travel(travel &obj2)
        {

no_adults = obj2.no_adults;
                no_children = obj2.no_children;
                dist = obj2.dist;
                rate = obj2.rate;
        }


        void show(){
                        cout <<"\n\nPassengers Details:-\n";

                        cout <<"No of Adult Passengers:  " <<no_adults;
                        cout <<"\nNo of Child Passengers: " <<no_children;
                        cout <<"\nDistance: " <<dist;
                        cout <<"\nRate: Rs." <<rate;
        }

        ~travel()
        {
                cout << "\n\nDestructor is called.\n";
        }


};




int main()
{
        travel obj;
        obj.show();
        return 0;
}

