/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:10:33 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/19 15:33:36 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] == c)
			return((char*)&s[i]);
		i++;
	}
	return(NULL);
}