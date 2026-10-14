/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 18:29:47 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/13 18:29:48 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	sign;

	result = 0;
	i = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (ft_isdigit(nptr[i]))
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

/*
#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_atoi("42"));
    printf("%d\n", ft_atoi("-42"));
    printf("%d\n", ft_atoi("+123"));
    printf("%d\n", ft_atoi("   456"));
    printf("%d\n", ft_atoi("42abc"));
    printf("%d\n", ft_atoi("abc42"));
    return (0);
}
*/
