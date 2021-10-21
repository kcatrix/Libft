/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:56:21 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/21 14:35:51 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	while ((stri[i] != '\0') && (findi[y] != '\0') && (i < len))
	{
		if (findi[y] == stri[i])
		{
			y++;
			if (findi[y] == '\0')
				return (& stri[i - y + 1]);
		}
		else
			y = 0;
		i++;
	}
	return (NULL);
}