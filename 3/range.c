#include <stdio.h>

void main(void)
{
    int vals,max,min,size,i,range;

    printf("Enter Size: ");
    scanf("%d",&size);

    for(i=1;i<=size;i++)
    {
        printf("value[%d]: ",i);
        scanf("%d",&vals);

        if(i==1){min=vals;max=vals;}
        else if(vals>max)
            max=vals;
        else if(vals<min)
            min=vals;
    }

    range=max-min;
    printf("MAX = %d : MIN = %d \n",max,min);
    printf("And Range IS: %d ",range);

}
