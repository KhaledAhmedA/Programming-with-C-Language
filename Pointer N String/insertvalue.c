#include<stdio.h>
int count(int *len) ;
void in_array(int *array , int value) ;
void main(void){

    int array[30] = {} ;
    int size,value ;
    int i ;

    printf("Enter Size of elements to add: ");
    scanf("%d",&size);

    for(i = 0 ; i < size ; i++){

            printf("value[%d]: " , i+1);
            scanf("%d",&value);

            in_array(array , value);
            fflush(stdin) ;
    }

    for(i = 0 ; i < count(array) ; i++  ){
            printf("value[%d]: %d \n" , i+1, *(array + i) );
    }
}


int count(int *array){
    int value=0;
    while(*array != NULL)
        {   array++ ;
            value++ ;
        }
    return value ;
}

void in_array(int *array , int value)
{
    int len = count(array) ;
    *(array+len) = value ;

}
