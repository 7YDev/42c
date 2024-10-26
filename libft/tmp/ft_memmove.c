/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouanan <ybouanan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:00:55 by ybouanan          #+#    #+#             */
/*   Updated: 2024/10/24 14:37:04 by ybouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmpd;
	unsigned char	*tmps;

	tmpd = (unsigned char *)dest;
	tmps = (unsigned char *)src;
	if (tmps < tmpd)
	{
		tmpd += n;
		tmps += n;
		while (n--)
		{
			*--tmpd = *--tmps;
		}
	}
	else
	{
		while (n--)
		{
			*tmpd++ = *tmps++;
		}
	}
	return (dest);
}
