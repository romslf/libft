/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstclear_bonus.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rolaforg <rolaforg@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/31 18:28:12 by rolaforg     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/01 14:04:41 by rolaforg    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*nxt;

	tmp = *lst;
	nxt = NULL;
	while (tmp)
	{
		nxt = tmp->next;
		(*del)(tmp->content);
		free(tmp);
		tmp = nxt;
	}
	*lst = NULL;
}
