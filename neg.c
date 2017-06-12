/*
** neg.c for neg in /home/benjamin.g/delivery/CPool_infinadd
** 
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
** 
** Started on  Wed Oct 26 08:57:40 2016 Benjamin GAYMAY
** Last update Tue Nov  1 09:28:26 2016 Benjamin GAYMAY
*/

#include <stdlib.h>
#include <unistd.h>
#include "./include/my.h"

void	my_nbrsigne(char *nb1, char *nb2)
{
  if ((my_str_isnum(nb1) == 1) && (my_str_isnum(nb2) == 1))
    infin_add(nb1, nb2);
  else if ((nb1[0] == '-') && (nb2[0] == '-'))
    {
      nb1[0] = '0';
      nb2[0] = '0';
      if ((my_str_isnum(nb1) == 1) && (my_str_isnum(nb2) == 1))
	infin_addneg(nb1, nb2);
    }
  else if (nb1[0] == '-')
    {
      nb1[0] = '0';
      if ((my_str_isnum(nb1) == 1) && (my_str_isnum(nb2) == 1))
	infin_add_numisneg(nb1, nb2);
    }
  else if (nb2[0] == '-')
    {
      nb2[0] = '0';
      if ((my_str_isnum(nb1) == 1) && (my_str_isnum(nb2) == 1))
	infin_add_numisneg(nb2, nb1);
    }
}

void	infin_addneg(char *nb1, char *nb2)
{
  int	len1;
  int	len2;
  char	*result;
  int	size;

  len1 = my_strlen(nb1) - 1;
  len2 = my_strlen(nb2) - 1;
  result = malloc(sizeof(char) * (my_sizeresult(len1, len2) + 2));
  if (len1 >= len2)
    result = add_nb1(nb1, nb2, result);
  else
    result = add_nb1(nb2, nb1, result);
  size = my_strlen(result) - 1;
  while (result[size] == '0')
    {
      result[size] = '\0';
      size--;
    }
  result[size + 1] = '-';
  my_putstr(my_revstr(result));
  free(result);
  my_putchar('\n');
}
