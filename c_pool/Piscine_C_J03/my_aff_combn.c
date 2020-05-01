/*
** my_aff_combn.c for 08 in /home/wang_d/github/c_pool/Piscine_C_J03
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Sat Apr  4 00:45:14 2015 yin wang
** Last update Fri Apr 10 13:56:29 2015 yin wang
*/

#include <stdio.h>

int	get_nsquare(int n)
{
  int	i;
  int	result;

  i = 1;
  result = 1;
  while (i < n)
    {
      result = result * 10;
      i++;
    }
  return (result);
}

int	check(int num, int base, int n, int flag)
{
  int	i;
  int	a;
  int	b;

  i = 0;
  b = 0;
  while (i < n)
    {
      a = num / base;
      if (i != n - 1)
	{
	  b = num % base / (base / 10);
	}
      if (a >= b && num > 9)
	flag = 1;
      if (flag)
	break ;
      else
	{
	  num = num % base;
	  base = base / 10;
	  i++;
	}
    }
  return (flag);
}

void	my_shownbr(int num, int base, int n)
{
  int	i;

  i = 0;
  while (i < n)
    {
      my_putchar(num / base + '0');
      num = num % base;
      base = base / 10;
      i++;
    }
}

int	my_aff_combn(int n)
{
  int	flag;
  int	i;
  int	max_num;

  flag = 0;
  i = 0;
  max_num = get_nsquare(n) * 10;
  while (i < max_num)
    {
      flag = check(i, max_num / 10, n, flag);
      if (!flag)
      	{
      	  my_shownbr(i, max_num / 10, n);
	  if (i / (max_num / 10) != 10 - n)
	    {
	      my_putchar(',');
	      my_putchar(' ');
	    }
      	}
      else
	flag = 0;
      i++;
    }
}

int	main()
{
  my_aff_combn(4);
  return (0);
}
