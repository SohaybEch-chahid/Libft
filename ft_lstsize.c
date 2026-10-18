/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <YOUR_1337_EMAIL>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:19:54 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/17 23:28:27 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_lstsize(t_list *lst) {
  unsigned int len;
  t_list *current;

  len = 0;
  if (!lst)
    return (len);
  current = lst;
  while (current) {
    len++;
    current = current -> next;
  }
  return (len);
}
/*
#include <stdio.h>
int main(void)
{
  t_list *head;
  t_list *node;
  int x = 3;
  int y = 2;
  int z = 1;

  head = ft_lstnew(&x);
  node = ft_lstnew(&y);
  ft_lstadd_front(&head, node);
  node = ft_lstnew(&z);
  ft_lstadd_front(&head, node);
  printf ("%d->", *(int *)head->content);
  printf ("%d->", *(int *)head->next->content);
  printf ("%d->", *(int *)head->next->next->content);
  printf ("NULL\n");
  unsigned int len = ft_lstsize(head);
  printf ("size = %u\n" , len);
  return (0);
}
*/
