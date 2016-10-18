/*
** code.c for  in /home/Tamsi/Dactylo
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Tue Oct 18 14:24:01 2016 Tamsi Besson
** Last update Tue Oct 18 14:39:42 2016 Tamsi Besson
*/
#include <stdio.h>

char	*str_to_cmp()
{
  char	*str_fix;

  str_fix = "cours de dactylo";
  printf("%s\n", str_fix);
  return (str_fix);
}

char	*my_str()
{
  char	*str_write;

  scanf("%s", str_write);
  my_str_cmp(str_to_cmp, str_write);
}
