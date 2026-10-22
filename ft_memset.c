/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ael-biya <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/14 13:23:01 by ael-biya         #+#    #+#              */
/*   Updated: 2026/10/20 18:02:22 by ael-biya        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *) b;
	c = (unsigned char) c;
	i = 0;
	while (i < len)
		p[i++] = c;
	return (b);
}

int	main(void)
{
	char	str[] = "hello";

	printf("%s\n", (char *) ft_memset(str, 'x', 7));
}
