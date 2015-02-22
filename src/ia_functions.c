/*
** second.c for second.c in /home/besnai_m/rendu/C-Prog ELEM/CPE_2014_allum1
** 
** Made by michael besnainou
** Login   <besnai_m@epitech.net>
** 
** Started on  Mon Feb 16 15:35:31 2015 michael besnainou
** Last update Fri Feb 20 16:25:14 2015 michael besnainou
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

extern char	g_tab[4][7];

void		ia_check_matches(t_struct *stru)
{
  int		un;
  int		e;
  int		i;

  i = 0;
  e = 0;
  un = 0;
  while (i < 4)
    {
      e = 0;
      un = 0;
      while (e < 7)
        {
          if (g_tab[i][e] == 1)
            un = un + 1;
          e = e + 1;
        }
      i = i + 1;
    }
  transit_ia(stru);
}

void		transit_ia(t_struct *stru)
{
  count_third_line(2);
  my_putstr("The bot is playing...\n");
  check_for_win();
  aff_tab(stru);
}

void		gere_ia(int k)
{
  int		i;
  int		e;
  int		j;

  j = 0;
  e = 0;
  while (j < 4)
    {
      e = 0;
      i = 0;
      while (e < 7)
	{
	  if (g_tab[j][e] == 1)
	    i = i + 1;
	  e = e + 1;
	}
      j = j + 1;
    }
  if (i == 7)
    ia_delete_one_line(3);
  else if (k >= 1 && k <= 5)
    ia_delete_one_line(2);
  else
    ia_delete_one_match();
}

int		ia_delete_one_line(int k)
{
  int		e;

  e = 0;
  while (e < 7)
    {
      if (g_tab[k][e] == 1)
	g_tab[k][e] = 0;
      e = e + 1;
    }
  return (0);
}

int		ia_delete_one_match()
{
  int		i;
  int		e;

  i = 0;
  e = 0;
  while (i < 4)
    {
      e = 0;
      while (e < 7)
	{
	  if (g_tab[i][e] == 1)
	    {
	      g_tab[i][e] = 0;
	      return (0);
	    }
          e = e + 1;
        }
      i = i + 1;
    }
  return (0);
}
