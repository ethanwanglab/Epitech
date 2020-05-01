/*
** my_getnbr.c for 4 in /home/wang_d/github/c_pool/Piscine_C_J04
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Sun Apr 12 17:41:40 2015 yin wang
** Last update Sun Apr 12 20:15:03 2015 yin wang
*/

int	my_getnbr(char *str)
{
  int	i;
  int	nb;
  int	num;

  i = 0;
  nb = 1;
  num = 0;
  while (str[i])
    {
      if (str[i] == '-')
	nb = nb * (-1);
      if (str[i] >= '0' && str[i] <= '9')
	{
	  while (str[i] && str[i] >= '0' && str[i] <= '9')
	    {
	      if (num > num * 10 + (str[i] - '0'))
		return (0);
	      num = num * 10 + (str[i++] - '0');
	    }
	  return (num * nb);
	}
      i++;
    }
  return (0);
}

int	main()
{
  printf("%d\n", my_getnbr("+----+--++---+---+-42"));
  printf("%d\n", my_getnbr("42a43"));
  printf("%d\n", my_getnbr("1100000000000000000000000000000000042"));
  printf("%d\n", my_getnbr("-1000000000000000000000000000000000042"));
  return (0);
}
