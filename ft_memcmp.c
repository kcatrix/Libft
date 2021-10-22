/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:09:22 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/22 12:58:35 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t 	i;
	char	*str;
	char	*str2;

	str = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while(str[i] && str2[i] && str[i] == str2[i] && i < n)
	{
		i++;
	}
	return (str - str2);
}
