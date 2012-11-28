/*
** print.h for jKern in /home/demesy_j/projects/kernel/jKern
** 
** Made by julien demesy
** Login   <demesy_j@epitech.net>
** 
** Started on  Wed Nov 28 14:10:56 2012 julien demesy
** Last update Wed Nov 28 18:56:50 2012 julien demesy
*/

#ifndef		PRINT_H_
# define	PRINT_H_

void    write_char(unsigned char c, unsigned char forecolour, unsigned char backcolour, int x, int y);
void    print_str(char *str, int color);
void clear();

#endif		/* PRINT_H_ */
