/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <YOUR_1337_EMAIL>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:51:34 by sech-cha          #+#    #+#             */
/*   Updated: 2026/10/18 16:20:07 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *)) {
  t t_list *current;

  if (!lst || !f)
    return ;
  current = lst;
  while (current) {
    f(current->content);
    current = current -> next;
  }
}

int main(void)
{

  return EXIT_SUCCESS;
}
