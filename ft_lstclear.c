/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <YOUR_1337_EMAIL>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:13:42 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/18 15:55:17 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	ft_delnode(void *content)
{
	free(content);
}
*/

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
