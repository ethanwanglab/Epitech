/*
** my_strcpy.c for my_strcpy in /home/wang_d/Piscine_C_J06
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Mon Oct  6 09:57:12 2014 yin wang
** Last update Tue Oct  7 10:07:50 2014 yin wang
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  if (*src == 0)
    return (0);
  while (src[i] != '\0')
    dest[i++] = src[i++];
  return (dest);
}
