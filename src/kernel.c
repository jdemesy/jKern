/*
** kernel.c for jKern in /home/demesy_j/projects/kernel/jKern
** 
** Made by julien demesy
** Login   <demesy_j@epitech.net>
** 
** Started on  Tue Nov 27 15:39:07 2012 julien demesy
** Last update Wed Nov 28 19:11:21 2012 julien demesy
*/

#include <stdint.h>
#include "print.h"

void welcome(void)
{
  clear();
  print_str("Magic number correct !\n\n", 0x02);
  print_str("   _ _   __ \n", 0x02);
  print_str("  (_) | / /\n", 0x02);
  print_str("   _| |/ /  ___ _ __ _ __\n", 0x02);
  print_str("  | |    \\ / _ \\ '__| '_ \\\n", 0x02);
  print_str("  | | |\\  \\  __/ |  | | | |\n", 0x02);
  print_str("  | \\_| \\_/\\___|_|  |_| |_|\n", 0x02);
  print_str(" _/ |\n", 0x02);
  print_str("|__/\n\n", 0x02);
  print_str("Hello World ! Welcome in jKern by jDemesy.\n", 0x07);
}
 
void kmain(void)
{
  extern uint32_t magic;
  /* extern void *mbd; */
 
  clear();
  print_str("jKern loaded.\nChecking magic number.\n", 0x07);
  if (magic != 0x2BADB002)
    {
      clear();
      print_str("ERROR : wrong magic number", 0x04);
    }
  else
    {
      welcome();
   }
}
