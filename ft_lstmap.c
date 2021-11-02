/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:48:49 by kcatrix           #+#    #+#             */
/*   Updated: 2021/11/02 17:59:52 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*lst2;
	
	lst2 = malloc(sizeof(t_list));
	if (lst == NULL || (*f) == NULL)
	{
		del(lst2);
		free(lst2);
		return (lst);
	}
	while (lst)
	{
		lst2 = (*f)(lst->content);
		lst = lst->next;
	}
	return (lst2);
}