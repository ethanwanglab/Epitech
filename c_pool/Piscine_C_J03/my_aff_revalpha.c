/*
** my_aff_alpha.c for 01 in /home/wang_d/github/c_pool/Piscine_C_J03
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Fri Apr  3 23:55:48 2015 yin wang
** Last update Sat Apr  4 00:06:12 2015 yin wang
*/

int	my_aff_revalpha()
{
  char	c;
  int	i;

  c = 'z';
  i = 0;
  while (i < 26)
    {
      my_putchar(c - i);
      i++;
    }
  return (0);
}

int	main()
{
  my_aff_revalpha();
  return (0);
}
