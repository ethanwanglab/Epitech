/*
** tests-my_strcapitalize.c for tests-my_strcapitalize in /home/wang_d/Piscine_C_J06/tests
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Tue Oct  7 18:48:35 2014 yin wang
** Last update Tue Oct  7 22:40:51 2014 yin wang
*/

#include <string.h>

int	main()
{
  char	*str;
  char	*ptr;

  str = strdup("hey, how are you ? 42words forty-two; fifty+one");
  my_putstr(my_strcapitalize(str));
  return (0);
}
