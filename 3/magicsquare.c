#include <stdio.h>
#include <windows.h>
void main(void)
{
   int row,col;
   int value;
   int size;
   int k;

   printf("Enter Square Size with ODD Number Only:");
   scanf("%d",&size);

   row=1;
   col=(size+1)/2;
   value=1;

    do
    {
   goto_row_col(row,col*4);
   printf("%4d",value);

   for(k=1;k<500000000;k++);

   if(value%size==0)
    row++;
   else
   {
       row--;
       col--;
       if(row==0)row=size;
       if(col==0)col=size;
   }
    value++;
    }while(value<=size*size);

}

goto_row_col(int row, int col)
{
    COORD c;

    c.X=col;
    c.Y=row;

    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE),c);
}
