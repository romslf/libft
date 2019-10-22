/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rolaforg <rolaforg@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/16 14:23:00 by rolaforg     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 13:52:42 by rolaforg    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void		*d;
	const void	*s;

	d = NULL;
	s = NULL;
	d = ft_memcpy(d, dst, ft_strlen((char *)dst));
	s = ft_memcpy((void *)s, src, ft_strlen((char *)src));
	dst = ft_memcpy(dst, s, len);
	return (d);
}
