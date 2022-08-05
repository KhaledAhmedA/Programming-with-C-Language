#include <stdio.h>

void main(void)
{
    int vals,size,min,max,i,avg;

    printf("Enter Size: ");
    scanf("%d",&size);

    for(i=1;i<=size;i++)
    {
        printf("value[%d]: ",i);
        scanf("%d",&vals);

        if(i==1){max=vals;min=vals;}
        else if(vals>max)
            max=vals;
        else if(vals<min)
            min=vals;
    }



    avg=(max+min)/2;
    printf("MAX %d : MIN %d\n",max,min);
    printf("Average of Numbers IS: %d",avg);
}
