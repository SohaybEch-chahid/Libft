/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <sech-cha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:09:51 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/19 15:10:27 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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
	int		*x;

  x = malloc (sizeof(int));
  if (!x)
	return (1);
	*x = 3;
	head = ft_lstnew(x);
	printf("%d->", *(int *)head->content);
	printf("NULL\n");
  ft_lstdelone(head, ft_delnode);
	printf("%d->", *(int *)head->content);
	return (0);
}
*/
