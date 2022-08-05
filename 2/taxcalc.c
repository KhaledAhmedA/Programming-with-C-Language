#include <stdio.h>
#define TAX0 7000
#define TAX1 20000
#define TAX2 45000
#define TAX3 200000

void main(void)
{
    int total;
    float tax;

    printf("Enter Your Income: \n");
    scanf("%d",&total);

    if(total <= TAX0)
        tax = 0;
    else if(total <= TAX1)
        tax = (TAX0*0) + (total-TAX0)*0.1;
    else if(total <= TAX2)
        tax = (TAX0*0) + (TAX1-TAX0)*0.1 +(total-TAX1)*0.15;
    else if(total <= TAX3)
        tax = (TAX0*0) + (TAX1-TAX0)*0.1 + (TAX2-TAX1)*0.15 + (total-TAX2)*0.2;
    else if(total > TAX3)
        tax = (TAX0*0) + (TAX1-TAX0)*0.1 + (TAX2-TAX1)*0.15 + (TAX3-TAX2)*0.2 + (total-TAX3)*0.4;

    printf("The Tax You Have To Paid is: %f\n for income %d",tax, total);

}
