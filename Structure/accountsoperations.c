#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <conio.h>

struct account
{
    char acc_no[13];
    char name[20];
    int equ;
};

void print_acc(struct account s);
void print_all(struct account a[], int size);
int  bar(int size);
int  add_acc(struct account acc[], int i);
void search_eq(struct account a[], int size);
void add_100_for_1000(struct account a[], int size);

void main(void)
{
    struct account acc[100];
    int size = 0;
    int op;

    do
    {
        system ("cls");

        int op = 0;

        op = bar(size);

        if (op == 1)
            size = add_acc(acc,size);

        if (op == 2)
            search_eq(acc,size);

        if (op == 3)
            add_100_for_1000(acc,size);

         if (op == 4)
            print_all(acc,size);


        }while(1);

        system ("cls");
}

int bar(int size)
{
        char ch ;

        system ("cls");

        printf("Select 1 - 2 - 3 - 4:\n");
        printf(" [1] new account \n");
        printf(" [2] account  by equalivant less then \n");
        printf(" [3] add $100 for customers have balance more then $1000 \n");
        printf(" [4] print account data \n");

        ch = getch();
        if (ch == 49)
        return 1;

        if (ch == 50)
        return 2;

        if (ch == 51)
        return 3;

        if (ch == 52)
        return 4;
}

int add_acc(struct account acc[], int i)
{
    int ins;
    char ch;
    ins = 1;

    while(ins == 1)
    {
        system ("cls");

        printf("\nEnter data account no. [%d]: \n",i+1);
        printf("account number: ");
        scanf("%s",acc[i].acc_no);
        printf("Name: ");
        fflush(stdin);
        gets(acc[i].name);
        printf("Equalivant: ");
        scanf("%d",&acc[i].equ);

        i++ ;
        printf("Press A To Make Another ACC\n");
        ch = getch();
        if (ch != 65){
            ins = 0;
            break;
        }

        system ("cls");

    }
    return i;

}
void search_eq(struct account a[], int size)
{
    int equ,i;
    int count = 0;
    system("cls");
    printf("Get All ACC EQ: ");
    scanf("%d",&equ);

    for (i=0;i<size;i++)
        if(a[i].equ < equ) count++;


     if (count > 0 ){
        printf("%-30s%-30s%-30s\n","ACC N.","Name","EQU") ;
        for (i=0;i<size;i++)
            if(a[i].equ < equ) print_acc(a[i]);
        }else
            printf("NOT FOUND!");
    printf("\n press any key to menu");
    getch();
}

void add_100_for_1000 (struct account a[], int size)
{
    int ok = 0;
    int count = 0;
    int i;

    system("cls");
    printf("Are you sure you wanted diposit $100 for all account have more then %1000 [y] for yes :");
    scanf("%c",&ok);

    if(ok == 121)
        for (i=0;i<size;i++)
            if (a[i].equ > 1000)
            count++;

     if (count > 0 ){
        for (i=0;i<size;i++)
            if(a[i].equ > 1000) a[i].equ+=100 ;
        printf("Deposit $100 in %d clients' account ",count);
        }else
            printf("NOT FOUND!");
    printf("\n press any key to menu");
    getch();
}

void print_acc (struct account s) {
    printf("%-30s%-30s%-30d\n",s.acc_no, s.name,s.equ);
}
void print_all(struct account a[], int size){
    int i;
    system("cls");
    printf("This info for all accounts \n");


    if(size > 0){
        printf("%-30s%-30s%-30s\n","account number","Name","EQUALIVANT");
        for (i=0;i<size;i++)
            print_acc(a[i]);
    }
    else
        printf("\nNO DATA!\n");

    printf("\n press any key to menu");
    getch();
}
