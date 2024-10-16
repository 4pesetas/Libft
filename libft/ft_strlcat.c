/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:06:08 by iumorave          #+#    #+#             */
/*   Updated: 2024/10/16 18:44:31 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lens;
	size_t	lend;
	size_t	i;

	lens = 0;
	lend = 0;
	i = 0;
	while (src[lens])
		lens++;
	while (dst[lend])
		lend++;
	if (size <= lend)
		lens += size;
	else
		lens += lend;
	while (src[i] && size > (lend + 1))
	{
		dst[lend] = src[i];
		lend++;
		i++;
	}
	dst[lend] = '\0';
	return (lens);
}
