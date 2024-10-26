/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouanan <ybouanan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:00:37 by ybouanan          #+#    #+#             */
/*   Updated: 2024/10/24 14:37:18 by ybouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	c;
	size_t	lent;
	char	*tmp;

	lent = ft_strlen(s);
	c = 0;
	if (lent == 0)
		return (NULL);
	tmp = (char *)malloc(lent + 1);
	if (tmp == NULL)
		return (NULL);
	while (c < lent)
	{
		tmp[c] = s[c];
		c++;
	}
	tmp[lent] = '\0';
	return (tmp);
}
