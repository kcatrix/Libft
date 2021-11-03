/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:48:21 by kcatrix           #+#    #+#             */
/*   Updated: 2021/11/03 08:25:27 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sptr;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	if ((size_t)ft_strlen(s + start) < len)
		len = (size_t)ft_strlen(s + start);
	sptr = (char *) ft_calloc(len + 1, 1);
	if (!sptr)
		return (NULL);
	ft_strlcpy(sptr, s + start, len + 1);
	return (sptr);
}
