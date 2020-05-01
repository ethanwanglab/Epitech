/*
** my_put_nbr.c for 07 in /home/wang_d/github/c_pool/Piscine_C_J03
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Sat Apr  4 00:30:14 2015 yin wang
** Last update Thu Apr  9 17:16:42 2015 yin wang
*/

int	my_put_nbr(int nb)
{
  int	flag;

  flag = 0;
  if (nb < 0)
    {
      my_putchar('-');
      if (nb == -2147483648)
	{
	  flag = 1;
	  nb++;
	}
      nb = nb * (-1);
    }
  if (nb >= 10)
    my_put_nbr(nb / 10);
  if (flag == 1)
    my_putchar('1' + nb % 10);
  else
    my_putchar('0' + nb % 10);
  return (0);
}

int	main()
{
  my_put_nbr(42);
  my_putchar('\n');
  my_put_nbr(0);
  my_putchar('\n');
  my_put_nbr(-42);
  my_putchar('\n');
  my_put_nbr(2147483647);
  my_putchar('\n');
  my_put_nbr(-2147483648);
  my_putchar('\n');
  return (0);
}
