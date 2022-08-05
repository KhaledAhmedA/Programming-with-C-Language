#include <stdio.h>
void binary(int n);

void main(void)
{
int n;
    scanf("%d",&n);
    binary(n);
}

void binary(int n)
{
    if(n>0)
    {
        binary(n/2);
        printf("%d",n%2);
    }
}
