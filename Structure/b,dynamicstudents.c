#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct student
{
    char id_num[5];
    char name[13];
    char gender[1];
    int age;
};

void swap(struct student*s1, struct student*s2);
void sort_name(struct student a[], int size);
void print_std(struct student s);
void print_all(struct student*a[], int size);

void main(void)
{
    int ins,i;
    struct student*std[100];
    char ch;

    i = 0;
    ins = 1;
    while (ins == 1)
    {
        std[i] = (struct student*)malloc(sizeof(struct student));
        printf("Student[%d]: \n",i+1);
        printf("Code: ");
        scanf("%s" ,std[i]->id_num);
        printf("Name: ");
        scanf("%s" ,std[i]->name);
        printf("Gender: ");
        scanf("%s" ,std[i]->gender);
        printf("Age: ");
        scanf("%d" ,&std[i]->age);

        i++ ;
        printf("Enter A To Insert Again\n");
        ch = getch();
        if (ch != 65){
            ins = 0;
            break;
        }

        system ("cls");

    }
    system ("cls");
    sort_name(std, i);
    print_all(std ,i);
}


void sort_name(struct student a[], int size)
{
    int i,j;
    for (i=0;i<size;i++){
            for (j=i;j<size;j++){
                if (strcmp(a[i].name, a[j].name) > 0){
                    swap(&a[i],&a[j]);
                }
            }
    }
}

void swap(struct student*s1 ,struct student*s2)
{
    struct student temp;

    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

void print_std(struct student s){
    printf("%s\t\t%s\t\t%s\t\t%d\n", s.id_num, s.name,s.gender,s.age);

}
void print_all (struct student *a[] , int size){
    int i;
    printf("this info for sorted by student name \n");
    printf("Id num\t\tName\t\tGender\t\tAge\n");

    for(i = 0 ; i < size ; i++)
        print_std(*a[i]);
}
