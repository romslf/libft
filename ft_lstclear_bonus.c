/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstclear.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rolaforg <rolaforg@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/31 18:28:12 by rolaforg     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/31 18:51:04 by rolaforg    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	size_t	i;

	i = 0;
	if (!(lst) || !(lst[0]))
		return;
	while (lst[i])
	{
		(*del)(lst[i]);
		free(lst[i]);
		i++;
	}
	lst = NULL;
}
