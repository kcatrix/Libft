/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:48:49 by kcatrix           #+#    #+#             */
/*   Updated: 2021/11/02 17:25:59 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*lst2;
	(void)del;
	
	lst2 = malloc(sizeof(t_list));
	if (!lst)
	{
		free(lst2);
		return (NULL);
	}
	while (lst)
	{
		lst2 = (*f)(lst->content);
		lst = lst->next;
	}
	return (lst2);
}