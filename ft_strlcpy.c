/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:31:00 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/20 17:04:41 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t d)
{
	size_t	i;
	int		len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	while ((src[i] != '\0') && (i < (d - 1)))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
