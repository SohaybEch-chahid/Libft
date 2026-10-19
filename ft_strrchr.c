/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <sech-cha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:45:26 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/19 15:45:27 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	len;

	len = ft_strlen(s);
	i = len;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "hello";

	printf("%s\n", ft_strrchr(str, 'l'));
	printf("%s\n", ft_strrchr(str, 'o'));
	printf("%s\n", ft_strrchr(str, 'z'));
	printf("%s\n", ft_strrchr(str, 'h'));
	return (0);
}
*/
