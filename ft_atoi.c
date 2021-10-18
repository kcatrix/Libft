/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:24:06 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/18 15:18:10 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int num;
	int cmp;

	neg = 1;
	num = 0;
	i = 0;
	cmp = 0;

	while((str[i] >= 9 && str[i] <= 13 ) || (str[i] == 32))
	{
		i++;
	}
	while((str[i] == '-') || (str[i] == '+'))
	{
		if (cmp > 1)
			return (0);
		if (str[i] == '-')
		{
			neg *= -1;
			cmp++;
		}
		if (str[i] == '+')
			if (cmp > 1)
				return (0);
			cmp++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * neg);
}
