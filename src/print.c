/*
** print.c for jKern in /home/demesy_j/projects/kernel/jKern
** 
** Made by julien demesy
** Login   <demesy_j@epitech.net>
** 
** Started on  Wed Nov 28 14:09:18 2012 julien demesy
** Last update Wed Nov 28 19:12:07 2012 julien demesy
*/

#include <stdint.h>
#include "print.h"

int	curs_x = 0;
int	curs_y = 0;

void	write_char(unsigned char c, unsigned char forecolour, unsigned char backcolour, int x, int y)
{
  if (c == '\n')
    {
      curs_x = 0;
      curs_y++;
      if (curs_y >= 25)
	curs_y = 0;
    }
  else
    {
      uint16_t attrib = (backcolour << 4) | (forecolour & 0x0F);
      volatile uint16_t *where;
      where = (volatile uint16_t *)0xB8000 + (y * 80 + x) ;
      *where = c | (attrib << 8);
    }
}

void	print_str(char *str, int color)
{
  while (*str)
    {
      write_char(*str, color, 0, curs_x, curs_y);
      curs_x++;
      if (curs_x >= 80)
	{
	  curs_y++;
	  curs_x = 0;
	}
      if (curs_y >= 25)
	curs_y = 0;
      str++;
    }
}

void	clear()
{
  int x;
  int y;

  for (y = 0; y < 25; y++)
    {
      for (x = 0; x < 80; x++)
	{
	  write_char(0, 0, 0, x, y);
	}
    }
  curs_x = 0;
  curs_y = 0;
}
