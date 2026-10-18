/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <YOUR_1337_EMAIL>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 00:59:54 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/18 01:43:48 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	ft_delnode(void *content)
{
	free(content);
}
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
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
