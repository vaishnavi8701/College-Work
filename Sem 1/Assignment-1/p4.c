#include <stdio.h>
int main()
{
  int num;
  
  printf("Enter a number here:  ");
  scanf("%d",&num);
  
  
  printf("%d\n",num++);  
  
  printf("%d",++num);    
 
  return 0; 
}
