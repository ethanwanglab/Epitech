/*
** my_str_isprintable.c for my_str_isprintable in /home/wang_d/Piscine_C_J06/ex_11
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Tue Oct  7 00:05:52 2014 yin wang
** Last update Tue Oct  7 22:54:25 2014 yin wang
*/

int	my_str_isprintable(char *str)
{
  int	i;
  int	flag;

  i = 0;
  flag = 1;
  if (*str == 0)
    return (1);
  else
    {
      while (str[i] != '\0')
	{
	  if (str[i] >= ' ' && str[i] <= '~')
	    {
	    }
	  else 
	    flag = 0;
	  i = i + 1;
	}
    }
  return (flag);
}
