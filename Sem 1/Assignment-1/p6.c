#include <stdio.h>
int main()
{
    int a = 12, b = 25;
    printf("Output = %d\n", a&b);
    
    int c = 12, d = 25;
    printf("Output = %d\n", c|d);
    
    int e = 12, f = 25;
    printf("Output = %d\n", e^f);
    
    int num=212, i;
    for (i=0; i<=2; ++i)
        printf("Right shift by %d: %d\n", i, num>>i);

     printf("\n");

     for (i=0; i<=2; ++i) 
        printf("Left shift by %d: %d\n", i, num<<i);
    return 0;
}
