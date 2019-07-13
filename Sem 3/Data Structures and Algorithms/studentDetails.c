#include <stdio.h>

struct Student  
{
    int rollno,marks[5],total;
    char name[25];
    float avg;
};

int main()
{
    struct Student s[5];
    int i,j;
    
    printf("Student Management System:-\n");
    
    for (i = 0; i < 5; i++)
    {
        printf("\nStudent %d details:-\n", (i+1));
        
        printf("Enter the name: ");
        scanf("%s", s[i].name);
        
        printf("Enter the roll number: ");
        scanf("%d", &s[i].rollno);
        
        printf("Enter the Subject Marks in a single line: ");
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &s[i].marks[j]);
        }
        
        // Calculating total 
        s[i].total = 0;
        for (j = 0; j < 5; j++)
        {
            s[i].total += s[i].marks[j];
        }

        s[i].avg = s[i].total / 5;
            
    }

    printf("\nDisplaying the Student Detials:-\n");
    for (i = 0; i< 5; i++)
    {
        printf("\nStudent %d details:-\n", (i+1));
        printf("Name: %s\n", s[i].name);
        printf("Roll number: %d\n", s[i].rollno);
        printf("Mark Details:-\n");

        for (j = 0; j < 5; j++)
        {
            printf("\tSub %d: %d\n", (j+1),s[i].marks[j]);
        }

        printf("\nTotal Marks: %d", s[i].total);
        printf("\nAverage Marks: %.1f\n", s[i].avg);
    }
    
    

    return 0;
}
