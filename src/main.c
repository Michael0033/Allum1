/*
** allum1.c for allum1 in /home/besnai_m/rendu/C-Prog ELEM/Allum1
**
** Made by michael besnainou
** Login   <besnai_m@epitech.net>
**
** Started on  Mon Feb  2 17:21:04 2015 michael besnainou
** Last update Sun Feb 22 23:39:52 2015 michael besnainou
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

char		g_tab[4][7] =
  {
    {0, 0, 0, 1, 0, 0, 0},
    {0, 0, 1, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1},
  };

int		aff_tab(t_struct *stru)
{
  int		i;

  i = 1;
  stru->x = 0;
  stru->y = 0;
  my_putchar('\n');
  while (stru->x < 4)
    {
      stru->y = 0;
      my_put_nbr(i);
      my_putstr(" : ");
      while (stru->y < 7)
	{
	  if (g_tab[stru->x][stru->y] == 1)
	    my_putchar('|');
	  if (g_tab[stru->x][stru->y] == 0)
	    my_putchar(32);
	  stru->y = stru->y + 1;
	}
      my_putchar('\n');
      stru->x = stru->x + 1;
      i = i + 1;
    }
  my_putchar('\n');
  return (0);
}

void		read_user_entry(t_struct *stru, int i)
{
  int		ret;

  while ((ret = read(0, stru->tab, 4000)) > 0)
    {
      if (stru->tab[0] >= '0' && stru->tab[0] <= '9')
	get_pos(stru, i);
      else
	error_manage(1);
    }
}

void		transit_functions(t_struct *stru, int i)
{
  check_for_loose();
  aff_tab(stru);
  empty_tab(stru);
  if (i == 0)
    ia_check_matches(stru);
}

int		main(int argc, char **argv)
{
  t_struct	*stru;
  int		i;

  i = 0;
  if ((stru = malloc(sizeof(t_struct))) == NULL)
    return (2);
  if (argc == 1)
    call_main_functions(stru, i);
  if (my_strcmp(argv[1], "1v1") == 0)
    i = i + 1;
  else if (my_strcmp(argv[1], "BOT") == 0)
    i = 0;
  else
    {
      error_manage(4);
      return (2);
    }
  call_main_functions(stru, i);
  free(stru);
  return (0);
}
