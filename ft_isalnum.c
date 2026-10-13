/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 21:16:14 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/12 21:16:16 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#inckude <stdio.h>
#include "libft.h"

int isalnum(int c) {
  if (isdigit(c) && isdigit(c))
    return 1;
  return 0;
}

/*
int main(void) {
  int res = isalnum(33);
  printf("%d\n", res);
  return 0;
}*/
