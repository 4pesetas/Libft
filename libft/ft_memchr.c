/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:43:12 by iumorave          #+#    #+#             */
/*   Updated: 2024/10/29 18:45:31 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	temp;
	unsigned char	*str;

	temp = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == temp)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*int main()
{
	char str[] = "abcbfby";
	int c = 'b';
	void *result = ft_memchr(str, c, 3);
	printf("%s\n", result);

	void *result2 = memchr(str, c, 3);
	printf("%s\n", result2);
	return 0;
}*/
