/*
** my_getnbr.c for my_getnbr in /home/besnai_m/rendu/C-Prog ELEM/Allum1/lib/my
** 
** Made by michael besnainou
** Login   <besnai_m@epitech.net>
** 
** Started on  Tue Feb  3 16:25:32 2015 michael besnainou
** Last update Wed Feb 11 12:45:27 2015 michael besnainou
*/

int	my_getnbr(char *str)
{
  int	i;
  int	nbr;

  nbr = 0;
  i = -1;
  while (str[++i] != '\0')
    nbr = nbr * 10 + str[i] - 48;
  return (nbr);
}
