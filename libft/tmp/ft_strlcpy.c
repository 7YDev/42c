/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouanan <ybouanan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:03:31 by ybouanan          #+#    #+#             */
/*   Updated: 2024/10/23 11:31:15 by ybouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	lnt;
	size_t	lntc;

	lntc = 0;
	lnt = ft_strlen(src);
	if (dst == NULL || src == NULL)
		return (lnt);
	if (size > 0)
	{
		while (size - 1 > lntc && src[lntc])
		{
			*dst++ = *src++;
			lntc++;
		}
		*dst = '\0';
	}
	return (lnt);
}
