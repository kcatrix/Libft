/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:56:21 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/26 11:09:16 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	while (str[i] != '\0' && find[y] != '\0' && i < len)
	{
		if (str[i] == find[y])
			y++;	
		else
			y = 0;
		i++;
	}
	if (find[y] == '\0')
		return((char *)(find + i - y));
	return (NULL);
}

