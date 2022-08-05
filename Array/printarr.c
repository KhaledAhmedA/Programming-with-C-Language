#include <stdio.h>
void prt_arr(int arr[],int size);

void main(void)
{
    int arr[50]={23,23,423,434,32,2,234,42};
    int prt;



    prt_arr(arr,7);
}

void prt_arr(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
        printf("\n%d\n",arr[i]);

}
