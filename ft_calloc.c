/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:58:19 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/29 17:33:06 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(size * count);
	if (!str)
		return (NULL);
	while (i < (size * count))
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
