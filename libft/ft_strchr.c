/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:18:55 by iumorave          #+#    #+#             */
/*   Updated: 2024/10/16 20:29:14 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	temp;

	i = 0;
	temp = (char) c;
	while (s[i])
	{
		if (s[i] == temp)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == temp)
		return ((char *) &s[i]);
	return (NULL);
}
