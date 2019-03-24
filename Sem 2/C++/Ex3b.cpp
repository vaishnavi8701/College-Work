#include <iostream>
using namespace std;

class B;
class A {
    private:
      int numA;
    public:
      A() {
      	numA = 15;
      }
      friend int add(A, B);
      friend int sub(A, B);
      friend int pro(A, B);
      friend int div(A, B);
};

class B {
    private:
       int numB;
    public:
       B(){
       	numB = 7;
	   }
       friend int add(A , B);
       friend int sub(A, B);
       friend int pro(A, B);
       friend int div(A, B);
};

int add(A objectA, B objectB)
{
   return (objectA.numA + objectB.numB);
}

int sub(A objectA, B objectB)
{
   return (objectA.numA - objectB.numB);
}

int pro(A objectA, B objectB)
{
   return (objectA.numA * objectB.numB);
}

int div(A objectA, B objectB)
{
   return (objectA.numA / objectB.numB);
}

int main()
{
    A objectA;
    B objectB;
    cout<<"Sum: "<< add(objectA, objectB);
    return 0;
}
