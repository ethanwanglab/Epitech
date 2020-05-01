/*
** my_putstr.c for 2 in /home/wang_d/github/c_pool/Piscine_C_J04
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Sun Apr 12 16:30:36 2015 yin wang
** Last update Sun Apr 12 17:14:33 2015 yin wang
*/

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}
