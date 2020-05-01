/*
** tests-my_strupcase.c for my_strupcase in /home/wang_d/Piscine_C_J06/tests
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Mon Oct  6 21:40:41 2014 yin wang
** Last update Tue Oct  7 22:33:51 2014 yin wang
*/

#include <string.h>

int	main()
{
  char	*str;

  str = strdup("sssDDdddD");
  my_strupcase(str);
  my_putstr(str);
  return (0);
}
