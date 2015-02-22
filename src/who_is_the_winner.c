/*
** who_is_the_winner.c for who_is_the_winner in /home/besnai_m/rendu/C-Prog ELEM/CPE_2014_allum1/src
** 
** Made by michael besnainou
** Login   <besnai_m@epitech.net>
** 
** Started on  Wed Feb 18 17:23:53 2015 michael besnainou
** Last update Sun Feb 22 17:17:33 2015 michael besnainou
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

extern char	g_tab[4][7];

void		check_for_loose()
{
  int		i;
  int		e;
  int		un;

  un = 0;
  i = 0;
  e = 0;
  while (i < 4)
    {
      e = 0;
      while (e < 7)
        {
          if (g_tab[i][e] == 1)
            un = un + 1;
          e = e + 1;
        }
      i = i + 1;
    }
  write_looser(un);
}

void		write_looser(int un)
{
  if (un == 0)
    {
      my_putstr("You lost the game, the bot won !\n");
      exit(1);
    }

}

void		check_for_win()
{
  int		i;
  int		e;
  int		un;

  un = 0;
  i = 0;
  e = 0;
  while (i < 4)
    {
      e = 0;
      while (e < 7)
        {
          if (g_tab[i][e] == 1)
            un = un + 1;
          e = e + 1;
        }
      i = i + 1;
    }
  write_winner(un);
}

void		write_winner(int un)
{
  if (un == 0)
    {
      my_putstr("You won the game, the bot lost !\n");
      exit(1);
    }
}
