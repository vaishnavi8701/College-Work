#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float basicPay,hra,da,total;
};

int main()
{
    struct Employee e[5];
    int i;

    printf("Employee Management System:-\n");


    for(i=0; i<5; i++){

        //Values of HRA and DA are fixed.
        e[i].hra = 15;
        e[i].da = 13;

        //Getting values of employee
        printf("\nEmployee %d details:-\n", (i+1));
        printf("Enter the name: ");
        scanf("%s", e[i].name);
        printf("Enter the id: ");
        scanf("%d", &e[i].id);
        printf("Enter the basic pay: ");
        scanf("%f", &e[i].basicPay);

        //Calculating HRA, DA and netPay
        e[i].hra = (e[i].hra/100) * e[i].basicPay;
        e[i].da = (e[i].da/100) * e[i].basicPay;
        e[i].total = e[i].basicPay + e[i].hra + e[i].da; 
    }

    printf("\nDisplaying Employee Details:-\n");
    for(i=0; i<5; i++){
        printf("\nEmployee %d details:-\n", (i+1));
        printf("Name: %s\n", e[i].name);
        printf("ID number: %d\n", e[i].id);
        printf("NetPay is Rs.%.1f\n", e[i].total);
    }

    return 0;
}