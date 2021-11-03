/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:09:35 by kcatrix           #+#    #+#             */
/*   Updated: 2021/11/03 08:37:45 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*toto;
	t_list	*titi;

	toto = *lst;
	titi = *lst;
	while (toto != NULL)
	{
		titi = titi->next;
		del(toto->content);
		free(toto);
		toto = titi;
	}
	*lst = NULL;
}
