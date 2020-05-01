/*
** my_aff_alpha.c for 01 in /home/wang_d/github/c_pool/Piscine_C_J03
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Fri Apr  3 23:55:48 2015 yin wang
** Last update Sat Apr  4 00:04:37 2015 yin wang
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_aff_alpha()
{
  char	c;
  int	i;

  c = 'a';
  i = 0;
  while (i < 26)
    my_putchar(c + i++);
  return (0);
}

int	main()
{
  my_aff_alpha();
  return (0);
}
