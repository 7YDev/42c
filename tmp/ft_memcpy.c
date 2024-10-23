/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouanan <ybouanan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:44:30 by ybouanan          #+#    #+#             */
/*   Updated: 2024/10/23 11:27:36 by ybouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmpd;
	unsigned char	*tmps;

	tmpd = (unsigned char *)dest;
	tmps = (unsigned char *)src;
	while (n--)
	{
		*tmpd++ = *tmps++;
	}
	return (dest);
}
