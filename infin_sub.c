/*
** infin_sub.c for infin_sub in /home/benjamin.g/delivery/CPool_infinadd
** 
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
** 
** Started on  Mon Oct 31 11:20:09 2016 Benjamin GAYMAY
** Last update Tue Nov  1 11:18:09 2016 Benjamin GAYMAY
*/

#include <unistd.h>
#include <stdlib.h>
#include "./include/my.h"

void	infin_add_numisneg(char *nb1, char *nb2)
{
  int	i;
  int	f;

  i = my_strlen(nb1) - 2;
  f = my_strlen(nb2) - 1;
  if (i < f)
    infin_sub(nb2, nb1, f, i + 1);
  else
    {
      my_putchar('-');
      infin_sub(nb1, nb2, i + 1, f);
    }
}

void	infin_sub(char *nb1, char *nb2, int i, int f)
{
  int	c;
  int	ret;
  char	*num;

  c = 0;
  ret = 0;
  num = malloc(sizeof(char) * (i  + 1));
  while (f >= 0)
    {
      if (nb1[i] >= nb2[f])
	{
	  if (ret == 0)
	    ret = (nb1[i] - '0') - (nb2[f] - '0');
	  else
	    ret = ret - (nb2[f] - '0');
	  num[c] = ret + '0';
	}
      else
	{
	  ret = (nb1[i - 1] - '0') * 10 + (nb1[i] - '0') - (nb2[f] - '0');
	  num[c] = (ret % 10) + '0';
	  num[c + 1] = (ret / 10) + '0';
	  ret  = ret / 10;
	}
      c++;
      i--;
      f--;
    }
  while (i >= 0)
    {
      if (ret != 0)
	{
	  num[c] = ret + '0';
	  ret = 0;
	}
      else
	num[c] = nb1[i];
      i--;
      c++;
    }
  aff_infinsub(num);
  free(num);
}

void	aff_infinsub(char *num)
{
  int	i;

  i = my_strlen(num) - 1;
  while (num[i] == '0')
    {
      num[i] = '\0';
      i--;
    }
  num = my_revstr(num);
  my_putstr(num);
}
