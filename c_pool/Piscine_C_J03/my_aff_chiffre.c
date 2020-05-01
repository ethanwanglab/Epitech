/*
** my_aff_chiffre.c for 03 in /home/wang_d/github/c_pool/Piscine_C_J03
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Sat Apr  4 00:09:05 2015 yin wang
** Last update Sat Apr  4 00:09:57 2015 yin wang
*/

int	my_aff_chiffre()
{
  char	c;
  int	i;

  c = '0' + 0;
  i = 0;
  while (i < 10)
    {
      my_putchar(c + i);
      i++;
    }
  return (0);
}

int	main()
{
  my_aff_chiffre();
  return (0);
}
