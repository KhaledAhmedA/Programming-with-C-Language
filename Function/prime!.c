#include <stdio.h>

void main(void)
{
    int x,i;

    printf("X ");
    scanf("%d",&x);

    for(i=2;i<x;i++)
    if(x%i==0)
    {
                printf("Not");
                break;

    }
    else
        printf("PRiME");

}
