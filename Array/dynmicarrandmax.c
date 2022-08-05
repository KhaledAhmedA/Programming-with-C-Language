#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void main(void)
{
    int* ptr=ptr;
    int size;
    int i;
    int max;

    ptr=(int*)malloc(size*sizeof(int));

    printf("Size of Dynamic Array: ");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("value[%d]: ",i+1);
        scanf("%d",ptr+i);
    }

    for(i=0;i<size;i++)
        printf("%d\n",*(ptr+i));

    printf("\n===============\n");

    /* as array with index */
    for(i=0;i<size;i++)
        printf("%d\n",ptr[i]);


        max=INT_MIN;
    for(i=0;i<size;i++)
        if(*(ptr+i)>max)
            max= *(ptr+i);

    printf("\n=============\n");

    printf("And Maximum value IS: %d",max);

    printf("\n============\n");

    /* print descending values */
    for(i=0;i<size;i++)
        *ptr++;

    printf("\n======= And a Descending List ========\n");

    for(i=0;i<=size;i++)
        printf("%d\n",*ptr--);

}
