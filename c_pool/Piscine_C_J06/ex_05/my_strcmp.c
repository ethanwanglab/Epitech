/*
** my_strcmp.c for my_strcmp in /home/wang_d/Piscine_C_J06/ex_05
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Mon Oct  6 16:30:46 2014 yin wang
** Last update Tue Oct  7 22:26:24 2014 yin wang
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	j;
  int	num;

  i = 0;
  j = 0;
  if (s1 == 0 || s2 == 0)
    return (0);
  while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
    {
      i = i + 1;
      j = j + 1;
    }
  num = s1[i] - s2[j];
  return (num);
}
