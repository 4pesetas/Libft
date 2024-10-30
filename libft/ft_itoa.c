/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:55:55 by iumorave          #+#    #+#             */
/*   Updated: 2024/10/29 18:44:57 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i = 1;
		n = -n;
	}
	if (n == 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	nb;
	int		len;

	nb = n;
	len = int_len(nb);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len--] = '\0';
	if (nb < 0)
	{
		nb = -nb;
		result[0] = '-';
	}
	else if (n == 0)
		result[0] = '0';
	while (nb != 0)
	{
		result[len] = ((nb % 10) + 48);
		nb = nb / 10;
		len--;
	}
	return (result);
}
/*#include <limits.h>
int main()
{
	int n = INT_MIN;
	char *result = ft_itoa(n);
	printf("%s\n", result);
	free (result);
	return 0;
}*/