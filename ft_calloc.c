/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 05:00:23 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/03 20:55:47 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*mem;
	size_t			i;

	mem = (unsigned char *)malloc(size * count);
	i = 0;
	if (mem == 0)
		return (0);
	while (i < count)
	{
		*mem = '\0';
		mem++;
		i++;
	}
	return ((void *)mem);
}
