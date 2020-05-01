/* colle1-1.c for colle1-1 in /home/wang_d/Piscine_C_colles-Semaine_01
** 
** Made by yin wang
** Login   <wang_d@epitech.net>
** 
** Started on  Sat Oct  4 14:29:05 2014 yin wang
** Last update Sun Oct  5 14:58:39 2014 yin wang
*/

int	row_line(int row_i, int x)
{
  if (x == 1)
    {
      my_putchar('o');
      my_putchar('\n');
    }
  else
    {
      while (row_i < x)
	{
	  if (row_i == 0)
 	    my_putchar('o');
	  else if (row_i == (x - 1))
	    {
	      my_putchar('o');
	      my_putchar('\n');
	    }
	  else
	    my_putchar('-');
	  row_i = row_i + 1;
	}
    }
}

int	row_space(int row_i, int x)
{
  if (x == 1)
    {
      my_putchar('|');
      my_putchar('\n');
    }
  else
    {
      while (row_i < x)
	{
	  if (row_i == 0)
	    my_putchar('|');
	  else if (row_i == (x - 1))
	    {
	      my_putchar('|');
	      my_putchar('\n');
	    }
	  else
	    my_putchar(' ');
	  row_i = row_i + 1;
	}
    }
}

int	colle(int x, int y)
{
  int	row_i;
  int	col_j;

  row_i = 0;
  col_j = 0;
  if (x > 0 && y > 0)
    {
      while (col_j < y)
	{
	  if ((col_j == 0) || (col_j == (y - 1)))
	    row_line(row_i, x);
	  else
	    row_space(row_i, x);
	  col_j = col_j + 1;
	}
    }
  else
    my_putchar('\n');
}
