#include<stdio.h>
#include <stdlib.h>

void main (int argc, char * argv[1])
{
    FILE * fp;
    char ch;
    int  val;
    int ins;
    int i  = 0;
    printf("\n\n");



    fp = fopen("kh.txt","r");
    if (fp != NULL)
        while(fscanf(fp,"%10d", &val) != EOF) i++ ;
    fclose(fp);

    while(1)
    {
        fp = fopen("kh.txt","a");

        if (fp == NULL)
        {
            fp = fopen("kh.txt","w");
            fclose(fp);
        }else{
            break;
        }
    }

    ins = 1;

    while (ins == 1)
    {
        system ("cls");

        printf("\nEnter DATA[%d]: ",i+1);
        scanf("%d",&val);

        if(val == -1 ) break ;
        fprintf(fp,"%10d",val);
        i++ ;

        system ("cls");
    }


     if (fp != NULL & i > 0)
     {
         fp = fopen("kh.txt","r");
         printf("All DATA:\n");
         while(fscanf(fp,"%10d",&val) != EOF) printf("%-10d\n" ,val);
     }

    fclose(fp);
    exit(1);
}
