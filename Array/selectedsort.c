#include <stdio.h>

void main(void)
{
  int arr[100];
  int i,j,len,temp;

  printf("Enter Values Number: ");
  scanf("%d",&len);

  for(i=0;i<len;i++)
  {
      printf("Value[%d]: ",i+1);
      scanf("%d",&arr[i]);
  }

for(i=0;i<len;i++)
    printf("%d\n",arr[i]);

    for(i=0;i<len-1;i++)
        for(j=i+1;j<len;j++)
        if(arr[i]>arr[j])
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    for(i=0;i<len;i++)
    printf("%d\n",arr[i]);


}

