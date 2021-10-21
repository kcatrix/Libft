/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:47:55 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/21 13:04:54 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t d)
{
	size_t	i;
	size_t	lensrc;
	size_t		lendst;
	size_t	lendst2;

	i = 0;
	lensrc = 0;
	lendst = 0;
	while (src[lensrc] != '\0')
		lensrc++;
	while (dst[lendst] != '\0')
		lendst++;
	lendst2 = lendst;
	while (lendst2 != '\0' && i < d)
	{
		dst[lendst2] = src[lendst2];
		i++;
		lendst2++;
	}
	
	if (lensrc == d)
		lensrc -= 1;
	dst[lendst2] = '\0';
	return(lensrc + d);
	
}

int main()
{
	char	tabdest[] = "jesuislachainedesti";
	char	tabsrc[] = "jesuislachainesrc";
	printf(" original = %zu\n", strlcat(tabdest, tabsrc, 20));
	printf(" CPY = %zu\n", ft_strlcat(tabdest, tabsrc, 20));
}