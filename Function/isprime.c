#include <stdio.h>
int isprime(int x);

void main(void)
{
    int x;

     printf("X ");
     scanf("%d",&x);

     if(isprime(x))
        printf("PRiME");
     else
        printf("NOT PRiME");

}

int isprime(int x)
{
    int prime=1;
    int i;

    for(i=2;i<x;i++)
        if(x%i==0)
    {
        prime=0;
        break;
    }
    return(prime);
}
