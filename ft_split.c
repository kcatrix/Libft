/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:24:50 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/28 17:29:30 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	cmp_nb_word(char *s , char c)
{
	int	i;
	int	word;
	int	check;

	if ((!s) || (!c)) 
		return (0);
	if ((!c) && s[0] == '\0')
		return (0);
	word = 0;
	check = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c || s[i] == '\t' || s[i] == ' ' || s[i] == '\n')
			i++;
		while (!(s[i] == c) && s[i])
		{
			i++;
			check++;
		}
		if (check > 0)
			word++;
		check = 0;
	}	
	return (word);
}

void	*cmp_nb_caract(char *s , char c, char **str)
{
	int		n;
	int		i;
	int		m;

	n = 0;
	i = 0;
	m = 0;
	str = malloc((sizeof(char *) * (cmp_nb_word(s, c) + 1)));
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (!(s[i] == c) && s[i])
		{
			i++;
			n++;
		}
		if(s[i - 1] =! c)
		{
			str[m] = malloc(sizeof(char) * (n + 1));
			m++;
			n = 0;
		}
	}
}

int main()
{
	char	s[] = "  llljel    suislachainelll";
	char	c;
	c = 'l';
	//je
	//suis
	//achaine
	printf("%d", cmp_nb_word(s, c));
}