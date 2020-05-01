/*
** tests-my_strncmp.c for tests-my_strncmp in /home/wang_d/Piscine_C_J06/ex_06
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Tue Oct  7 00:44:10 2014 yin wang
** Last update Fri Oct 31 19:24:26 2014 yin wang
*/

#include <stdio.h>

int	main()
{
  int	num;

  num = my_strncmp("sabbb", "saa", 3);
  printf("%d\n", num);
  return (0);
}
