/*
** tests-my_str_isnum.c for my_str_isnum in /home/wang_d/Piscine_C_J06/ex_10
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Mon Oct  6 23:45:48 2014 yin wang
** Last update Tue Oct  7 22:47:15 2014 yin wang
*/

#include<string.h>

int	main()
{
  int	num;
  char	*str;

  str = strdup("111s");
  num = my_str_isnum(str);
  return (0);
}
