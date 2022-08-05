#include<stdio.h>
#include <stdlib.h>

void main (int argc, char * argv[1])
{
    FILE * fp;
    char ch;
    int cc = 0;
    int cw = 0;
    int cl = 0;

    printf("\n\n");

    fp = fopen(argv[1],"r");

    if (fp == NULL)
    {
        printf("CANOT OPEN THE FILE!");
        exit(0);
    }

    while((ch = getc(fp)) != EOF)
    {
        cc++;
        if (ch == ' ') cw++;
        if (ch == 10){
             cl++;
             cw++;
             cc++;
        }
    }
    cl++;
    cw++;

    fclose(fp);
    printf("%d char \t %d words \t %d lins \t " ,cc, cw, cl);
}
