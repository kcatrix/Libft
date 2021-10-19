/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:24:32 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/19 15:54:40 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (s[y] != '\0')
		y++;
	i = y;
	while(!(i < 0))
	{
		if (s[i] == c)
			return((char*)s + i);
		i--;
	}
	return(NULL);
}