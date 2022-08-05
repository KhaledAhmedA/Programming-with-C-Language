#include <stdio.h>

void main(void)
{
    int arr[100];
    int i,len,key;
    int pos=-1;

    printf("Enter length ");
    scanf("%d",&len);

    for(i=0;i<len;i++)
    {
        printf("Value[%d]",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter Key: ");
    scanf("%d",&key);

    for(i=0;i<len;i++)
        if(arr[i]==key)
        {
        pos = i;
        break;
    }
    if(pos==-1)
        printf("NOT LOCATED");
    else
        printf("KEY Located At %d", pos+1);








}
