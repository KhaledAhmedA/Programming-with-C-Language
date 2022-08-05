#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct student
{
    char id_num[5];
    char name[20];
    int age;
};

void swap(struct student*s1, struct student*s2);
int add_student(struct student std[], int i);
int bar(int size);
void print_std(struct student s);
void print_all(struct student a[], int size);
void sort_name (struct student a[], int size);
void search_age(struct student a[], int size);
void search_code(struct student a[], int size);

void main(void)
{
    struct student std[100];
    int size  = 0;
    int op;

    do
    {
        system ("cls");

        int op = 0 ;
        op = bar(size);

        if (op == 1)
            size = add_student(std, size);

        if (op == 2)
            search_age(std, size);

        if (op == 3)
            search_code(std, size);

         if (op == 4)
            print_all(std, size);


        }while(1);


        system ("cls");
}

int bar(int size)
{
        char ch ;
        system ("cls");

        printf("Operation on the data for [%d] students \n",size);
        printf("[1] add student data \n");
        printf("[2] students name by less then age \n");
        printf("[3] student data by ID \n");
        printf("[4] print all student data \n");
        printf("=== press the number 1,2,3,4 to select operation ===\n");

        ch = getch();
        if (ch == 49 )
        return 1 ;

        if (ch == 50 )
        return 2 ;

        if (ch == 51 )
        return 3 ;

        if (ch == 52 )
        return 4 ;

}
int add_student(struct student std[], int i)
{

    int ins;
    char ch;

    ins = 1;

    while (ins == 1)
    {
        system ("cls");
        printf("Student[%d]: \n",i+1);
        printf("Code: ");
        scanf("%s",std[i].id_num) ;
        printf("Name : ");
        fflush(stdin);
        gets(std[i].name);
        printf("Age: ");
        scanf("%d",&std[i].age);

        i++ ;
        printf("Press A TO Reinsert\n");

        ch = getch();

        if (ch != 65){
            ins = 0;
            break;
        }

        system ("cls");

    }
    return i;

}
void search_age(struct student a[], int size)
{
    int age,i;
    int count = 0;
    system("cls");
    printf("Students with age less than: ");
    scanf("%d",&age);

    for(i=0;i<size;i++)
        if(a[i].age < age) count++ ;


     if(count > 0 ){
        printf("ID\t\tName\t\tAge\n") ;
        for(i=0 ;i<size;i++)
            if(a[i].age < age) print_std(a[i]);
        }else
            printf("NOT FOUND!!");
    printf("\n press any key to back for menu");
    getch();
}

void search_code(struct student a[], int size)
{
    char code[10] ;
    int count = 0 ;
    int i;

    system("cls");
    printf("Enter Student CODE: ");
    scanf("%s",&code);

    for(i=0;i<size;i++)
        if(strcmp(a[i].id_num, code) == 0) count++;


     if(count > 0 ){
        printf("ID\t\tName\t\tAge\n");
        for(i=0;i<size;i++)
            if (strcmp(a[i].id_num, code) == 0) print_std(a[i]);
        }else
            printf("NOT FOUND!!!");
    printf("\n press any key to back for menu");
    getch();
}

void sort_name(struct student a[], int size)
{
    int i,j;
    for(i=0;i<size;i++){
            for(j=i;j<size;j++){
                if (strcmp(a[i].name, a[j].name) > 0){
                    swap(&a[i],&a[j]);
                }
            }
    }
}

void swap(struct student *s1, struct student *s2)
{
    struct student temp;

    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

void print_std(struct student s)
{
    printf("%s\t\t%s\t\t%d\n", s.id_num, s.name,s.age);

}

void print_all(struct student a[], int size){
    int i;
    system("cls");
    printf("Student Info \n");


    if(size > 0){
        printf("ID\t\tName\t\tAge\n");
        for (i=0;i<size;i++)
            print_std(a[i]);
    }
    else
        printf("\nData NOT FOUND!!\n");

    printf("\n press any key to back for menu");
    getch();
}
