/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <sech-cha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:19:20 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/19 15:21:14 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i = 0;
	while (i < n && ptr1[i] == ptr2[i])
		i++;
	if (i == n)
		return (0);
	return (ptr1[i] - ptr2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "Hello";
	char	s2[] = "Hello";
	char	s3[] = "Hellp";

	printf("%d\n", ft_memcmp(s1, s2, 5));
	printf("%d\n", ft_memcmp(s1, s3, 5));
	printf("%d\n", ft_memcmp(s1, s3, 4));
	return (0);
}
*/
