#include <stdio.h>

void main(void)
{
    int arr[100];
    int i,key,len;
    int counter=0;
    int pos=-1;

    printf("Enter Values: ");
    scanf("%d",&len);

    for(i=0;i<len;i++)
    {
        printf("Value[%d]",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter KEY want TO Locate ");
    scanf("%d",&key);

    for(i=0;i<len;i++)
        if(arr[i]==key)
            {
        pos=i+1;
        counter++;

        printf("%d Found and Located AT %d and %d Time\n",key,pos++,counter);

            }

        if(pos==-1)
            printf("KEY NOT LOCATED");


            /*
            for(i=0;i<len;i++)
    if(arr[i]!=key)
        printf("Not Located");
    else
        printf("%d Found and Located AT %d and %d Times",key,pos,counter);

*/


}
