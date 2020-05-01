/*
** my_power_it.c for my_power_it in /home/wang_d/Piscine_C_J05
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Fri Oct  3 12:23:37 2014 yin wang
** Last update Sun Apr 12 21:00:04 2015 yin wang
*/


int	my_positive_power(int nb, int power)
{
  int	i;
  int	num;

  i = 0;
  num = 1;
  while (i < power)
    {
      num = nb * num;
      i = i + 1;
    }
  return (num);
}

int	my_power_it(int nb, int power)
{
  int	num;

  if (power < 0)
    return (0);
  else if (power == 0)
    return (1);
  else
    {
      if (nb > 0)
	num = my_positive_power(nb, power);
      else if (nb == 0)
	return (0);
      else
	{
	  nb = -nb;
	  if (power % 2 == 0)
	    num = my_positive_power(nb, power);
	  else
	    {
	      my_putchar('-');
	      num = my_positive_power(nb, power);
	    }
	}
      return (num);
    }
}
