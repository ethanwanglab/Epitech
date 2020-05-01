/*
** tests-my_revstr.c for my_revstr in /home/wang_d/Piscine_C_J06/tests
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Mon Oct  6 11:46:45 2014 yin wang
** Last update Tue Oct  7 22:14:14 2014 yin wang
*/

#include <string.h>

int	main()
{
  char	*str;

  str = strdup("safdsfasdf!!@@#@");
  my_revstr(str);
  my_putstr(str);
  return (0);
}
