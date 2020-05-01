/*
** my_factorielle_it.c for my_factorielle_it in /home/wang_d/Piscine_C_J05
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Fri Oct  3 10:10:11 2014 yin wang
** Last update Sun Apr 12 20:48:56 2015 yin wang
*/

int	my_factorielle_it(int nb)
{
  int	i;
  int	num;

  i = 1;
  num = 1;
  if ((nb < 0) || (nb > 12))
    return (0);
  else if (nb == 0)
    return (1);
  else
    {
      while (i <= nb)
	{
	  num = num * i;
	  i++;
	}
    }
  return (num);
}
