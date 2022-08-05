#include <stdio.h>

int fact(int n);


void main(void)
{
    int n;

scanf("%d",&n);
printf("%d\n%d",n,fact(n));

}


int fact(int n)
{
    if(n==1)
        return(1);
    else
        return(n*fact(n-1));

}
