/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_freetab.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rolaforg <rolaforg@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/06 13:09:12 by rolaforg     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/06 13:17:17 by rolaforg    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_freetab(char **str, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		free(str[i]);
	free(str);
}
