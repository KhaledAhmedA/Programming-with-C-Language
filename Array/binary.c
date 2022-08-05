#include <stdio.h>

void main(void)
{
   unsigned int value;
   unsigned int i;


    printf("Enter Value: ");
    scanf("%d", &value);


    for(i=1 << 31; i>0;i=i/2)
        (value&i)?printf("1"):printf("0");


}
