/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:03:54 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/28 14:32:55 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*srci;
	char	*dsti;

	if (!dst && !src)
		return (NULL);
	srci = (char *)src;
	dsti = (char *)dst;
	i = 0;
	if (dst > src)
	{
		while (len-- > 0)
			dsti[len] = srci[len];
	}
	else
	{
		while (i++ < len)
			dsti[i - 1] = srci[i - 1];
	}
	return (dst);
}
