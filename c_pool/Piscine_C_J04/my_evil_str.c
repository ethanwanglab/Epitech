/*
** my_evil_str.c for 3bis in /home/wang_d/github/c_pool/Piscine_C_J04
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Sun Apr 12 17:17:11 2015 yin wang
** Last update Sun Apr 12 17:25:54 2015 yin wang
*/

#include <string.h>

char	*my_evil_str(char *str)
{
  int	i;
  int	len;
  char	tmp;

  i = 0;
  len = my_strlen(str);
  while (i < (len + 1) / 2)
    {
      tmp = str[i];
      str[i] = str[len - 1 - i];
      str[len - 1 - i] = tmp;
      i++;
    }
  return (str);
}

int	main()
{
  char	*str;

  str = strdup("abcdef");
  my_evil_str(str);
  my_putstr(str);
  return (0);
}
