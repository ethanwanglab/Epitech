/*
** tests-my_strcpy.c for tests-my_strcpy in /home/wang_d/Piscine_C_J06/tests
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Mon Oct  6 10:04:34 2014 yin wang
** Last update Tue Oct  7 21:51:46 2014 yin wang
*/

#include <string.h>

int	main()
{
  char	*src;
  char	*dest;

  src = strdup("aaaaaaaa");
  dest = strdup("ssss");
  my_putstr(my_strcpy(dest, src));
  return (0);
}
