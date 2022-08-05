#include <stdio.h>
int locate(int arr[], int key,int lower,int upper);
void main(void)
{
    int arr[20]={1,2,3,4,5};
    int len,key=4,vals,i,result;
    int lower = 0;
    int upper = len-1;

/*
    printf("Enter Length: \n");
    scanf("%d",&len);

    for(i=0;i<len;i++)
    {
        printf("Value[%d]",i+1);
        scanf("%d",&vals);
    }

    printf("Enter KEY WANT TO LOCATE: \n");
    scanf("%d",&key);
*/
    result = locate(arr,key,0,4);
    printf("%d",result+1);
}

int locate(int arr[], int key,int lower,int upper)
{

        int mid;

        if(lower>upper)
        return(-1);

        mid=(lower+upper)/2;

        if(key==arr[mid])
            return (mid);



        if(key>arr[mid])
        locate(arr,key,mid+1,upper);

        else if(key<arr[mid])
        locate(arr,key,lower,mid-1);


}
