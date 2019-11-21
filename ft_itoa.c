/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 13:36:19 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/21 15:50:34 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(int n)
{
	size_t	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char		*ft_fillnum(int n, char *num, size_t size)
{
	size_t i;
	size_t negative;

	i = 1;
	negative = 0;
	if (n < 0)
	{
		num[0] = '-';
		n = -n;
		negative = 1;
	}
	num[size - i] = '\0';
	i++;
	while (i <= size && n != 0)
	{
		num[size - i] = ((n % 10) + '0');
		n = n / 10;
		i++;
	}
	return (num);
}

char			*ft_itoa(int n)
{
	char	*number;
	size_t	size;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 2147483647)
		return (ft_strdup("2147483647"));
	if (n == 0)
		return (ft_strdup("0"));
	size = ft_size(n) + 1;
	number = (char *)malloc(size * sizeof(char));
	if (!number)
		return (0);
	number = ft_fillnum(n, number, size);
	return (number);
}
