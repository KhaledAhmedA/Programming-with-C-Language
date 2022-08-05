#include <stdio.h>

void main(void)
{
    int arr[50];
    int len,i,key;

    printf("Enter Length: ");
    scanf("%d",&len);

    for(i=0;i<len;i++)
    {
        printf("Value[%d]: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter Wanted KEY: ");
    scanf("%d",&key);

}

int binarySearch(int)
{

}
