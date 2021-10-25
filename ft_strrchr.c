/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:24:32 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/25 11:19:38 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (s[y] != '\0')
		y++;
	i = y;
	if (c == '\0')
		return ((char *)s + i);
	while (!(i < 0))
	{
		if (s[i] == (const char) c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
