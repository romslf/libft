/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rolaforg <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 13:42:29 by rolaforg     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/11 16:51:32 by rolaforg    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int srclen;
	int tflen;

	i = 0;
	srclen = ft_strlen((char *)haystack);
	tflen = ft_strlen((char *)needle);
	while (i <= (srclen - tflen))
	{
		if (ft_strncmp(haystack + i, needle, tflen) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
