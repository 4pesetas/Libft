/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:58:04 by iumorave          #+#    #+#             */
/*   Updated: 2024/10/28 20:01:09 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*int main()
{
	t_list *head = ft_lstnew("first");
	head->next = ft_lstnew("second");
	head->next->next = ft_lstnew("third");
	t_list *last = ft_lstlast(head);
	printf("%s\n", (char *)last->content);
	free (head);
	return 0;
}*/