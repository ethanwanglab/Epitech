/*
** my_getnbr_base.c for rush in /home/wang_d/rendu/c_project_2014/Piscine_C_J06/ex_16
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Sat Mar 14 16:01:59 2015 yin wang
** Last update Sat Mar 14 16:14:33 2015 yin wang
/* *\/ */

/* #include <string.h> */
/* #include <stdio.h> */

/* int	my_power_rec(int nb, int power) */
/* { */
/*   if (power <= 0) */
/*     return (my_negative_power(nb, power)); */
/*   else if (power == 1) */
/*     return (nb); */
/*   else */
/*     return (nb * my_power_rec(nb, power-1)); */
/* } */

/* int	my_negative_power(int nb, int power) */
/* { */
/*   if (power < 0) */
/*     return (0); */
/*   else */
/*     return (1); */
/* } */


/* int	join(char value, char *base) */
/* { */
/*   int i; */
/*   i = 0; */
/*   while (base[i]) */
/*     { */
/*       if (base[i] == value) */
/* 	return (i); */
/*       i++; */
/*     } */
/*   return (-1); */
/* } */

/* int	my_getnbr_base(char *str, char *base) */
/* { */
/*   int nb; */
/*   int i; */
/*   int value; */
/*   int power; */

/*   if (!str || !base) */
/*     return (0); */
/*   power = 0; */
/*   i = strlen(str) - 1; */
/*   nb = 0; */
/*   value = 0; */
/*   while (i >= 0 && check_base(str[i], base) && */
/* 	 (value = join(str[i], base)) >= 0) */
/*     { */
/*       nb = (value * my_power_rec(strlen(base), power)) + nb; */
/*       power++; */
/*       i--; */
/*     } */
/*   if (i >= 0 && str[i] == '-') */
/*     nb = nb * (-1); */
/*   return (nb); */
/* } */

int	main()
{
  int	i;

  i = my_getnbr_base("123", "0123456789abcdef");
  printf("%x", i);
  return (0);
}
