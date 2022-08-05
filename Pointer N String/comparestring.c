#include<stdio.h>
#include<string.h>

int compare(const char*ft, const char*lt);

void main(void){

    char *ft= "Khaled";
    char *lt= "Ahmed";
    int comp;


    comp = compare(ft, lt);

    if(comp == 0 )
        printf("%s = %s",ft,lt);
    if(comp == 1 )
        printf("%s > %s",ft,lt);
    if(comp == -1 )
        printf("%s < %s",ft,lt);
}

int compare(const char*ft, const char*lt)
{
    int i = 0;
    int comp = 0;
    if (lt==ft) return comp;
    while(comp== 0)
    {
        if (comp != 0) break;
        if (*(ft+i) == *(lt+i))
            comp= 0;
        else if (*(ft+i) > *(lt+i))
            comp= 1;
        else
            comp= -1;
        i++;
    }
    return comp;
}


