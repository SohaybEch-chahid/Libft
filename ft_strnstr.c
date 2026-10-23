/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <sech-cha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:45:07 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/23 18:25:16 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] && (i + j < len))
		{
			j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*big;

	big = "Hello World";
	printf("%s\n", ft_strnstr(big, "World", 11));
	printf("%s\n", ft_strnstr(big, "World", 5));
	printf("%s\n", ft_strnstr(big, "", 11));
	return (0);
}
*/
