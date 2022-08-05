#include<stdio.h>
int len(char *arrchar) ;

void main(void){

    char string[40] = {} ;
    int i ;

    printf("enter string: ");
    gets(string);

    printf("the string length is %d\n" ,len(string) );
}


int len(char *arrchar){
    int val=0;
    while(*arrchar != '\0')
        {   arrchar++ ;
            val++ ;
        }
    return val ;
}

