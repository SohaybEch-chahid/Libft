/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <sech-cha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:07:26 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/19 15:07:28 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int	main(void)
{
  t_list *head;
  t_list *node;
	int	i;
	int	j;

  i = 2;
  j = 3;
  head = ft_lstnew(&i);
  node = ft_lstnew(&j);
  ft_lstadd_front(&head, node);
  printf ("%d    %d", *(int *)head->content, *(int *)head->next->content);
  return (0);
}
*/
