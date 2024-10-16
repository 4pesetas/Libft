/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:20:12 by iumorave          #+#    #+#             */
/*   Updated: 2024/10/16 20:42:52 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	temp;

	i = 0;
	temp = (char) c;
	while (s[i])
		i++;
	while (s[i])
	{
		if (s[i] == temp)
			return ((char *) &s[i]);
		i--;
	}
	if (s[i] == temp)
		return ((char *) &s[i]);
	return (NULL);
}
