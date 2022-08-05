#include<stdio.h>
void summ (int fnum , int lnum , int *sum) ;
void main(void){

int x ;
int y ;
int sum ;

printf("add two numbers using pointer\n");

printf("enter the first number : ");
scanf("%d",&x);
printf("enter the second number : ");
scanf("%d",&y);

summ(x,y,&sum) ;

printf("The sum is : %d\n" , sum);

}


void summ (int fnum , int lnum , int *sum){

*sum = fnum + lnum ;
}
