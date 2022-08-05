#include <stdio.h>

void main(void)
{
    int arr[100];
    int i,k,len,key,mid,lower,upper;
    int pos=-1;
    int counter=0;


    printf("Enter Size: ");
    scanf("%d",&len);

    for(i=0;i<len;i++)
    {
        printf("Value[%d]: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter Search KEY: ");
    scanf("%d",&key);

    lower=0;
    upper=len-1;

    do
        {
            mid=(lower+upper)/2;

            if(key==arr[mid])
                {
            pos = mid;
            counter++;
            break;
                }

            else if(key>arr[mid])/*||key<arr[mid]*/
                lower=mid+1;

            else if(key<arr[mid])
                upper=mid-1;

    }while(lower<=upper);


        if(pos==-1)
            printf("KEY NOT LOCATED");
        else
        printf("%d IS LOCATED AT %d FOR %d Times",key,pos+1,counter);
}
