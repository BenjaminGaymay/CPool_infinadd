/*
** main.c for main in /home/benjamin.g/delivery/CPool_infinadd
** 
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
** 
** Started on  Mon Oct 24 09:07:45 2016 Benjamin GAYMAY
** Last update Thu Oct 27 09:11:22 2016 Benjamin GAYMAY
*/

#include <stdlib.h>
#include <unistd.h>
#include "./include/my.h"

void	infin_add(char *nb1, char *nb2)
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
  if (result[0] == '\0')
    my_putchar('0');
  my_putstr(my_revstr(result));
  free(result);
  my_putchar('\n');
}

int	my_sizeresult(int len1, int len2)
{
  if (len1 > len2)
    return (len1);
  else
    return (len2);
}

char	*add_nb1(char *nb1, char *nb2, char *result)
{
  int	i;
  int	f;
  int	h;
  int	ret;

  i = my_strlen(nb1) - 1;
  f = my_strlen(nb2) - 1;
  ret = 0;
  h = 0;
  while (f >=0)
    {
      ret = ret + (nb1[i] - 48) + (nb2[f] - 48);
      ret = my_addret(ret, result, h);
      i--;
      f--;
      h++;
    }
  while (i >= 0)
    {
      ret = ret + nb1[i] - 48;
      ret = my_addret(ret, result, h);
      i--;
      h++;
    }
  return (result);
}

int	my_addret(int ret, char *result, int h)
{
  if (ret > 9)
    {
      ret = ret % 10;
      result[h] = ret + 48;
      result[h + 1] = '1';
      ret = 1;
    }
  else
    {
      result[h] = ret + 48;
      ret = 0;
    }
  return (ret);
}

int	main(int ac, char **av)
{
  int	i;
  int	f;
  char	*nb1;
  char	*nb2;

  if (ac != 3)
    {
      write(2, "Write two arguments\n", 21);
      return (84);
    }
  else
    {
      nb1 = av[1];
      nb2 = av[2];
      my_nbrsigne(nb1, nb2);
    }
  return (0);
}
