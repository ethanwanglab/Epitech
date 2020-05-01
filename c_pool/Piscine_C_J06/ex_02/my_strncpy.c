/*
** my_strncpy.c for my_strncpy in /home/wang_d/Piscine_C_J06
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Mon Oct  6 10:51:05 2014 yin wang
** Last update Tue Oct  7 22:09:36 2014 yin wang
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

char	*my_strncpy(char *dest, char *src, int n)
{
  int	len;
  int	i;

  i = 0;
  len = my_strlen(src);
  if (len != 0)
    {
      while (src[i] != '\0' && i < n)
	{
	  if (n < len)
	    dest[i] = src[i];
	  else
	    {
	      if (i < len)
		dest[i] = src[i];
	      else
		dest[i] = '\0';
	    }
	  i = i + 1;
	}
      return (dest);
    }
  else
    return (0);
}
