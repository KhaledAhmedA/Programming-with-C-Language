#include <stdio.h>

int sum(int fn, int sn);

void main(void)
{
    int fn,sn,number,i;

    printf("Enter First Number ");
    scanf("%d",&fn);

    printf("Enter Second Number ");
    scanf("%d",&sn);

    printf("Sum is: %d",sum(fn,sn));
}

int sum(int fs,int sn)
{
return fs+sn;
}
