/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isspecial.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/21 18:27:03 by nhariman      #+#    #+#                 */
/*   Updated: 2020/12/21 18:31:40 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_isspecial(int c)
{
	if ((c > 31 && c < 48) || (c > 57 && c < 65) ||
	(c > 90 && c < 97) || (c > 122 && c < 127))
		return (1);
	else
		return (0);
}
