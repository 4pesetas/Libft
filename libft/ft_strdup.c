/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:26:05 by iumorave          #+#    #+#             */
/*   Updated: 2024/10/21 19:39:05 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *str)
{
	char	*result;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (str[i])
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*int main()
{
	char str[] = "test";

	char *result = ft_strdup(str);
	printf("%s\n", result);
	free (result);

	char *result2 = ft_strdup(str);
	printf("%s\n", result2);
	free (result2);
	return 0;
}*/