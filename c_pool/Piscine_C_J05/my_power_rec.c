/*
** my_power_rec.c for my_power_rec in /home/wang_d/Piscine_C_J05
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Fri Oct  3 14:41:32 2014 yin wang
** Last update Mon Oct  6 18:53:14 2014 yin wang
*/

int	my_power_rec(int nb, int power)
{
  if (power <= 0)
    return (my_negative_power(nb, power));
  else if (power == 1)
    return (nb);
  else
    return (nb * my_power_rec(nb, power-1));
}

int	my_negative_power(int nb, int power)
{
  if (power < 0)
    return (0);
  else
    return (1);
}
