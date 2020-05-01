/*
** my_isneg.c for 04 in /home/wang_d/github/c_pool/Piscine_C_J03
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Sat Apr  4 00:10:37 2015 yin wang
** Last update Sat Apr  4 00:12:39 2015 yin wang
*/

int	my_isneg(int n)
{
  if (n < 0)
    my_putchar('N');
  else
    my_putchar('P');
  return (0);
}

int	main()
{
  my_isneg(1);
  my_isneg(0);
  my_isneg(-1);
  return(0);
}
