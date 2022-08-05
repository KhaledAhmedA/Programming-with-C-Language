#include <stdio.h>
int factorial(int n);

void main(void)
{
    int num;

    printf("Enter Number Want Multiple of: ");
    scanf("%d",&num);
    printf("%d Factorial is %d",num, factorial(num));
}

int factorial(int n)
{
    int multi=1,i;

    for(i=n;i>=1;i--)
    multi=multi*i;

    return(multi);

}
