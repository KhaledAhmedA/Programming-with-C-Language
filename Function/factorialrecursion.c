#include <stdio.h>
int fact(int x);

void main(void)
{
    int x;
    int result;

    printf("X ");
    scanf("%d",&x);

    result=fact(x);

    printf("%d", result);

}

int fact(int x)
{
    int i;

    if(x==1)
        return(x);
    else
        for(i=1;i<x;i++)
        return(x*fact(x-1));
}
