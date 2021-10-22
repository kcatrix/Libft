/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:10:33 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/22 13:12:43 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (!(s[i] == '\0'))
	{
		if (s[i] == c)
			return ((char *) & s[i]);
		i++;
	}
	return (NULL);
}

int	main()
{
	char	tab[] = "jesuislachaine";
	int c;

	c = 'i';
	printf("%s\n", ft_strchr(tab, c));
	printf("%s\n", strchr(tab, c));
}