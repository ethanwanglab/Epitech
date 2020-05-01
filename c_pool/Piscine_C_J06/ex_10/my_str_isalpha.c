/*
** my_str_isalpha.c for my_str_isalpha in /home/wang_d/Piscine_C_J06/ex_10
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Mon Oct  6 23:36:16 2014 yin wang
** Last update Tue Oct  7 00:03:09 2014 yin wang
*/

int	my_str_isalpha(char *str)
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
	  if (str[i] >= 'A' && str[i] <= 'Z')
	    {
	    }
	  else if (str[i] >= 'a' && str[i] <= 'z')
	    {
	    }
	  else
	    flag = 0;
	  i = i + 1;
	}
      return (flag);
    }
}
