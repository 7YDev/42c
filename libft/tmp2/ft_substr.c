/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouanan <ybouanan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:39:52 by ybouanan          #+#    #+#             */
/*   Updated: 2024/10/24 14:17:44 by ybouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	tl;
	char	*tmp;

	tl = len;
	tmp = (char *)malloc(len + 1);
	if (!tmp)		
		return (NULL);
	s += start;
	while (len--)
		*tmp++ = *(s++);
	*tmp = '\0';
	return ((char *)(tmp - tl));
}
