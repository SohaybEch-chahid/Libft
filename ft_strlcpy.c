/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:39:58 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/14 13:29:27 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
/*
#include <stdio.h>

int	main(void) {
  char dst[5];
  const char src[] = "BpsY";
  size_t res = ft_strlcpy(dst, src, 3);
  printf("Destination: %s\n", dst);
  printf ("%zu\n", res);
  return (0);
}
*/
