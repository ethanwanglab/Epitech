/*
** convert_base.c for convert_base in /home/wang_d/Piscine_C_J08/ex_02
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Wed Oct  8 22:39:02 2014 yin wang
** Last update Thu Mar 19 21:58:56 2015 yin wang
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
  my_putnbr_nbase(nbr, nbase, base);
}

int	*convert_base(char *nbr, char *base_from, char *base_to)
{
  int	nnbr;
  int	nfrom;
  int	n;
  int	i;
  int	sum;

  i = 1;
  sum = 0;
  nnbr = my_strlen(nbr);
  nfrom = my_strlen(base_from);
  n = nnbr - 1;
  while (n >= 0)
    {
      sum = sum + nbr[n] * i;
      n = n - 1;
      i = i * nfrom;
    }
  my_putnbr_base(sum, base_to);
}

int	main()
{
  convert_base("FF", "0123456789ABCDEF", "0123456789");
  return (0);
}
