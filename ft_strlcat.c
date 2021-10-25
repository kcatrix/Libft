/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:47:55 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/25 14:30:04 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t d)
{
	size_t	i;
	size_t	lensrc;
	size_t	lendst;
	size_t	lendst2;

	i = 0;
	lensrc = 0;
	lendst = 0;
	while (src[lensrc] != '\0')
		lensrc++;
	while (dst[lendst] != '\0')
		lendst++;
	lendst2 = lendst;
	if (d <= lendst)
		return(lensrc + d);
	while (src[i] != '\0' && lendst2 < (d - 1))
	{
		dst[lendst2] = src[i];
		i++;
		lendst2++;
	}
	dst[lendst2] = '\0';
	return (lensrc + lendst);
}
	
