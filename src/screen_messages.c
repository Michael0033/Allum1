/*
** screen_messages.c for screen_messages in /home/besnai_m/rendu/C-Prog ELEM/CPE_2014_allum1/src
** 
** Made by michael besnainou
** Login   <besnai_m@epitech.net>
** 
** Started on  Wed Feb 18 17:16:29 2015 michael besnainou
** Last update Sun Feb 22 21:22:22 2015 michael besnainou
*/

#include "my.h"

void		begin_infos()
{
  my_putstr("How to play ? Type the number of the line, ");
  my_putstr("followed by the number of matches that you want to remove, ");
  my_putstr("like this : 'LINE:MATCH'\n");
}

void		error_manage(int o)
{
  if (o == 1)
    my_putstr("Wrong character. Respect [NLINE]:[NMATCH]\n");
  else if (o == 2)
    my_putstr("Cannot be on a non-existent line.\n");
  else if (o == 3)
    my_putstr("There is not enough matches to take on this line.\n");
  else if (o == 4)
    {
      my_putstr("To play against a friend (or not), type './allum1 1v1' - ");
      my_putstr("To play against the bot, type './allum1 BOT'.\n");
    }
}
