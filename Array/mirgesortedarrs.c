#include <stdio.h>

void print(int arr[],int size);

void main(void)
{
int arr1[50];
int arr2[50];
int arrt[100];

int size1,size2,totalSize;

int i;
int j;
int k;
int s;



    /*    Size for array 1 then value for array 1    */
    printf("Enter Arr1 Size: ");
    scanf("%d",&size1);

    for(i=0;i<size1;i++)
        {
        printf("value[%d]: ",i+1);
        scanf("%d",&arr1[i]);
        }

    printf("Enter Arr2 Size: ");
    scanf("%d",&size2);

    for(i=0;i<size2;i++)
        {
        printf("value[%d]: ",i+1);
        scanf("%d",&arr2[i]);
        }

i=0;
j=0;
k=0;
s=0;

while((i<size1)&&(j<size2))
{
    if(arr1[i]<arr2[j])
    {
        arrt[k]=arr1[i];
        i++;
        k++;
    }
    else
    {
        arrt[k]=arr2[j];
        j++;
        k++;
    }
}

    if(i==size1)
    {
        for(s=j;s<size2;s++)
        {
            arrt[k]=arr2[j];
            j++;
            k++;
        }
    }

    if(j==size2)
    {
        for(s=i;s<size1;s++)
        {
            arrt[k]=arr1[i];
            i++;
            k++;
        }
    }

    totalSize=size1+size2;

    print(arr1,size1);
    print(arr2,size2);
    print(arrt,size1+size2);
}



void print(int arr[],int size)
{
    int i;

    for(i=0;i<size;i++)
        printf("%d\t",arr[i]);
        printf("\n");

}



