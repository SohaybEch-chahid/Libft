/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:43:19 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/13 14:43:20 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c) {
  int i;

  i = 0;
  while (s[i]) {
    if (s[i] == (char )c)
      return ((char *)(s + i));
    i++;
  }
  if (s[i] == (char )c)
    return ((char *)(s + i));

  return (NULL);
}

/*
#include <stdio.h>
int main(void)
{
    char str[] = "Hello World";

    printf("%s\n", ft_strchr(str, 'W'));
    printf("%s\n", ft_strchr(str, 'l'));
    printf("%s\n", ft_strchr(str, 'z'));
    return (0);
}
*/
