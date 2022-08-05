#include <stdio.h>

void main(void)
{
    int x,n,i;
    int result=1;

    printf("X ");
    scanf("%d",&x);

    printf("N ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        result=result*x;

    printf("%d",result);
}

/*
#include <stdio.h>
int power(int x,int n);
void main(void)
{
    int x,n,result;
    printf("X ");
    scanf("%d", &x);

    printf("N ");
    scanf("%d",&n);

    result=power(x,n);

    printf("%d",result);
}

int power(int x,int n)
{
    int i;
    int result=1;

    for(i=1;i<=n;i++)
        result=result*x;

    return result;
}
*/
