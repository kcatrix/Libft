/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:30:54 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/26 16:04:16 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	int		size;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1)) // Parcours de chaine
		s1++;
	size = ft_strlen(s1);
	while (size && ft_strchr(set, s1[size])) // R Parcours de chaine 
		size--;
	return (ft_substr(s1, 0, size + 1)); // Permet de malloc 
}
