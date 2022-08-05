#include <stdio.h>
#include <string.h>

int string_len(char N[]);

void main(void)
{
    char Name[20];
    char name[20];

    printf("Enter Name: \n");
    gets(Name);

    printf("Hello, %s and ITS length is %d",Name,string_len(Name));

    printf("\nEnter name: \n");
    gets(name);
    printf("Hello, %s and length equal %d",name,strlen(name));
}

int string_len(char N[])
{
    int counter=0;

    while(N[counter]!='\0')
        counter++;

        return counter;
}
