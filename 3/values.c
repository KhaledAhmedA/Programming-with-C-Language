#include <stdio.h>

void main(void)
{
    int size,value,min,max,i;

    printf("Enter value: ");
    scanf("%d",&size);

    for(i=1;i<=size;i++)
    {
        printf("Value[%d]",i);
        scanf("%d",&value);

        if(i==1)
            min=max=value;
        else{
            if(value>max)
            max=value;
            if(value<min)
                min=value;
        }
    }
    printf("max is: %d\n",max);
    printf("min is: %d\n",min);
    printf("range is: %d\n",max-min);
    printf("average is: %d",(max+min)/2);
}
