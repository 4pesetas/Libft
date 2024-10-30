/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:19:28 by iumorave          #+#    #+#             */
/*   Updated: 2024/10/28 20:00:33 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
	{
		last = last->next;
	}
	last->next = new;
}
/*int main()
{
	t_list *head = NULL;

	t_list *first = ft_lstnew("first_node");
	ft_lstadd_back(&head, first);

	t_list *second = ft_lstnew("second_node");
	ft_lstadd_back(&head, second);

	while (head)
	{
		printf("%s\n", (char *)(head->content));
		head = head->next;
	}
	free(first);
	free(second);
	return 0;
}*/