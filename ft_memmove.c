/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:50:36 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/13 11:50:38 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n) {
  size_t i;
  unsigned char *d;
  const unsigned char *s;

  if (!dest && !src)
    return (NULL);
  if (dest == src || n == 0)
    return (dest);
  d = (unsigned char *)dest;
  s = (const unsigned char *)src;
  if (d > s) {
    while (n--)
      d[n] = s[n];
  }
  else {
    i = 0;
    while (i < n) {
      d[i] = s[i];
      i++;
    }
  }

  return (dest);
}

/*
#include <stdio.h>
int main(void)
{
    char str1[] = "ABCDE";
    char str2[] = "ABCDE";

    ft_memmove(str1 + 1, str1, 4);
    // memmove(str2 + 1, str2, 4);

    printf("My function: %s\n", str1);
    printf("Original:    %s\n", str2);

    return (0);
}
*/
