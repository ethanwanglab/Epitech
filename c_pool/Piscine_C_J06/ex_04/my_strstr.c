/*
** my_strstr.c for my_strstr in /home/wang_d/Piscine_C_J06/ex_04
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Mon Oct  6 12:17:51 2014 yin wang
** Last update Tue Oct  7 22:17:18 2014 yin wang
*/

int	my_strlen(char *str)
{
  int	i;
  int	len;

  i = 0;
  len = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
      len = len + 1;
    }
  return (len);
}

int	get_flag(char *str, char *to_find)
{
  int	i;
  int	j;
  int	len_str;
  int	len_find;
  int	flag;

  i = 0;
  j = 0;
  len_str = my_strlen(str);
  len_find = my_strlen(str);
  while (i < len_str)
    {
      while (j < len_find)
	{
	  if (str[i + j] != to_find[j])
	    break;
	  j = j + 1;
	}
      if (j == len_find)
	{
	  flag = 1;
	}
      i = i + 1;
    }
  return (flag);
}

int	get_max(char *str, char *to_find)
{
  int	i;
  int	j;
  int	len_str;
  int	len_find;
  int	max;

  i = 0;
  j = 0;
  len_str = my_strlen(str);
  len_find = my_strlen(str);
  while (i < len_str)
    {
      while (j < len_find)
	{
	  if (str[i + j] != to_find[j])
	    break;
	  j = j + 1;
	}
      if (j == len_find)
	{
	  max = i;
	}
      i = i + 1;
    }
  return (max);
}

char	*my_strstr(char *str, char *to_find)
{
  int	flag;
  int	max;

  flag = get_flag(str, to_find);
  max = get_max(str, to_find);
  if (flag == 1)
    return (str + max);
  else
    return (0);
}
