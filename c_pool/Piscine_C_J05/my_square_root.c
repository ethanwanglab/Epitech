/*
** my_square_root.c for my_square_root in /home/wang_d/Piscine_C_J05
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Wed Oct  8 12:02:28 2014 yin wang
** Last update Wed Oct  8 13:58:45 2014 yin wang
*/

#include <stdio.h>

int	my_square_root(int nb)
{
  int	i;
  int	flag;

  i = 0;
  flag = 0;
  while ((i * i) <= nb)
    {
      if (i * i == nb)
	flag = i;
      i = i + 1;
    }
  return (flag);
}

int	main()
{
  printf("%d\n", my_square_root(10));
  return (0);
}
