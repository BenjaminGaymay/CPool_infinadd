/*
** my.h for my in /home/benjamin.g/delivery/CPool_Day09/include
** 
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
** 
** Started on  Thu Oct 13 14:07:14 2016 Benjamin GAYMAY
** Last update Tue Nov  1 11:06:23 2016 Benjamin GAYMAY
*/

#ifndef MY_H_
# define MY_H_

int	my_find_prime_sup(int nb);
int	check_neg(int i, int my_neg, char *str_nbr);
int	my_isneg(int n);
int	my_is_prime(int nb);
int	my_power_rec(int nb, int p);
void	my_putchar(char c);
int	my_put_nbr(int n);
int	my_putstr(char *str2);
char	*my_revstr(char *str);
int	my_showmem(char *str, int size);
int	my_showstr(char *str);
void	my_sort_int_tab(int *tab, int size);
int	my_square_root(int nb);
char	*my_strcapitalize(char *str);
char	*my_strcat(char *dest, char *src);
char	*my_strcat(char *dest, char *src);
int	my_strcmp(char *s1, char *s2);
char	*my_strcpy(char *dest, char *src);
int	my_str_isalpha(char *str);
int	my_str_islower(char *str);
int	my_str_isnum(char *str);
int	my_str_isprintable(char *str);
int	my_str_isupper(char *str);
int	my_strlen(char *str1);
char	*my_strlowcase(char *str);
char	*my_strncat(char *dest, char *src, int nb);
char	*my_strncpy(char *dest, char *src, int n);
char	*my_strstr(char *str, char *to_find);
char	*my_strupcase(char *str);
int	main(int ac, char **av);
void	infin_add(char *nb2, char *nb1);
int	my_sizeresult(int len1, int len2);
char	*add_nb1(char *nb1, char *nb2, char *result);
int	my_addret(int ret, char *result, int h);
void	my_strsigne(char *nb1, char *nb2);
void	infin_addneg(char *nb1, char *nb2);
void	infin_add_numisneg(char *nb1, char *nb2);
int	my_subret(int ret, char *result, int h);
int	my_num_is_sup(int ret);
void	my_nbrsigne(char *nb1, char *nb2);
void	infin_sub(char *nb1, char *nb2, int i, int f);
void	aff_infinsub(char *num);

#endif /* !MY_H_ */
