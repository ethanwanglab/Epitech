/*
** my_aff_comb2.c for 06 in /home/wang_d/github/c_pool/Piscine_C_J03
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Sat Apr  4 00:23:12 2015 yin wang
** Last update Sat Apr  4 00:29:16 2015 yin wang
*/

int	my_aff_comb2()
{
  int	m;
  int	n;

  m = 0;
  while (m < 100)
    {
      n = m + 1;
      while (n < 100)
	{
	  my_putchar(m / 10 + '0');
	  my_putchar(m % 10 + '0');
	  my_putchar(' ');
	  my_putchar(n / 10 + '0');
	  my_putchar(n % 10 + '0');
	  if (m != 98)
	    {
	      my_putchar(',');
	      my_putchar(' ');
	    }
	  n++;
	  }
      m++;
    }

  return (0);
}

int	main()
{
  my_aff_comb2();
  return (0);
}
