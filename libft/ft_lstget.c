/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdouniol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 13:24:53 by jdouniol          #+#    #+#             */
/*   Updated: 2018/01/08 17:41:31 by jdouniol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstget(t_list *lst, int n)
{
	while (--n >= 0)
	{
		if (lst == NULL)
			return (NULL);
		lst = lst->next;
	}
	return (lst);
}
