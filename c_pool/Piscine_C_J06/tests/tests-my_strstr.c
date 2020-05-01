/*
** tests-my_strstr.c for my_strstr in /home/wang_d/Piscine_C_J06/tests
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Mon Oct  6 11:46:45 2014 yin wang
** Last update Tue Oct  7 22:19:27 2014 yin wang
*/

#include <string.h>

int	main()
{
  char  *str;
  char  *dest;

  str = strdup("sd");
  dest = strdup("sdsdfds");
  my_putstr(strstr(str, dest));
  return (0);
}
