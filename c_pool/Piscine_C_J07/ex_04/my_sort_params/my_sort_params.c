/*
** my_sort_params.c for my_sort_params in /home/wang_d/Piscine_C_J07/ex_04/my_sort_params
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Wed Oct  8 17:07:29 2014 yin wang
** Last update Wed Oct 22 20:01:43 2014 yin wang
*/

int	main(int argc, char **argv)
{
  char	*temp;
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (i < (argc - 1))
    {
      while (j < (argc - 1 - i))
	{
	  if (strcmp(argv[j], argv[j + 1]) > 0)
	    {
	      temp = argv[j];
	      argv[j] = argv[j + 1];
	      argv[j + 1] = temp;
	    }
	  j = j + 1;
	}
      i = i + 1;
    }
  i = 0;
  while (i < argc)
    {
      my_putstr(argv[i]);
      my_putchar('\n');
      i = i + 1;
    }
}
