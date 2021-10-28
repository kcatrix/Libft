/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:22:18 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/28 13:53:32 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1_bis;
	unsigned char	*s2_bis;

	if (n == 0)
		return (0);
	s1_bis = (unsigned char *) s1;
	s2_bis = (unsigned char *) s2;
	while (*s1_bis && *s2_bis && *s1_bis == *s2_bis && n > 1)
	{
		s1_bis++;
		s2_bis++;
		n--;
	}
	return (*s1_bis - *s2_bis);
}
