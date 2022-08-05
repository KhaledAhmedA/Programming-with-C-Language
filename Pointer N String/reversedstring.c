#include<stdio.h>

int len(char*arr);
void reverse(char*arr, char*reve);

void main(void){

    char str[25] = "";
    char reve[25] = "";
    int i;

    printf("Enter String: ");
    gets(str);

    reverse(str, reve) ;
    printf("reversed is %s",reve);
}

int len(char*arr){
    int val= 0;
    while(*arr != NULL)
        {   arr++;
            val++;
        }
    return val;
}

void reverse(char*arr, char*reve)
{
    int i;
    int length = len(arr);
    for (i=0;i<length;i++)
    {
        *(reve+(length-i-1)) = *(arr+i);
    }
}

