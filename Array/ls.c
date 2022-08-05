#include <stdio.h>

void main(void)
{
    int arr[100];
    int i,len,key;
    int pos;

    printf("Enter Length: ");
    scanf("%d",&len);

    for(i=0;i<len;i++)
    {
        printf("value[%d]",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter Key You Want Find: ");
    scanf("%d",&key);

    for(i=0;i<len;i++)
        for(i=key;i<len;i++)
        pos=key;
    if(key=arr[i])
        printf("key located at %d",pos);
        else
        printf("key not located");




}
