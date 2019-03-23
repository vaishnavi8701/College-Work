#include <stdio.h>

int main()
{
    int vowel,i;
    char sen[25];
    printf("Enter a sentence here: ");
    scanf("%s",sen);
    
    for(i=0;sen[i]!='\0';i++)
    {
        if(sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' || sen[i] == 'o' || sen[i] == 'u' || sen[i] == 'A' || sen[i] == 'E' || sen[i] == 'I' || sen[i] == 'O' || sen[i] == 'U')
            vowel++;
    }
    printf("Number of vowels = %d",vowel);
    
    return 0;
}
