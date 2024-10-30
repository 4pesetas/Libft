/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:37:44 by iumorave          #+#    #+#             */
/*   Updated: 2024/10/29 17:40:06 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *d))
{
	t_list	*temp;

	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
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

void    increment_content(void *content)
{
    if(content)
	{
		*(int *)content += 1;
	}
}

int main(void)
{
    t_list  *lst = NULL;
    int     *num;

    num = (int *)malloc(sizeof(int));
    *num = 1;
    lst = ft_lstnew(num);

    num = (int *)malloc(sizeof(int));
    *num = 5;
    ft_lstadd_back(&lst, ft_lstnew(num));

    num = (int *)malloc(sizeof(int));
    *num = 12;
    ft_lstadd_back(&lst, ft_lstnew(num));

    printf("Initial list:\n");
    print_list(lst);

    ft_lstiter(lst, increment_content);

    printf("\nUpdated list:\n");
    print_list(lst);

	ft_lstclear(&lst, free);

    return (0);
}*/
