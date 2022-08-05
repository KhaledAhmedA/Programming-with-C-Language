#include <stdio.h>

void main(void)
{
    int arr[3][3];
    int i,j;

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    {
    printf("Enter Values[%d,%d]",i,j);
    scanf("%d",&arr[i][j]);

    }
    printf("\n----------------\n");

    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                printf("%d\t",arr[i][j]);
            printf("\n");
        }
}
