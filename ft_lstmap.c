/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <sech-cha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:12:45 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/19 15:12:48 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*current;
	t_list	*new;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	current = lst;
	while (current)
	{
		content = f(current->content);
		new = ft_lstnew(content);
		if (!new)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new);
		current = current->next;
	}
	return (new_lst);
}

/*
void	*ft_addone(void *content)
{
	int	*new_value;

	new_value = malloc(sizeof(int));
	if (!new_value)
		return (NULL);
	*new_value = *(int *)content + 1;
	return (new_value);
}

void	ft_delnode(void *content)
{
	free(content);
}

#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*node;
	t_list	*new_lst;
	int		*x;
	int		*y;
	int		*z;

	x = malloc(sizeof(int));
	if (!x)
		return (1);
	*x = 3;
	y = malloc(sizeof(int));
	if (!y)
		return (1);
	*y = 2;
	z = malloc(sizeof(int));
	if (!z)
		return (1);
	*z = 1;
	head = ft_lstnew(x);
	node = ft_lstnew(y);
	ft_lstadd_front(&head, node);
	node = ft_lstnew(z);
	ft_lstadd_front(&head, node);
	printf("%d->", *(int *)head->content);
	printf("%d->", *(int *)head->next->content);
	printf("%d->", *(int *)head->next->next->content);
	printf("NULL\n");
	new_lst = ft_lstmap(head, ft_addone, ft_delnode);
	printf("%d->", *(int *)head->content);
	printf("%d->", *(int *)head->next->content);
	printf("%d->", *(int *)head->next->next->content);
	printf("NULL\n");
	return (0);
}
*/
