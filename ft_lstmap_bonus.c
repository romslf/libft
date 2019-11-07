/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap_bonus.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rolaforg <rolaforg@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/01 15:05:27 by rolaforg     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/07 15:01:27 by rolaforg    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*liste;

	if (lst && f)
	{
		if (!(liste = ft_lstnew((*f)(lst->content))))
			return (NULL);
		first = liste;
		lst = lst->next;
		while (lst)
		{
			if (!(liste->next = ft_lstnew((*f)(lst->content))))
			{
				ft_lstclear(&first, del);
				return (NULL);
			}
			liste = liste->next;
			lst = lst->next;
		}
		return (first);
	}
	return (NULL);
}
