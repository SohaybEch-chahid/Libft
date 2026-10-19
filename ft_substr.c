/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <sech-cha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:47:53 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/19 15:48:09 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	s_len;
	size_t	target_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	target_len = s_len - start;
	if (target_len > len)
		target_len = len;
	res = malloc(target_len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < target_len)
	{
		res[i] = s[i + start];
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*res;

	res = ft_substr("Hello World", 6, 10);
	printf("Result: %s\n", res);
	free(res);
	return (0);
}
*/
