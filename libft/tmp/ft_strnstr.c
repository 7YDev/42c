/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouanan <ybouanan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:38:51 by ybouanan          #+#    #+#             */
/*   Updated: 2024/10/23 12:07:20 by ybouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_match(const char *big, const char *little,
		size_t *x, size_t index)
{
	size_t	indexe;
	size_t	tmp;

	indexe = 0;
	if (big[index] == little[indexe])
	{
		tmp = index;
		while (big[index] == little[indexe] && little[indexe]
			&& big[index] && *x)
		{
			index++;
			indexe++;
			(*x)--;
		}
		if (little[indexe] == '\0')
			return (tmp);
	}
	return (-1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index;
	size_t	x;
	int		match;

	if (*little == '\0')
		return ((char *)big);
	index = 0;
	x = len;
	while (big[index] && x)
	{
		match = check_match(big, little, &x, index);
		if (match != -1)
			return ((char *)(big + match));
		index++;
		x--;
	}
	return (NULL);
}
