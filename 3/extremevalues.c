#include <stdio.h>
#include <limits.h>

void main(void)
{
int min,min2,max,max2;
int i,size,val;

    printf("Enter SIZE: ");
    scanf("%d",&size);

    max2=max=INT_MIN;
    min2=min=INT_MAX;

    for(i=1;i<=size;i++)
        {
        printf("Value:");
        scanf("%d",&val);

        if(val>max)
        {
            max2=max;
            max=val;
        }
        else if(val<max&&val>max2)
            max2=val;


        if(val<min)
        {
            min2=min;
            min=val;
        }
        else if(val>min&&val<min2)
            min2=val;
        }

printf("Extreme Maximum Value is %d\n",max);
printf("Socend Maximum Value is %d\n",max2);

printf("Extreme Minimum Value is %d\n",min);
printf("Socend Minimum Value is %d\n",min2);

printf("Range of Not Extreme values is %d ",max2-min2);
}
