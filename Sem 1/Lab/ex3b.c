#include <stdio.h>

int main()
{
    int i,j,sd,nod;
    printf("Starting Day: ");
    scanf("%d",&sd);
    printf("No of Days: ");
    scanf("%d",&nod);
    printf("\n\n");
    printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat");
    printf("\n");
    
    //For loop for space
    for(i=0;i<sd;i++)
        printf("\t");
        
    //For loop -- printing calender
    for(j=1;j<=nod;j++)
    {    printf(" %d\t",j);
         i++;
         if(i%7 == 0)
          { printf("\n");}
    }
    return 0;
}
