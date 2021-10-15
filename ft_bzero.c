/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevyn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:34:29 by kevyn             #+#    #+#             */
/*   Updated: 2021/10/15 14:26:57 by kevyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	int	i;
	char 	*str;
	str = s;

	i = 0;
	while(str[i] != n)
	{
		str[i] = '\0';
		i++;
	}
	s = str;
}

int	main()
{
	char	tab[] = "jesuislachaine";
	char	tab2[] = "jesuislachaine2";

	printf("original = %s\n", tab);
	bzero(tab, 3);
	printf("original after apply : %s\n", tab);
	printf("copy = %s", tab2);
	ft_bzero(tab2, 3);
	printf("copy after apply : %s", tab2);
}
