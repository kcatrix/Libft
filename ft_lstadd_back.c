/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:39:45 by kcatrix           #+#    #+#             */
/*   Updated: 2021/11/02 15:25:02 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*toto;

	if (*alst == NULL)
		*alst = new;
	else
	{
		toto = *alst;
		while(toto->next != NULL)
			toto = toto->next;
		toto->next = new;
	}
}