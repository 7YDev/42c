/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouanan <ybouanan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:39:52 by ybouanan          #+#    #+#             */
/*   Updated: 2024/10/24 10:16:53 by ybouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start,size_t len)
{
  size_t tl = len;
  char *tmp = (char*)malloc(len + 1);
  
  if (!(tmp))
    return NULL;
  while(len--)
    *tmp++ = *(s+= (start + 1));
  *tmp = '\0';
  return ((char *)(tmp - tl));
}