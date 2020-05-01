/*
** my_find_prime_sup.c for my_find_prime_sup in /home/wang_d/Piscine_C_J05
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Wed Oct  8 14:00:12 2014 yin wang
** Last update Thu Oct  9 10:11:21 2014 yin wang
*/

int	my_find_prime_sup(int nb)
{
  int	num;

  num = my_is_prime(nb);
  while (num == 0)
    {
      nb = nb + 1;
      num = my_is_prime(nb);
    }
  return (nb);
}
