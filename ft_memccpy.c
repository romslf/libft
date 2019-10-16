/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rolaforg <rolaforg@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/16 15:07:46 by rolaforg     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 16:18:36 by rolaforg    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*srctmp;
	unsigned char	*dsttmp;

	if (!dst || !src)
		return (NULL);
	i = 0;
	srctmp = (unsigned char *)src;
	dsttmp = (unsigned char *)dst;
	while (n--)
	{
		dsttmp[i] = srctmp[i];
		if (srctmp[i] == (unsigned char)c)
			return (dsttmp + i + 1);
		i++;
	}
	return (NULL);
}
