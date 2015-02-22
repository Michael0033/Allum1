/*
** my.h for my_h in /home/besnai_m/rendu/C-Prog ELEM/CPE_2014_bsq/include
** 
** Made by michael besnainou
** Login   <besnai_m@epitech.net>
** 
** Started on  Mon Jan 12 13:50:46 2015 michael besnainou
** Last update Sun Feb 22 23:39:24 2015 michael besnainou
*/

#ifndef			MY_H_
# define		MY_H_

typedef struct		s_struct
{
  char			tab[4096];
  int			x;
  int			y;
  int			i;
  int			j;
}			t_struct;

void			my_putchar(char c);
void			my_putstr(char *str);
int			my_strlen(char *str);
int			my_put_nbr(int nb);
int			my_getnbr(char *str);
char			**my_str_to_wordtab(char *str);
int			get_pos(t_struct *stru, int i);
int			check_elem(t_struct *stru, int i);
void			read_user_entry(t_struct *stru, int i);
int			aff_tab(t_struct *stru);
void			check_for_win();
void			check_for_loose();
void			delete_matches(int e, int cpt, t_struct *stru);
void			empty_tab(t_struct *stru);
int			ia_delete_one_match();
void			ia_check_matches(t_struct *stru);
void			transit_ia(t_struct *stru);
void			transit_functions(t_struct *stru, int i);
void			begin_infos();
int			line_error();
int			ia_delete_one_line(int k);
void			gere_ia();
void			count_third_line(int j);
void			error_manage();
int			my_strcmp(char *s1, char *s2);
void			write_winner(int un);
void			write_looser(int un);
void			call_main_functions(t_struct *stru, int i);

#endif			/* !MY_H_ */
