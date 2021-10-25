/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:31:00 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/25 13:35:42 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t d)
{
	size_t	i;
	size_t	len;
	size_t	y;

	i = 0;
	len = 0;
	y = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (d == 0)
		return(len);
	while ((src[i] != '\0') && (i < d - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
