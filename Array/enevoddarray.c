#include <stdio.h>

void main(void)
{
    int data[100];
    int even[100];
    int odd[100];
    int size,i,j,k;

    k=0;
    j=0;

    printf("Enter SIZE: ");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Value[%d]: ",i+1);
        scanf("%d",&data[i]);
    }

    for(i=0;i<size;i++)
    {
        if(data[i]%2==0)
        {
        even[j]=data[i];
        j++;
        }
        else
        {
        odd[k]=data[i];
        k++;
        }
    }

    printf("\n================\n");
    printf("ALL DATA\n");
    for(i=0;i<size;i++)
        printf("\t %d ",data[i]);
    printf("\n================\n");
    printf("EVEN DATA\n");
    for(i=0;i<j;i++)
        printf("\t %d ",even[i]);
    printf("\n==================\n");
    printf("ODD DATA\n");
    for(i=0;i<k;i++)
        printf("\t %d ",odd[i]);

    printf("\n================\n");
    printf("\nNumber of Even Numbers To Odd Numbers %d : %d\n ",j,k);

}
