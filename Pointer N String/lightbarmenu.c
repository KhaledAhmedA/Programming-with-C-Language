#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>

void ShowConsoleCursor (int flag);
void draw_box (int startX, int startY, int w, int h);
int mainMenu (int startX, int startY, int menu_size, char **main_list);
void gotoxy (int x, int y);
COORD coord = { 0, 0 };

void main ()
{
  //start coordinate for drawer box
  int startX = 39;
  int startY = 10;
  char *main_list[6] = {
    "1) Add book",
    "2) Remove book",
    "3) Display books",
    "4) Save books",
    "5) Load books",
    "6) Exit",
  };
  int main_list_size;
  int select;


  main_list_size = sizeof (main_list) / sizeof (main_list[0]);
  // printf ("list is: %d", main_list_size);
  select = mainMenu (startX, startY, main_list_size, main_list);

  system ("cls");
  switch (select)
    {
    case 0:
      printf ("you select 1");
      break;

    case 1:
      printf ("you select 2");
      break;
    case 2:
      printf ("you select 3");
      break;
    case 3:
      printf ("you select 4");
      break;
    case 4:
      printf ("you select 4");
      break;
    case 5:
      printf ("you select 4");
      break;
    }
}

void
gotoxy (int x, int y)
{
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE), coord);
}

void
draw_box (int startX, int startY, int w, int h)
{
  int i, j;
  if (w == NULL)
    w = 40;
  if (h == NULL)
    h = 20;

  gotoxy (startX, startY);
  printf ("%c", 201);
  for (i = startX; i < startX + w; i++)
    printf ("%c", 205);
  gotoxy (startX + w, startY);
  printf ("%c", 187);
  for (i = 1; i <= h; i++)
    {
      gotoxy (startX, startY + i);
      printf ("%c", 186);
      for (j = 0; j < w; j++)
	{
	  gotoxy (startX + 1 + j, startY + i + 1);
	  printf ("%c", 32);

	}
      gotoxy (startX + w, startY + i);
      printf ("%c", 186);
    }
  gotoxy (startX, startY + h);
  printf ("%c", 200);
  for (i = startX; i < startX + w; i++)
    printf ("%c", 205);
  gotoxy (startX + w, startY + h);
  printf ("%c", 188);


}

int mainMenu (int startX, int startY, int menu_size, char **menu)
{
  HANDLE hConsole = GetStdHandle (STD_OUTPUT_HANDLE);

  int i, j;
  int max_weidth;
  int max_height;
  int pos;
  char ch;

//get max_weidth and  max_height to dynamic draw box
  for (i = 0; i < menu_size; i++)
    {
      if (i == 0)
	max_weidth = strlen (menu[i]);
      if (strlen (menu[i]) > max_weidth)
	max_weidth = strlen (menu[i]);


    }
  max_height = menu_size;

  //to draw box
  draw_box (startX, startY, max_weidth + 1, max_height + 1);

  //hide  Cursor
  ShowConsoleCursor (0);
  pos = 0;
  do
    {
      for (i = 0; i < menu_size; i++)
	{
	  int size_one_menu = strlen (menu[i]);

	  if (pos == i)
	    SetConsoleTextAttribute (hConsole, 240);
	  else
	    SetConsoleTextAttribute (hConsole, 15);
	  gotoxy (startX + 1, startY + 1 + i);
	  printf ("%s", menu[i]);
	  for (j = 0; j < max_weidth - size_one_menu; j++)
	    printf (" ");

	}

      ch = getch ();
      if (ch == 32)
	ch = getch ();
      if (ch == 72)
	pos = (pos-- == 0) ? max_height - 1 : pos;

      if (ch == 80)
	pos = ++pos % max_height;

    }
  while (ch != 13);

  return pos;

}

void
ShowConsoleCursor (int flag)
{
  HANDLE out = GetStdHandle (STD_OUTPUT_HANDLE);
  CONSOLE_CURSOR_INFO cursorInfo;

  GetConsoleCursorInfo (out, &cursorInfo);
  cursorInfo.bVisible = 0;
  SetConsoleCursorInfo (out, &cursorInfo);
}
