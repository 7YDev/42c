/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouanan <ybouanan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:51:43 by ybouanan          #+#    #+#             */
/*   Updated: 2024/10/23 11:32:57 by ybouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	f;

	f = -1;
	i = 0;
	while (s[i])
	{
		if ((int)s[i] == c)
			f = i;
		i++;
	}
	if (f != -1)
		return ((char *)(s + f));
	return (NULL);
}
