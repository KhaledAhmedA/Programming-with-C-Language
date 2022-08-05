#include<stdio.h>
struct student
{
    char code[10];
    char name[25];
    char gender[10];
    int age;
} student1, student2;

void main(void)
{
    printf("Student No. 1\n");
    printf("===============\n");
    printf("Student Code: ");
    scanf("%s",student1.code);
    printf("Student Name: ");
    fflush(stdin);
    gets(student1.name);
    printf("Student Gender M/F: ");
    scanf("%s",student1.gender);
    printf("Student Age: ");
    scanf("%d",&student1.age);

    printf("Student No. 2\n");
    printf("===============\n");
    printf("Student Code: ");
    scanf("%s",student2.code);
    printf("Student Name: ");
    fflush(stdin);
    gets(student2.name);
    printf("Student Gender M/F: ");
    scanf("%s",student2.gender) ;
    printf("Student Age: ");
    scanf("%d",&student2.age);

    printf("\nOldest Student\n");
    printf("================\n");
    printf("code\t\tname\t\tgender\t\tage\n") ;
    if (student1.age > student2.age){
    printf("%s\t\t%s\t\t%s\t\t%d\n",student1.code, student1.name,student1.gender,student1.age);
    }else{
    printf("%s\t\t%s\t\t%s\t\t%d\n",student2.code, student2.name,student2.gender,student2.age);
    }
}
