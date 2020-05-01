/*
** tests-my_factorielle_it.c for my_factorielle_it in /home/wang_d/Piscine_C_J05/tests
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Fri Oct  3 11:09:53 2014 yin wang
** Last update Fri Oct  3 20:37:25 2014 yin wang
*/

int	main()
{
  int	i;

  i = my_factorielle_it(-2);
  my_put_nbr(i);
  my_putchar('\n');
  i = my_factorielle_it(0);
  my_put_nbr(i);
  my_putchar('\n');
  i = my_factorielle_it(4);
  my_put_nbr(i);
  my_putchar('\n');
  i = my_factorielle_it(20);
  my_put_nbr(i);
  my_putchar('\n');
  return (0);
}
