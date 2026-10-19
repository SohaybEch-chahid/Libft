/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <sech-cha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:57:44 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/19 14:57:46 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include <stdio.h>

int	main(void)
{
  char s[] = "psyb";

  printf("%s\n", s);
  ft_bzero(s, 2);
  printf("%s\n", s);
  printf("b1 : %c\n", s[1]);
  printf("b2 : %c\n", s[2]);
  printf("b3 : %c\n", s[3]);
  return (0);
}
*/
