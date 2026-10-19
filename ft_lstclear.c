/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <sech-cha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:08:12 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/19 15:08:14 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	if (!*lst)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}

/*
void	ft_delnode(void *content)
{
	free(content);
}
*/

/*
#include <stdio.h>

int	main(void)
{
	t_list	*head;
  t_list *new_node;
	int		*x;
  int *y;
  int *z;

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
  new_node = ft_lstnew(y);
  ft_lstadd_front (&head, new_node);
  new_node = ft_lstnew(z);
  ft_lstadd_front (&head, new_node);
  printf ("%d->", *(int *)head->content);
  printf ("%d->", *(int *)head->next->content);
  printf ("%d->", *(int *)head->next->next->content);
  printf ("NULL\n");
	ft_lstclear(&head, ft_delnode);
  if (head == NULL)
	printf ("list cleared !\n");
  else
	printf ("list not cleared yet\n");
	return (0);
}
*/
