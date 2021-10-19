/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:47:55 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/19 13:39:10 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t d)
{
	int	i;
	int	len;
	int	len2;
	int	len3;

	i = 0;
	len = 0;
	len2 = 0;
	while (src[len] != '\0')
		len++;
	while (dst[len2] != '\0')
		len2++;
	len3 = len2;
	while ((src[i] != '\0') && ((i + len + 1) < d))
	{
		dst[len3] = src[i];
		i++;
		len3++;
	}
	dst[len3] = '\0';
	if (d > len)
		return (len + len2);
	return (len + d);
}
