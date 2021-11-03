/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:01:59 by kcatrix           #+#    #+#             */
/*   Updated: 2021/11/03 08:32:53 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*toto;

	toto = malloc(sizeof(t_list));
	if (!toto)
		return (NULL);
	toto->content = content;
	toto->next = NULL;
	return (toto);
}
