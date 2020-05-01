/*
** my_sort_int_tab.c for 5 in /home/wang_d/github/c_pool/Piscine_C_J04
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Sun Apr 12 20:16:00 2015 yin wang
** Last update Sun Apr 12 20:42:38 2015 yin wang
*/

void	my_sort_int_tab(int *tab, int size)
{
  int	i;
  int	j;
  int	tmp;

  i = 0;
  while (i < size)
    {
      j = i + 1;
      while (j < size)
  	{
  	  if (tab[i] > tab[j])
  	    {
  	      tmp = tab[i];
  	      tab[i] = tab[j];
  	      tab[j] = tmp;
  	    }
  	  j++;
  	}
      i++;
    }
}
