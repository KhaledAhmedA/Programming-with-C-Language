#include <stdio.h>
void main(void)
{
    int num1,num2;
    char oper;

    printf("Enter Number Operator Number\n");
    scanf("%d %c %d",&num1,&oper,&num2);

    if(oper=='+')
        printf("sum = %d\n",num1+num2);
        else
    if(oper=='-')
        printf("subtraction = %d",num1-num2);
        else
    if(oper=='*')
        printf("multiplication = %d",num1*num2);
    if(oper=='/')
        printf("devision = %d",num1/num2);
    else
        printf("Unknown Operator");
}
