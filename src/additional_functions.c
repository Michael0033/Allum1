/*
** other_functions.c for other_functions in /home/besnai_m/rendu/C-Prog ELEM/CPE_2014_allum1/src
** 
** Made by michael besnainou
** Login   <besnai_m@epitech.net>
** 
** Started on  Wed Feb 18 19:09:59 2015 michael besnainou
** Last update Sun Feb 22 23:39:39 2015 michael besnainou
*/

#include "my.h"

extern char	g_tab[4][7];

void		empty_tab(t_struct *stru)
{
  int		i;

  i = 0;
  while (stru->tab[i] != '\0')
    {
      stru->tab[i] = '\0';
      i = i + 1;
    }
}

void		delete_matches(int e, int cpt,  t_struct *stru)
{
  while (e != 7 && cpt < stru->j)
    {
      if (g_tab[stru->i - 1][e] == 1)
        {
          cpt = cpt + 1;
          g_tab[stru->i - 1][e] = 0;
        }
      e = e + 1;
    }
}

void		count_third_line(int j)
{
  int		k;
  int		e;

  k = 0;
  e = 0;
  while (e < 7)
    {
      if (g_tab[j][e] == 1)
        k = k + 1;
      e = e + 1;
    }
  gere_ia(k);
}

void		call_main_functions(t_struct *stru, int i)
{
  begin_infos();
  aff_tab(stru);
  read_user_entry(stru, i);
}
