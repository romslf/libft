/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rolaforg <rolaforg@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 13:42:29 by rolaforg     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/06 13:52:52 by rolaforg    ###    #+. /#+    ###.fr     */
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
	srclen = ft_strlen(haystack);
	tflen = ft_strlen(needle);
	while (i <= (srclen - tflen))
	{
		if (ft_strncmp(haystack + i, needle, tflen) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
