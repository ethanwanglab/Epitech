/*
** my_strdup.c for my_strdup in /home/wang_d/Piscine_C_J08/ex_01
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Wed Oct  8 20:18:02 2014 yin wang
** Last update Fri Mar 13 20:39:10 2015 yin wang
*/

#include <stdlib.h>

char	*my_strdup(char *src)
{
  char	*dest;
  int	length;

  length = my_strlen(src);
  if ((dest = malloc(length)) == NULL)
    return (NULL);
  my_strcpy(dest, src);
  return (dest);
}
