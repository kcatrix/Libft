/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:09:22 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/26 08:42:07 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str;
	unsigned char	*str2;

	if (n == 0)
		return (0);
	str = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (*str == *str2 && n > 1)
	{
		str++;
		str2++;
		n--;
	}
	return (*str - *str2);
}
