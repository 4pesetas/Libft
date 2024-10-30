/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:50:00 by iumorave          #+#    #+#             */
/*   Updated: 2024/10/29 18:47:10 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*find == '\0')
		return ((char *)src);
	while (src[i] && i < len)
	{
		j = 0;
		while (src[i + j] && find[j] && (i + j) < len && src[i + j] == find[j])
			j++;
		if (find[j] == '\0')
			return ((char *)&src[i]);
		i++;
	}
	return (NULL);
}

/*int main()
{
	char src[] = "abcde";
	char find[] = "de";
	char *result = ft_strnstr(src, find, 5);
	printf("%s\n", result);

	char *result2 = strnstr(src, find, 5);
	printf("%s\n", result2);
	return 0;
}*/