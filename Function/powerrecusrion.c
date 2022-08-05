#include <stdio.h>
int power(int x,int n);

void main(void)
{
    int x,n;
    int result=1;

    printf("X ");
    scanf("%d",&x);

    printf("N ");
    scanf("%d",&n);

    result=power(x,n);

    printf("%d", result);

}

int power(int x,int n)
{
    if(n==1)
        return(x);
    else
        return (x*power(x,n-1));
}
