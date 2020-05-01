/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/wang_d/Piscine_C_J08/ex_04
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Fri Oct 10 13:32:06 2014 yin wang
** Last update Fri Mar 13 21:13:01 2015 yin wang
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	check_flag(char c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  if (c >= 'A' && c <= 'Z')
    return (1);
  if (c >= '0' && c <= '9')
    return (1);
  return (0);
}

int	word_count(char *str)
{
  int	word;
  int	i;

  i = 0;
  word = 0;
  if (str == NULL)
    return (0);
  while (str[i])
    {
      if (check_flag(str[i]))
	{
	  while (check_flag(str[i]))
	    i++;
	  word++;
	}
      i++;
    }
  return (word);
}

char	**get_word(char ***tmp, char *str)
{
  int	i;
  int	k;
  int	j;
  char	**tab;

  i = 0;
  k = 0;
  tab = *tmp;
  while (str[i])
    {
      if (check_flag(str[i]))
	{
	  j = 0;
	  tab[k] = malloc(strlen(str));
	  while (check_flag(str[i]))
	    {
	      tab[k][j] = str[i];
	      i++;
	      j++;
	    }
	  tab[k][j] = '\0';
	  k++;
	}
      i++;
    }
  tab[k] = '\0';
  return (*tmp);
}

char	**my_str_to_wordtab(char *str)
{
  char	**tab;
  char	**new;
  int	word;

  word = word_count(str);
  tab = (char **)malloc(sizeof(char*) * word);
  if (tab == NULL)
    return (NULL);
  new = get_word(&tab, str);
  return (new);
}

int	main()
{
  char	**tab;
  int	i;

  i = 0;
  tab = my_str_to_wordtab("          zhe shi  wang yin    de   hao   hao ");
  while (tab[i])
    {
      printf("%s\n", tab[i]);
      i++;
    }
  return 0;
}
