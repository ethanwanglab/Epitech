/*
** my_aff_params.c for my_aff_params in /home/wang_d/Piscine_C_J07/ex_02/my_aff_params
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Wed Oct  8 16:35:46 2014 yin wang
** Last update Wed Oct  8 16:46:35 2014 yin wang
*/

int	main(int argc, char **argv)
{
  int	i;

  i = 0;
  while (i < argc)
    {
      my_putstr(argv[i]);
      my_putchar('\n');
      i = i + 1;
    }
}
