/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:17:15 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/27 15:04:06 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	ft_whitespace(char const *s)
{
	int i;

	i = 0;
	while(!(((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z')
		|| (s[i] >= 'A' && s[i] <= 'Z'))))
		i++;
	if (s[i] = '\0')
		return (NULL);
	return (s);
}

int	ft_get_nb_strs(char const *s, char delimiters)
{
	unsigned int	i;
	unsigned int	nb_strs;

	if (!s[0])
		return (0);
	i = 0;
	nb_strs = 0;
	while (s[i] && ft_strchr(delimiters, s[i]))
		i++;
	while (s[i])
	{
		if (ft_strchr(delimiters, s[i]))
		{
			nb_strs++;
			while (s[i] && ft_strchr(delimiters, s[i]))
				i++;
			continue ;
		}
		i++;
	}
	if (!ft_strchr(delimiters, s[i - 1]))
		nb_strs++;
	return (nb_strs);
}

*/char	**ft_split(char const *s, char c)
{
	int i;
	
	i = 0;
/*
	ft_whitespace(s);
	lenchr = ft_get_nb_strs(s, c);

}
int main()
{
	char	tab[] = "jelsuislachailne";
	char	tab2[] = 'l';
	ft_split(tab, tab2);
}