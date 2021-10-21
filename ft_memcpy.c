/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 09:48:44 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/21 17:56:07 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*srci;
	unsigned char	*dsti;

	i = 0;
	srci = (unsigned char *)src;
	dsti = (unsigned char *)dst;
	while (srci[i] != '\0' && i < n)
	{
		dsti[i] = srci[i];
		i++;
	}
	return (dst);
}
