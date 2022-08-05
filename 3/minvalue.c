#include <stdio.h>
#include <limits.h>

void main(void)
{
    int size;
    int nums;
    int min;
    int i;

    printf("Enter Size: ");
    scanf("%d",&size);

    for(i=1;i<=size;i++)
    {
        printf("value[%d] ",i);
        scanf("%d",&nums);

            if(i==1)
            min=nums;
            else if(nums<min)
            min=nums;
    }



    printf("Minimum Value IS %d ",min);
}
