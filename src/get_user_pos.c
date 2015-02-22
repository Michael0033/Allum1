/*
** get_user_pos.c for get_user_pos.c in /home/besnai_m/rendu/C-Prog ELEM/CPE_2014_allum1/src
** 
** Made by michael besnainou
** Login   <besnai_m@epitech.net>
** 
** Started on  Wed Feb 18 17:18:17 2015 michael besnainou
** Last update Sun Feb 22 16:54:37 2015 michael besnainou
*/

#include <unistd.h>
#include "my.h"

extern char	g_tab[4][7];

int		get_pos(t_struct *stru, int i)
{
  char		**word_tab;

  stru->i = 0;
  stru->j = 0;
  word_tab = my_str_to_wordtab(stru->tab);
  if (word_tab[1] == NULL)
    {
      error_manage(1);
      return (0);
    }
  stru->i = my_getnbr(word_tab[0]);
  stru->j = my_getnbr(word_tab[1]);
  if (stru->i > stru->x)
    {
      error_manage(2);
      return (0);
    }
  check_elem(stru, i);
  return (0);
}

int		check_elem(t_struct *stru, int i)
{
  int		un;
  int		e;
  int		cpt;

  cpt = 0;
  e = 0;
  un = 0;
  while (e != 7)
    {
      if (g_tab[stru->i - 1][e] == 1)
        un = un + 1;
      e = e + 1;
    }
  e = 0;
  if (stru->j > un || stru->j == 0)
    {
      error_manage(3);
      return (0);
    }
  delete_matches(e, cpt, stru);
  transit_functions(stru, i);
  return (0);
}
