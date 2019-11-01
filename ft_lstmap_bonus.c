/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap_bonus.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rolaforg <rolaforg@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/01 15:05:27 by rolaforg     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/01 16:47:21 by rolaforg    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**liste;

	if (!lst || !f || !del ||
		!(liste = malloc(sizeof(t_list) * ft_lstsize(lst))))
		return (NULL);
	while (lst)
	{
		ft_lstadd_back(liste, (*f)(lst));
		lst = lst->next;
	}
	return (*liste);
}
