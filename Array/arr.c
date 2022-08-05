#include <stdio.h>
int summ(int x[],int size);
void main(void)
{
    int arr[20];
    int i,size;
    int max=1;

    printf("Enter SIZE\n");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {

        printf("value[%d]: ",i+1);
        scanf("%d",&arr[i]);
}

    for(i=0;i<size;i++)
        printf("%d\n",arr[i]);

        printf("---------------\n");

    for(i=size-1;i>=0;i--)
        printf("%d\n",arr[i]);

    for(i=0;i<size;i++)
        if(arr[i]>max) max=arr[i];

    printf("max is %d",max);

    printf("\nsum = %d",summ(arr,size));

}

int summ(int x[],int size)
{
    int i;
    int sum=0;

    for(i=0;i<size;i++)
        sum=sum+x[i];
    return(sum);
}
