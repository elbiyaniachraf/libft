/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isprint.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ael-biya <marvin@42.fr0>                  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/14 10:43:10 by ael-biya         #+#    #+#              */
/*   Updated: 2026/10/19 12:38:03 by ael-biya        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
int	main(void)
{
printf("%d\n", ft_isprint('h'));
printf("%d\n", ft_isprint('5'));
printf("%d\n", ft_isprint('\n'));
}
*/
