#include <stdio.h>

void main(void)
{
    float degree;

    printf("Enter You TOTAL Degree bellow:\n");
    scanf("%f",&degree);

    if(degree<50)
        printf("Sorry! You Are Fail");
    else if(degree>=50 &&degree < 65)
        printf("Well, You Pass");
    else if(degree>=65 &&degree <80)
        printf("Fine, Your Mark is Good");
    else if(degree>=80 &&degree < 90)
        printf("Congratulation, Very Good Mark");
    else if(degree>=90)
        printf("Congratulation, Excellent Mark");
}
