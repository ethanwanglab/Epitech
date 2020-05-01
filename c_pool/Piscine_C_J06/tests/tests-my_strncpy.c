/*
** tests-my_strncpy.c for tests-my_strncpy in /home/wang_d/Piscine_C_J06/tests
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Mon Oct  6 10:04:34 2014 yin wang
** Last update Tue Oct  7 22:10:09 2014 yin wang
*/

#include <string.h>

int	main()
{
  char	*src;
  char	*dest;

  src = strdup("");
  dest = strdup("dasfsdfsd");
  my_putstr(my_strncpy(dest, src, 3));
  my_putchar('\n');
  if (dest[6] == '\0')
    my_putstr("Yohoo!!!\n");
  return (0);
}
