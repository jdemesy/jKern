/*
** kernel.c for jKern in /home/demesy_j/projects/kernel/jKern
** 
** Made by julien demesy
** Login   <demesy_j@epitech.net>
** 
** Started on  Tue Nov 27 15:39:07 2012 julien demesy
** Last update Wed Nov 28 14:10:47 2012 julien demesy
*/

#include <stdint.h>
#include "print.h"
 
void kmain(void)
{
  extern uint32_t magic;
  /* extern void *mbd; */
 
  if (magic != 0x2BADB002)
    {
      clear();
      print("ERROR : wrong magic number", 0x04);
    }
  else
    {
      clear();
      print("Hello World !", 0x07);
    }
}
