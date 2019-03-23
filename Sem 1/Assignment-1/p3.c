//Desk Calculator Program
#include<stdio.h>
int main()
{
  float n1,n2;
  //Ask two numbers from user
  printf("Enter the two digits\n");
  scanf("%f\n %f",&n1,&n2);
  printf("\nThe given numbers are %.2f and %.2f\n\n",n1,n2);
  
  //Add 2 numbers
  float add=n1+n2;
  printf("The Addition of given numbers is %.2f\n",add);
  
  //Subtract 2 numbers
  float sub=n1-n2;
  printf("The Subtraction of given numbers is %.2f\n",sub);
  
  //Multiply 2 numbers
  float product=n1*n2;
  printf("The Product of given numbers is %.2f\n",product);
  
  //Divide 2 numbers
  double divsion=n1/n2;
  printf("The Division of given numbers is %.4f\n",divsion);
  return 0;
}
