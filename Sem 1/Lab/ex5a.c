#include <stdio.h>

int main()
{
    int len,i;
    char sen[25];
    printf("Enter a sentence here: ");
    scanf("%s",sen);
    
    for(i=0;sen[i]!='\0';i++)
        len++;
    printf("Length is %d",len);
    
    return 0;
}
