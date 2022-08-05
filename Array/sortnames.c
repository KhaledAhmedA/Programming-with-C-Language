#include <stdio.h>
#include <string.h>

void main(void)
{
    char names[10][25];
    char temp[25];
    int len,i,j;

    printf("Enter Names Size: ");
    scanf("%d",&len);
    fflush(stdin);

    for(i=0;i<len;i++)
    {
        printf("Value[%d]: ",i+1);
        gets(names[i]);
    }

    for(i=0;i<len-1;i++)
        for(j=i+1;j<len;j++)
        if(strcmp(names[i],names[j])>0)
    {
        strcpy(temp,names[i]);
        strcpy(names[i],names[j]);
        strcpy(names[j],temp);
    }

    for(i=0;i<len;i++)
        printf("%d %s\n",i,names[i]);


}
