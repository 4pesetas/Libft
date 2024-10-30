/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:09:16 by iumorave          #+#    #+#             */
/*   Updated: 2024/10/29 18:47:00 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (src[i] || dst[i]))
	{
		if (dst[i] != src[i])
			return ((unsigned char)dst[i] - (unsigned char)src[i]);
		i++;
	}
	return (0);
}

/*int main()
{
    char s1[] = "abcd";
    char s2[] = "abaa";
    int result = ft_strncmp(s2, s1, 3);
    printf("%d\n", result);

    int result2 = strncmp(s2, s1, 3);
    printf("%d\n", result2);

    return 0;
}*/