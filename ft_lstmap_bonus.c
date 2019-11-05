/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap_bonus.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rolaforg <rolaforg@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/01 15:05:27 by rolaforg     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/05 16:13:07 by rolaforg    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*liste;
	void	*new;

	new = (*f)(lst->content);
	if (!(liste = ft_lstnew(new)))
		return (NULL);
	first = liste;
	liste = liste->next;
	lst = lst->next;
	while (lst)
	{
		new = (*f)(lst->content);
		if (!(liste = ft_lstnew(new)))
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		liste = liste->next;
		lst = lst->next;
	}
	return (first);
}
