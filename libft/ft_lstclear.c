/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:54:44 by iumorave          #+#    #+#             */
/*   Updated: 2024/10/28 21:23:59 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
/*void    print_list(t_list *lst)
{
    while (lst)
    {
        printf("%d -> ", *((int *)lst->content));
        lst = lst->next;
    }
    printf("NULL\n");
}

void    del(void *content)
{
    free(content);
}

int main(void)
{
    t_list  *lst = NULL;
    int     *num;

    // Create first node
    num = (int *)malloc(sizeof(int));
    *num = 42;
    lst = ft_lstnew(num);

    num = (int *)malloc(sizeof(int));
    *num = 24;
    ft_lstadd_back(&lst, ft_lstnew(num));

    num = (int *)malloc(sizeof(int));
    *num = 12;
    ft_lstadd_back(&lst, ft_lstnew(num));

    printf("Initial list:\n");
    print_list(lst);

    ft_lstclear(&lst, del);

    if (lst == NULL)
        printf("List is cleared (NULL)\n");
    else
        printf("Error: List is not NULL!\n");

    return (0);
}*/