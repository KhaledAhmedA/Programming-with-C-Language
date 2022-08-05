#include <stdio.h>
void main(void)
{
    char ch;
    int number=0;
    int counter=0;

    printf("Enter A Numbers: ");

    while((ch=getch())!=13)
    {
        switch(ch)
        {
            case'0':
            case'1':
            case'2':
            case'3':
            case'4':
            case'5':
            case'6':
            case'7':
            case'8':
            case'9':
                if(counter<5)
                {
                    putch(ch);
                    number=number*10 +ch-'0';
                    counter++;

                }
                break;

            case'\b':
                if(counter>0)
                {
                    putch('\b');
                    putch(' ');
                    putch('\b');
                    number=number/10;
                    counter--;
                }
                break;
        }
    }
    printf("\nNumber is: %d\n",number);
}
