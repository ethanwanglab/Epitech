/*
** my_strncat.c for my_strncat in /home/wang_d/Piscine_C_J07/ex_01
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Wed Oct  8 10:16:47 2014 yin wang
** Last update Thu Oct  9 10:58:49 2014 yin wang
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	len;
  int	i;

  i = 0;
  len = my_strlen(dest);
  if (len == 0)
    return (src);
  else
    {
      while (src[i] != 0 && i < nb)
	{
	  dest[len + i] = src[i];
	  i = i + 1;
	}
      return (dest);
    }
}
