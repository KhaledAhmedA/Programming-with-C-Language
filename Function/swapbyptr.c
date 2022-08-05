#include <stdio.h>
void swapper(int*x,int*y);


void main(void)
{
    int x=100;
    int y=200;

    printf("X = %d, Y = %d\n",x,y);
    swapper(&x,&y);
    printf("X = %d, Y = %d\n",x,y);
}

void swapper(int*x,int*y)
{
    int temp;

    temp=*x;
    *x=*y;
    *y=temp;
}
