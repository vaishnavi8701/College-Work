#include <stdio.h>

int main()
{
    int ARR[]={1,2,3,4,5,6,7,8},n,i;
    printf("Enter the element to search: ");
    scanf("%d",&n);
    
    for(i=0;;i++)
    {
        if(ARR[i] == n)
            break;
    }
    printf("%d is found at %d position",n,i+1);
    return 0;
}
