/*
** my_strncmp.c for my_strncmp in /home/wang_d/Piscine_C_J06/ex_06
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Mon Oct  6 21:22:31 2014 yin wang
** Last update Fri Oct 31 19:20:39 2014 yin wang
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;
  int	j;
  int	m;

  i = 0;
  j = 0;
  m = 1;
  if (n == 0)
    return (0);
  while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j] && m < n)
    {
      i = i + 1;
      j = j + 1;
      m = m + 1;
    }
  return (s1[i] - s2[j]);
}
