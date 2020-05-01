/*
** my_strlen.c for 3 in /home/wang_d/github/c_pool/Piscine_C_J04
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Sun Apr 12 17:13:03 2015 yin wang
** Last update Sun Apr 12 17:24:10 2015 yin wang
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

/*
int	main()
{
  char *str = "wangyin"; //len = 7

  printf("%d\n", my_strlen(str));
  return 0;
}
*/
