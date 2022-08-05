#include<stdio.h>
#include<string.h>

void combine(const char*fn, const char*ln, char*name);

void main(void){

    char *fn= "Khaled ";
    char *ln= "Ahmed";
    char name[50]= "" ;

    combine(fn, ln, name);
    printf("%s" ,name);
}

void combine(const char*fn,const char*ln, char*name)
{

    int i,j ;
    for(i=0;i<strlen(fn);i++)
    {
        *(name+i) = *(fn+i) ;
    }

    for(j=0 ;j< strlen(ln);j++)
    {
        *(name+j+i) = *(ln+j) ;
    }
}


