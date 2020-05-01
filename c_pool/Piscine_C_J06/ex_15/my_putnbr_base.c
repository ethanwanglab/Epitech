/*
** my_putnbr_base.c for my_putnbr_base in /home/wang_d/Piscine_C_J06/ex_15
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Tue Oct  7 19:50:16 2014 yin wang
** Last update Sat Mar 14 14:12:43 2015 yin wang
*/

int	my_putnbr_nbase(int nbr, int nbase, char *base)
{
  if (nbr / nbase != 0)
    {
      my_putnbr_nbase(nbr / nbase, nbase, base);
    }
  my_putchar(base[nbr % nbase]);
}

int	my_putnbr_base(int nbr, char *base)
{
  int	nbase;

  nbase = my_strlen(base);
  if (nbr < 0)
    {
      my_putchar('-');
      nbr = -nbr;
    }
  my_putnbr_nbase(nbr, nbase, base);
}

int	main()
{
  my_putnbr_base('a', "0123456789abcdef");
  return (0);
}
