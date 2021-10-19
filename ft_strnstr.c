/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:56:21 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/19 16:38:05 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	int	i;
	int y;

	i = 0;
	while ((str[i] != '\0') && (find[y] != '\0') && (i <= len))
	{
		if (find[y] == str[i])
		{
			y++;
			if (find[y] == '\0')
				return((char*)s

		}
		else
			y = 0;
		i++;
	}
}
int main()
{
	char	tab[] = "jesuislachaine";
	char	tab2[] = "su";
	printf(" Original = %s", strnstr(tab, tab2, 4));
	printf(" CPY = %s", ft_strnstr(tab, tab2, 4));
}
