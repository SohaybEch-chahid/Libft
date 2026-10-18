/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <YOUR_1337_EMAIL>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:22:08 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/17 18:19:17 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new) {
  if (!new)
    return ;
  new -> next = *lst;
  *lst = new;
}
/*
#include <stdio.h>
int main(void)
{
  t_list *head;
  t_list *node;
  int i = 2;
  int j = 3;

  head = ft_lstnew(&i);
  node = ft_lstnew(&j);
  ft_lstadd_front(&head, node);
  printf ("%d    %d", *(int *)head->content, *(int *)head->next->content);
  return 0;
}
*/
