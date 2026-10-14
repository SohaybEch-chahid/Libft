/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 09:53:53 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/13 09:53:55 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n) {
  /*
  size_t i;
  unsigned char *ptr;

  i = 0;
  ptr = (unsigned char *)s;
  while (i < n) {
    ptr[i] = '\0';
    i++;
  }
  */

  ft_memset(s, 0, n);
}

/*
#include <stdio.h>
int main(void)
{
  char s[] = "psyb";
  printf("%s\n", s);
  ft_bzero(s, 2);
  printf("%s\n", s);

  printf("b1 : %c\n", s[1]);
  printf("b2 : %c\n", s[2]);
  printf("b3 : %c\n", s[3]);
  return 0;
}
*/
