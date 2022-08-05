#include<stdio.h>
#include <stdlib.h>

int len(int*length);
int get_max(int*arr);
void in_array(int*arr, int value);

void main(void){

    int *arr;
    int size,val,n,i;

    printf("Enter Values: ");
    scanf("%d",&size);

    arr = (int *)malloc(size * sizeof(n) );

    for(i=0;i<size;i++){
            printf("value[%d]: ",i+1);
            scanf("%d",val+i);

            in_array(arr, val);
            fflush(stdin);
    }

    printf("Values: \n");
    for(i=0;i<len(arr);i++){
            printf("%d", *(arr + i));
    }

    printf("max value is: %d" , get_max(arr));

}


int len(int*arr){
    int value=0;
    while(*arr != NULL)
        {   arr++;
            value++;
        }
    return value;
}

int get_max(int*arr){
    int max,i;
    int length = len(arr);

    for(i=0;i<length ;i++){
        if(i==0) max = *(arr+i);
            else if(arr[i] > max ) max = *(arr+i);
    }
    return max ;
}
void in_array(int*arr, int val)
{
    int length = len(arr);
    *(arr+length) = val;
}
