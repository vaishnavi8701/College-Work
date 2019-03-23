#include <stdio.h>
#define max (25)
int main()
{
    int n,arr[max],i,sum=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        sum+=arr[i];
    printf("Sum of array elements: %d",sum);
    return 0;
}
