/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <YOUR_1337_EMAIL>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 23:29:28 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/17 23:45:01 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
  if (!lst)
    return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>
int main(void)
{
  t_list *head;
  t_list *new_node;
  t_list	*last;
  int x = 3;
  int y = 2;
  int z = 1;

  head = ft_lstnew(&x);
  new_node = ft_lstnew(&y);
  ft_lstadd_front (&head, new_node);
  new_node = ft_lstnew(&z);
  ft_lstadd_front (&head, new_node);
  printf ("%d->", *(int *)head->content);
  printf ("%d->", *(int *)head->next->content);
  printf ("%d->", *(int *)head->next->next->content);
  printf ("NULL\n");

  last = ft_lstlast(head);
  printf("%d\n", *(int *)last->content);
  printf ("NULL\n");
  return EXIT_SUCCESS;
}
*/
