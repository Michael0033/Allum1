/*
** my_strncmp.c for my_strcmp in
**
** Made by michael besnainou
** Login   <besnai_m@epitech.net>
**
** Started on  Tue Oct  7 09:45:30 2014 michael besnainou
** Last update Sun Feb 22 18:06:12 2015 michael besnainou
*/

#include <stdlib.h>

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  if (s1 == NULL || s2 == NULL)
    return (-1);
  while (s1[i] == s2[i])
    {
      if (s1[i] == '\0' && s2[i] == '\0')
	return (0);
      i = i + 1;
    }
  if (s1[i] < s2[i])
    return (s2[i] - s1[i]);
  else if (s1[i] > s2[i])
    return (s1[i] - s2[i]);
  return (-1);
}
