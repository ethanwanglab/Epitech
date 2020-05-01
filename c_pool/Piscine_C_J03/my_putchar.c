/*
** my_putchar.c for char in /home/wang_d/github/c_pool/Piscine_C_J03
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Fri Apr  3 23:56:47 2015 yin wang
** Last update Sat Apr  4 00:00:54 2015 yin wang
*/

#include <unistd.h>

int	my_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}
