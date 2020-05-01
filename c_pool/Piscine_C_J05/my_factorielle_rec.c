/*
** my_factorielle_rec.c for my_factorielle_rec in /home/wang_d/Piscine_C_J05
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Fri Oct  3 12:08:49 2014 yin wang
** Last update Sun Apr 12 20:59:13 2015 yin wang
*/

int	my_factorielle_rec(int nb)
{
  int	num;

  if (nb > 12 || nb < 0)
    return (0);
  else if (nb == 0)
    return (1);
  else
    num = nb * my_factorielle_rec(nb - 1);
  return (num);
}
