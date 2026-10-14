/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 18:06:54 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/13 18:06:56 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n) {
  size_t i;
  const unsigned char *S1;
  const unsigned char *S2;

  S1 = (const unsigned char *)s1;
  S2 = (const unsigned char *)s2;
  i = 0; 
  while (i < n && S1[i] == S2[i])
    i++;
  if (i == n)
    return 0;
  return (S1[i] - S2[i]);
}

/*
#include <stdio.h>
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "Hello";
    char s3[] = "Hellp";

    printf("%d\n", ft_memcmp(s1, s2, 5));
    printf("%d\n", ft_memcmp(s1, s3, 5));
    printf("%d\n", ft_memcmp(s1, s3, 4));

    return (0);
}
*/
