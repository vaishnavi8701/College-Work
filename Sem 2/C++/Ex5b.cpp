#include <iostream>
#define size 20
using namespace std;

class train {
        public:
                char name[size],src[size],dest[size];
                int age,dob,tickets,dist;

                train()
                {
                        age = 0;
                        tickets = 0;
                }

                void passenger()
                {
                        cout << "Enter your name here: ";
                        cin >> name;
                        cout << "Enter your age here: ";
                        cin >> age;
                }

                void booking()
                {
                        cout << "Enter your source here: ";
                        cin >> src;
                        cout << "Enter your destination here: ";
                        cin >> dest;
                        cout << "Enter your destination distance here: ";
                        cin >> dist;
                        cout << "Enter the number of tickets: ";
                        cin >> tickets;
                }
};

class general:public train {
        public:
                int ac,cost;

                void basic(){ train::passenger(); train::booking(); }

                void generalBook()
 {
                        cost = 100;
                        cout << "Press 1 for AC train / 0 for Non-AC train: ";
                        cin >> ac;
                        if (dist >= 1000)
                        {
                                cost = 100 + (dist - 1000)*10;
                        }

                        if (ac == 1)
                                cost+=150;

                        cout << "You have to pay: " <<cost <<endl;
                        }

};

class takal:public train {
        public:
                int cost;
                void takalBook()
                {
                        cost = 200;
                        if (dist >=1000)
                                cost = 200 + (dist - 1000)*25;
                }
};


int main()
{
        int opt;
        cout << "Press 1 to Book in General." <<endl;
        cout << "Press 2 to Book in Takal" <<endl;
        cout << "Press 3 to Exit.";
        do{
        cin >> opt;

        switch(opt)
        {
                case 1:{
general A;
                        A.basic();
                        if (A.tickets <= 50)
                                A.generalBook();
                        else{
                                cout <<"Running Out of Ticket!.";
                                break;
                                }
                        }
                case 2:{
                        takal B;
                        B.takalBook();
                        }
        }
        }while(opt != 3);

        cout << "Thank you for using our application.";
        return 0;
}

