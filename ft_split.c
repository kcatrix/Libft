/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:24:50 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/29 11:42:45 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cmp_nb_word(const char *s, char c)
{
	int	i;
	int	word;
	
	if (!s)
		return (0);
	word = 0;
	i = 0;
	while (s[i] == c && s[i] != '\0')
	{
		i++;
	}
	while (s[i])
	{
		while (s[i] && (s[i] != c))
			i++;
		word++;
		while (s[i] == c && s[i] != '\0')
			i++;
	}	
	return (word);
}

void	cmp_nb_caract(const char *s, char c, char **str)
{
	int		n;
	int		i;
	int		m;

	n = 0;
	i = 0;
	m = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i])
	{
		while (s[i] && (s[i] != c))
		{
			i++;
			n++;
		}
		str[m] = malloc(sizeof(char) * (n + 1));
		m++;
		n = 0;
		while (s[i] == c && s[i] != '\0')
			i++;
	}
}
char	**ft_split(char const *s, char c)
{
	char	**str;
	int 	i;
	int 	m;
	int 	mm;

	i = 0;
	m = 0;
	mm = 0;
	if (!s)
	{
		return (NULL);
	}
	str = malloc((sizeof(char *) * (cmp_nb_word(s, c) + 1)));
	cmp_nb_caract(s, c, str);
	while(s[i] == c && s[i] != '\0')
		i++;
	while (s[i])
	{
		while (s[i] && (s[i] != c))
		{
			str[m][mm] = s[i];
			i++;
			mm++;
		}
		str[m][mm] = '\0';
		mm = 0;
		m++;
		while(s[i] == c && s[i] != '\0')
			i++;
	}
	str[m] = NULL;
	return (str);
}
/*int main()
{
	char	tab[] = "jesuislachaine";
	char	tab2 = 'c';
	char	**str;

	str = ft_split(tab, tab2);
	printf("%s", str[0]);
}*/