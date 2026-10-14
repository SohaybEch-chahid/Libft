/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 22:08:09 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/12 22:08:11 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n) {
  size_t i;
  unsigned char   *ptr;
  
  
  i = 0;
  ptr = (unsigned char *)s;

  while (i < n) {
    ptr[i] = (unsigned char) c;
    i++;
  }

  return s;
}

/*
#include <stdio.h>

int main(void)
{
    char str[6] = "hello";

    ft_memset(str, 'X', 3);
    printf("%s\n", str);
    return (0);
}
*/
