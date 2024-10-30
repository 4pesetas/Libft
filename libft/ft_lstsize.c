/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:29:39 by iumorave          #+#    #+#             */
/*   Updated: 2024/10/28 20:01:49 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*int main()
{
	t_list *head = NULL;
	head = ft_lstnew("first");
	
	t_list *second = ft_lstnew("Second");
	head->next = second;

	t_list *third = ft_lstnew("Third");
	second->next = third;

	third->next = NULL;

	int size = ft_lstsize(head);
	printf("%d\n", size);
	free (head);
	return 0;
}*/