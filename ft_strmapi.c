/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <sech-cha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:41:52 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/23 18:16:33 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	len;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*
static char	ft_change(unsigned int i, char c)
{
	printf("index : %u    char : %c\n", i, c);
	return (c + 1);
}
int	main(void)
{
	char		*res;
	char const	s[] = "12345";

	res = ft_strmapi(s, ft_change);
	printf("%s", res);
	return (0);
}
*/
