/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:26:05 by iumorave          #+#    #+#             */
/*   Updated: 2024/10/29 18:46:26 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*result;
	int		i;

	i = 0;
	if (!str)
		return (NULL);
	result = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
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
