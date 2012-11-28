/*
** print.c for jKern in /home/demesy_j/projects/kernel/jKern
** 
** Made by julien demesy
** Login   <demesy_j@epitech.net>
** 
** Started on  Wed Nov 28 14:09:18 2012 julien demesy
** Last update Wed Nov 28 14:09:44 2012 julien demesy
*/

void print(char *str, int color)
{
  char *video = (char*)0xb8000;

  while (*str)
    {
      *video = *str;
      str++;
      video++;
      *video = (char*)color;
      video++;
    }
}

void clear()
{
  char *video = (char*)0xb8000;

  while (*video)
    {
      *video = 0;
    }
}
