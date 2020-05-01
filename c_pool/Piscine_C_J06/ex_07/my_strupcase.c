/*
** my_strupcase.c for my_strupcase in /home/wang_d/Piscine_C_J06/ex_07
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Mon Oct  6 21:29:45 2014 yin wang
** Last update Tue Oct  7 22:32:35 2014 yin wang
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	str[i] = str[i] - 32;
      i = i + 1;
    }
  return (str);
}
