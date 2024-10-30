/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:21:38 by iumorave          #+#    #+#             */
/*   Updated: 2024/10/29 18:46:53 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	int				len;
	unsigned int	i;

	len = ft_strlen(s);
	i = 0;
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	new[len] = '\0';
	while (s[i])
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	return (new);
}

/*char f(unsigned int i, char c)
{
	return c - 32;
}
int main()
{
	char s[] = "abcdef";

	char *new = ft_strmapi(s, f);
	printf("%s\n", new);
	free (new);
	return 0;
}*/