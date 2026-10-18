/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <YOUR_1337_EMAIL>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:51:34 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/18 16:44:39 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	ft_addone(void *content)
{
	int	*x;

	x = (int *)content;
	(*x)++;
}
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (!lst || !f)
		return ;
	current = lst;
	while (current)
	{
		f(current->content);
		current = current->next;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*node;
	int		x;
	int		y;
	int		z;

	x = 3;
	y = 2;
	z = 1;
	head = ft_lstnew(&x);
	node = ft_lstnew(&y);
	ft_lstadd_front(&head, node);
	node = ft_lstnew(&z);
	ft_lstadd_front(&head, node);
	printf("%d->", *(int *)head->content);
	printf("%d->", *(int *)head->next->content);
	printf("%d->", *(int *)head->next->next->content);
	printf("NULL\n");
	ft_lstiter(head, ft_addone);
	printf("%d->", *(int *)head->content);
	printf("%d->", *(int *)head->next->content);
	printf("%d->", *(int *)head->next->next->content);
	printf("NULL\n");
	return (0);
}
*/
