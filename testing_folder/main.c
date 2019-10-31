/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 16:39:10 by nhariman       #+#    #+#                */
/*   Updated: 2019/10/30 20:47:15 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include "libft.h"

int	main(void)
{
	const char *str;
	const char *str2;
	const char *str3;
	const char *str4;
	const char *str5;
	const char *str6;

	char c;

	str = "12";
	str2 = "-12";
	str3 = "                 5948 fdfdf";
	str4 = "   12";
	str5 = "           \n  \t -12";
	str6 = " a";

	printf("atoi using: 12:\n %d", ft_atoi(str));
	printf("\natoi using:-12:\n %d", ft_atoi(str2));
	printf("\natoi using:                  5948 fdfdf:\n %d", ft_atoi(str3));
	printf("\n   12:\n %d", ft_atoi(str4));
	printf("\n           \n  \t -12:\n %d", ft_atoi(str5));
	printf("\n a:\n %d", ft_atoi(str6));
	
	c = 'c';
	printf("\ntoupper using 'c' -> %c", ft_toupper(c));
	c = 'C';
	printf("\ntolower using 'C' -> %c", ft_tolower(c));

	const char *s;
	size_t result;

	s = "Codam";
	result = 0;
	result = ft_strlen(s);
	/* test ft_strlen */
	printf("\nTesting ft_strlen, used word Codam\n %zu", result);

	assert(ft_isalpha('a') == 1);
	assert(ft_isascii('1') == 1);
	assert(ft_isdigit('5') == 1);
	assert(ft_isprint('5') == 1);
	assert(ft_isalnum('5') == 1);
	
	return (0);
}