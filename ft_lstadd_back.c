/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <sech-cha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:06:55 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/19 15:06:57 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current->next)
		current = current->next;
	current->next = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*new_node;
	int		x;
	int		y;
	int		z;
	int		l;

	x = 3;
	y = 2;
	z = 1;
	head = ft_lstnew(&x);
	new_node = ft_lstnew(&y);
	ft_lstadd_front(&head, new_node);
	new_node = ft_lstnew(&z);
	ft_lstadd_front(&head, new_node);
	printf("%d->", *(int *)head->content);
	printf("%d->", *(int *)head->next->content);
	printf("%d->", *(int *)head->next->next->content);
	printf("NULL\n");
	l = 4;
	new_node = ft_lstnew(&l);
	ft_lstadd_back(&head, new_node);
	printf("%d->", *(int *)head->content);
	printf("%d->", *(int *)head->next->content);
	printf("%d->", *(int *)head->next->next->content);
	printf("%d->", *(int *)head->next->next->next->content);
	printf("NULL\n");
	return (0);
}
*/
