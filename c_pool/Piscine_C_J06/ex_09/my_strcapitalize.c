/*
** my_strcapitalize.c for my_strcapitalize in /home/wang_d/Piscine_C_J06/ex_09
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Tue Oct  7 18:02:08 2014 yin wang
** Last update Tue Oct  7 19:28:55 2014 yin wang
*/

int	get(char *ptr)
{
  if (ptr == 0)
    return (1);
  if (*ptr >= '0' && *ptr <= '9')
    {
      return (0);
    }
  if (*ptr >= 'a' && *ptr <= 'z')
    {
      return (0);
    }
  if (*ptr >= 'A' && *ptr <= 'Z')
    {
      return (0);
    }
  else
    return (1);
}

char	*my_strcapitalize(char *str)
{
  char	*temp;
  char	*ptr;

  ptr = str;
  if (*str >= 'a' && *str <= 'z')
    {
      *str = *str - 32;
      str = str + 1;
    }
  while (*str != '\0')
    {
      if (*str >= 'a' && *str <= 'z')
	{
	   temp = (str - 1);
	  if (get(temp) == 1)
	    {
	      *str = *str - 32;
	    }
	}
      str = str + 1;
    }
  return (ptr);
}
