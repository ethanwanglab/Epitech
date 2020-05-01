/*
** my_swap.c for 1 in /home/wang_d/github/c_pool/Piscine_C_J04
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Sun Apr 12 16:26:15 2015 yin wang
** Last update Sun Apr 12 17:10:18 2015 yin wang
*/

#include <stdio.h>

int	my_swap(int *a, int *b)
{
  int	tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
  return (0);
}

int	main()
{
  int	a;
  int	b;

  a = 2;
  b = 5;
  my_swap(&a, &b);
  printf("a = %d, b = %d\n", a, b);
  return (0);
}
