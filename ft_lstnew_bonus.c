/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rolaforg <rolaforg@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/29 19:21:42 by rolaforg     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/29 19:43:54 by rolaforg    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct s_list *res;

	if (!(res = malloc(sizeof(struct s_list))))
		return (NULL);
	res[0].content = content;
	res[0].next = NULL;
	return (res);
}
