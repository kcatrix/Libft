/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:56:21 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/25 17:00:15 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <xlocale.h>

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	int		y;
	char	*stri;
	char	*findi;

	i = 0;
	y = 0;
	
	stri = (char *)str;
	findi = (char *)find;
	if (findi[y] == '\0')
		return (stri);
	while ((stri[i] != '\0') && (findi[y] != '\0') && (i < len))
	{
		if (!(findi[y] == stri[i]))
			y = 0;
		if(find[y] == stri[i])
		{
			y++;
			if (findi[y] == '\0')
				return (& stri[i - y + 1]);
		}
		i++;
	}
	return (NULL);
}
