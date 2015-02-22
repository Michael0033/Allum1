/*
** my_strlen.c for my_strlen.c in /home/besnai_m/rendu/C-Prog ELEM/CPE_2014_allum1/lib/my
** 
** Made by michael besnainou
** Login   <besnai_m@epitech.net>
** 
** Started on  Tue Feb 17 16:24:59 2015 michael besnainou
** Last update Tue Feb 17 16:26:21 2015 michael besnainou
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}
