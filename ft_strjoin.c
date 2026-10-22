/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strjoin.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ael-biya <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 18:48:34 by ael-biya         #+#    #+#              */
/*   Updated: 2026/10/21 18:50:16 by ael-biya        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*sub;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	sub = malloc(s1_len + s2_len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		sub[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < s2_len)
	{
		sub[s1_len + i] = s2[i];
		i++;
	}
	sub[s1_len + s2_len] = '\0';
	return (sub);
}
