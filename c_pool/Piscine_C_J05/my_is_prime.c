/*
** my_is_prime.c for my_is_prime in /home/wang_d/Piscine_C_J05
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Wed Oct  8 14:00:12 2014 yin wang
** Last update Wed Oct  8 16:05:09 2014 yin wang
*/

#include <stdio.h>

int	my_is_prime(int nb)
{
  int	i;
  int	flag;

  i = 2;
  if (nb == 2)
    return (1);
  else if (nb > 2)
    {
      flag = 1;
      while (i < nb)
	{
	  if (nb % i == 0)
	    flag = 0;
	  i = i + 1;
	}
      return (flag);
    }
  else
    return (0);
}

int	main()
{
  printf("%d\n", my_is_prime(5));
  return (0);
}
