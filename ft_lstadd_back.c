/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstadd_back.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rolaforg <rolaforg@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/31 18:05:34 by rolaforg     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/31 18:23:05 by rolaforg    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	size_t	i;

	i = 0;
	if (alst[0] != NULL)
	{
		while (alst[i]->next)
		{
			alst[i] = alst[i]->next;
		}
		alst[i]->next = new;
	}
	else
		alst[0] = new;
}
