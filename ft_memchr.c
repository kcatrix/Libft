/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:14:20 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/21 17:09:07 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t 	i;
	int 	k;
	char	*str;

	str = (char *)s;
	i = 0;
	k = 0;
	while(str[i] != '\0' && i < n)
	{	
		if (str[i] == c)
		{
			while(str[i] != '\0')
			{
				str[k] = str[i];
				i++;
				k++;
			}			
		}
		i++;
	}str[k] = '\0';
	return (str);
}