/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:31:34 by iumorave          #+#    #+#             */
/*   Updated: 2024/10/29 18:44:36 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	temp = malloc(count * size);
	i = 0;
	if (!temp)
		return (NULL);
	while (i < count * size)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}
/*int main()
{
	size_t elem = 6;
	size_t size = sizeof(char);
	char *array = ft_calloc(elem, size);
	size_t i = 0;
	while (i < elem)
	{
		printf("%d", array[i]);
		i++;
	}
	free(array);
	printf("\n");

	char *array2 = calloc(elem, size);
	i = 0;
	while (i < elem)
	{
		printf("%d", array2[i]);
		i++;
	}
	free(array2);
	printf("\n");
	return 0;
}*/