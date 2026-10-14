/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 13:18:58 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/13 13:19:00 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_src;

	if (!dst && size == 0)
		return (ft_strlen(src));
	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dest >= size)
		return (len_src + size);
	i = 0;
	while (src[i] && (len_dest + i) < size - 1)
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	dst[len_dest + i] = '\0';
	return (len_dest + len_src);
}
/*
#include <stdio.h>

int	main(void)
{
  return (0);
}
*/
