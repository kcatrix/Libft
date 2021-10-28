/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:48:21 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/28 14:53:34 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	while (s[i])
		i++;
	if (len <= i)
		str = malloc(sizeof(*s) * (len + 1));
	else
		str = malloc(sizeof(*s) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j++] = s[i];
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
