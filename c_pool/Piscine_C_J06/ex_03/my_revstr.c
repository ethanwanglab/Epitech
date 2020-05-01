/*
** my_revstr.c for my_revstr in /home/wang_d/Piscine_C_J06
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Mon Oct  6 11:24:50 2014 yin wang
** Last update Sun Nov  9 11:03:40 2014 yin wang
*/

int	get_len(char *str)
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

char	*my_revstr(char *str)
{
  int	len;
  int	i;
  char	ptr;

  i = 0;
  len = get_len(str);
  while (i < (len - len / 2))
    {
      ptr = *(str + i);
      *(str + i) = *(str + len - 1 - i);
      *(str + len - 1 - i) = ptr;
      i = i + 1;
    }
  return (str);
}
