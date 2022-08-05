#include <stdio.h>

void main(void)
{
    int size,value,max,i;

    printf("Enter Size: ");
    scanf("%d",&size);

    for(i=1;i<=size;i++)
    {
        printf("Value[%d]",i);
        scanf("%d",&value);

        if(i==1)
            max=value;
        else
            if(value>max)
            max=value;
    }
    printf("max is: %d",max);
}
