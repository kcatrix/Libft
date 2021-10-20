/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:03:54 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/20 13:29:20 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char	*srci;
	unsigned char	*dsti; 

	srci = (unsigned char *)src;
	dsti = (unsigned char *)dst;

	i = 0;
	while (srci[i] != '\0' && i < len)
	{
		dsti[i] = srci[i];
		i++;
	}
	while (dsti[i] != '\0')
	{
		i++;
	}
	
	dsti[i] = '\0';
	return (dst);
}
int main()
{
    char	tabdes[50] = "jesuisladest";
	char	tabdes2[50] = "jesuisladest";
    char    tab[] = "nonrien";
	printf("%s\n", memmove(tabdes, tab, 5));
	printf("%s\n", ft_memmove(tabdes2, tab, 5));
}