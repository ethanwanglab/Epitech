/*
** tests-my_strlowcase.c for my_strlowcase in /home/wang_d/Piscine_C_J06/tests
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Mon Oct  6 21:40:41 2014 yin wang
** Last update Tue Oct  7 22:36:30 2014 yin wang
*/

#include <string.h>

int	main()
{
  char	*str;

  str = strdup("");
  my_strlowcase(str);
  my_putstr(str);
  return (0);
}
