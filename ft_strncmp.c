/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <sech-cha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:43:15 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/19 15:43:17 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strncmp("hello", "hello", 5));
	printf("%d\n", ft_strncmp("hello", "help", 4));
	printf("%d\n", ft_strncmp("abc", "abd", 3));
	printf("%d\n", ft_strncmp("abc", "xyz", 0));
	return (0);
}
*/
