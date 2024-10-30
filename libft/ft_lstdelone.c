/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:50:42 by iumorave          #+#    #+#             */
/*   Updated: 2024/10/28 20:46:20 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del (lst->content);
	free (lst);
}
/*int main()
{
	void *del;
	t_list *head = NULL;

	t_list *first = ft_lstnew("first_node");
	t_list *middle = ft_lstnew("middle_node");
	t_list *last = ft_lstnew("last_node");

	head = first;
	ft_lstadd_back(&head, middle);
	ft_lstadd_back(&head, last);

	
	t_list *temp = head;
	while(temp)
	{
		printf("%s\n", (char *)(temp->content));
		temp = temp->next;
	}
	
	ft_lstdelone(middle, del);
	first->next = last;

	temp = head;
	while(temp)
	{
		printf("%s\n", (char *)(temp->content));
		temp = temp->next;
	}
	return 0;
}*/
