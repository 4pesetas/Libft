/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:55:35 by iumorave          #+#    #+#             */
/*   Updated: 2024/10/28 20:02:08 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*int main()
{
	t_list *head = NULL;

	t_list *first = ft_lstnew("1st node");
	ft_lstadd_front(&head, first);

	t_list *second = ft_lstnew("2nd node");
	ft_lstadd_front(&head, second);

	while (head)
	{
		printf("%s\n", (char *)head->content);
		head = head->next;
	}
	free(first);
	free(second);
	return 0;
}*/