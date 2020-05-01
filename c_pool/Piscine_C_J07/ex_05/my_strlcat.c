/*
** my_strlcat.c for my_strlcat in /home/wang_d/Piscine_C_J07/ex_01
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Wed Oct  8 10:16:47 2014 yin wang
** Last update Wed Oct  8 20:05:28 2014 yin wang
*/

int	getlen(char *str)
{
  int	i;
  int	len;

  i = 0;
  len = 0;
  while (str[i] != 0)
    {
      i = i + 1;
      len = len + 1;
    }
  return (len);
}

int	my_strlcat(char *dest, char *src, int size)
{
  int	src_len;
  int	dest_len;

  src_len = getlen(src);
  dest_len = getlen(dest);
  if (dest_len > size)
    return (size + src_len);
  else
    return (dest_len + src_len);
}
