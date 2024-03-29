/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 09:48:44 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/28 13:29:19 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*srci;
	unsigned char	*dsti;

	if (!dst && !src)
		return (NULL);
	i = 0;
	srci = (unsigned char *)src;
	dsti = (unsigned char *)dst;
	while (i < n)
	{
		dsti[i] = srci[i];
		i++;
	}
	return (dst);
}
