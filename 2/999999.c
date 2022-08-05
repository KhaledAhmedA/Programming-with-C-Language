#include <stdio.h>
void written(int number);
void do1(int number);
void do2(int number);
void do3(int number);

void main(void)
{
    int number;

    printf("Enter NUMBER: ");
    scanf("%d",&number);
    written(number);
}

void written(int number)
{
    if(number==0)
        printf(" Zero ");
    else if(number<10)
        do1(number);
    else if(number<20)
        do2(number);
    else if(number<100)
        {
        do3(number/10);
        do1(number%10);
        }
    else if(number<1000)
    {
        if(number<100)
        written(number);
        else
        written(number/100);
        printf(" Hundred ");
        written(number%100);

    }
    else if(number<1000000)
    {
        if(number<1000)
        written(number);
        else
        written(number/1000);
        printf(" Thousand ");
        written(number%1000);

    }
    else if(number)
    {
        if(number<1000000)
        written(number);
        else
        written(number/1000000);
        printf(" Million ");
        written(number%1000000);
    }
}

void do1(int number)
{
    switch(number)
    {
            case 1:
            printf(" One ");
            break;
            case 2:
            printf(" Two ");
            break;
            case 3:
            printf(" Three ");
            break;
            case 4:
            printf(" Four ");
            break;
            case 5:
            printf(" Five ");
            break;
            case 6:
            printf(" Six ");
            break;
            case 7:
            printf(" Seven ");
            break;
            case 8:
            printf(" Eight ");
            break;
            case 9:
            printf(" Nine ");
            break;
    }
}

void do2(int number)
{
    switch(number)
    {
            case 10:
            printf(" Ten ");
            break;
            case 11:
            printf(" Eleven ");
            break;
            case 12:
            printf(" Twelve ");
            break;
            case 13:
            printf(" Thirteen ");
            break;
            case 14:
            printf(" Fourteen ");
            break;
            case 15:
            printf(" Fifteen ");
            break;
            case 16:
            printf(" Sixteen ");
            break;
            case 17:
            printf(" Seventeen ");
            break;
            case 18:
            printf(" Eighteen ");
            break;
            case 19:
            printf(" Nineteen ");
            break;
    }
}

void do3(int number)
{
    switch(number)
    {
            case 2:
            printf(" Twenty ");
            break;
            case 3:
            printf(" Thirty ");
            break;
            case 4:
            printf(" Fourty ");
            break;
            case 5:
            printf(" Fifty ");
            break;
            case 6:
            printf(" Sixty ");
            break;
            case 7:
            printf(" Seventy ");
            break;
            case 8:
            printf(" Eighty ");
            break;
            case 9:
            printf(" Ninety ");
            break;
    }
}













