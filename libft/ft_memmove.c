/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouanan <ybouanan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:00:55 by ybouanan          #+#    #+#             */
/*   Updated: 2024/10/23 11:28:59 by ybouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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