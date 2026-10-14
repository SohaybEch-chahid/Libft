/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:21:43 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/13 17:21:44 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n) {
  const unsigned char *ptr;

  ptr = (const unsigned char *)s;
  while (n--) {
    if (*ptr == (unsigned char )c)
      return ((void *)ptr);
    ptr++;
  }
  return (NULL);
}
/*
#include <stdio.h>

int main(void)
{
    char str[] = "Hello World";

    printf("%s\n", (char *)ft_memchr(str, 'W', 11));
    return (0);
}
*/
