#include <stdio.h>
void main(void)
{
    float num;

    printf("enter number\n");
    scanf("%f",&num);

    if(num > 0)
        printf("positive value\n");
    else if (num < 0)
        printf("negative value\n");
    else
        printf("zero value");

}
