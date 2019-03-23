//Alphabet - Vowel or Consonant ??

#include<stdio.h>
void main()
{
	char ch;
	
	printf("Enter your character here: ");
	scanf("%c",&ch);
	
	if ((ch>='a' || ch<='z') || (ch>='A' || ch<='Z'))
	{
		if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
		{
			printf("Given character is a vowel\n");
		}
		
		else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
		{
			printf("Given character is a vowel\n");
		}
		
		else{
			printf("Given character is a consonant\n");
		}
	}
	
	else if(ch=='1' || ch=='2' || ch=='3' || ch=='4' || ch=='5' || ch=='6' || ch=='7' || ch=='8' || ch=='9' || ch=='0')
	{
		printf("Given character is a digit\n");
	}
	
	else {
		printf("Input is Special character\n");
	}
	
}
