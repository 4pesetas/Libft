/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:33:19 by iumorave          #+#    #+#             */
/*   Updated: 2024/10/26 16:39:25 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	word_counter(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		word_start;
	int		j;

	i = 0;
	j = 0;
	tab = (char **)malloc(sizeof(char *) * (word_counter(s, c) + 1));
	if (!tab || !s)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		word_start = i;
		while (s[i] != c && s[i])
			i++;
		if (i > word_start)
			tab[j++] = ft_substr(s, word_start, i - word_start);
	}
	tab[j] = NULL;
	return (tab);
}
/*int main()
{
	char	*s = "   Hello there, test!!";
	char **new = ft_split(s, ' ');
	while (*new)
		printf("%s\n", *new++);
	return 0;
}*/