#include <stdio.h>

void main(void)
{
    int arr[100];
    int len,i,sorted,temp;
    int counter1=0;
    int counter0=0;


    printf("Enter length ");
    scanf("%d",&len);

    for(i=0;i<len;i++)
    {
        printf("Value[%d]: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("DATA Before Sorting\n");

    for(i=0;i<len;i++)
        printf("%d \n",arr[i]);

    do
    {
        sorted=1;
        counter1++;
        for(i=0;i<len-1;i++)
            if(arr[i]>arr[i+1])
        {
            temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            sorted=0;
            counter0++;
        }
    }while(sorted==0);

    printf("DATA AFTER SORTING\n");
    for(i=0;i<len;i++)
        printf("%d \n",arr[i]);

    printf("\nTakes %d ROUND WHILE 1 and\n%d ROUND WHILE 0",counter1,counter0);


}

