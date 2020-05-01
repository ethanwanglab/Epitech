/*
** tests-my_factorielle_rec.c for my_factorielle_rec in /home/wang_d/Piscine_C_J05/tests
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Fri Oct  3 12:16:10 2014 yin wang
** Last update Fri Oct  3 20:38:00 2014 yin wang
*/

int	main()
{
  int	i;

  i = my_factorielle_rec(-10);
  my_put_nbr(i);
  my_putchar('\n');
  i = my_factorielle_rec(0);
  my_put_nbr(i);
  my_putchar('\n');
  i = my_factorielle_rec(4);
  my_put_nbr(i);
  my_putchar('\n');
  i = my_factorielle_rec(20);
  my_put_nbr(i);
  my_putchar('\n');
  return (0);
}
