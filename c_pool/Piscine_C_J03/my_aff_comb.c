/*
** my_aff_comb.c for 05 in /home/wang_d/github/c_pool/Piscine_C_J03
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Sat Apr  4 00:13:46 2015 yin wang
** Last update Sat Apr  4 00:24:27 2015 yin wang
*/

int	my_aff_comb()
{
  int	a;
  int	b;
  int	c;
  int	i;

  i = 0;
  while (i < 1000)
    {
      a = i / 100;
      b = i % 100 / 10;
      c = i % 100 % 10;
      if (a < b && b < c)
	{
	  my_putchar(a + '0');
	  my_putchar(b + '0');
	  my_putchar(c + '0');
	  if (a != 7)
	    {
	      my_putchar(',');
	      my_putchar(' ');
	    }
	}
      i++;
    }
  return (0);
}

int	main()
{
  my_aff_comb();
  return (0);
}
