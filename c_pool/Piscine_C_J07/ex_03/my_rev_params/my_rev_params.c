/*
** my_rev_params.c for my_rev_params in /home/wang_d/Piscine_C_J07/ex_03/my_rev_params
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Wed Oct  8 16:49:13 2014 yin wang
** Last update Wed Oct  8 17:05:48 2014 yin wang
*/

int	main(int argc, char **argv)
{
  while (argc >= 1)
    {
      my_putstr(argv[argc -1]);
      my_putchar('\n');
      argc = argc - 1;
    }
}
