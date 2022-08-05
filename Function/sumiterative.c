#include <stdio.h>

int sum(int f, int s);

void main(void)
{
    int fn,sn;

    printf("Enter First Number ");
    scanf("%d",&fn);

    printf("Enter Second Number");
    scanf("%d",&sn);

    printf("%d", sum(fn,sn));

}

int sum(int f, int s)
{
    int t;
    t=f+s;
    return(t);
}
