/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rolaforg <rolaforg@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/23 23:19:09 by romainlafor  #+#   ##    ##    #+#       */
/*   Updated: 2019/11/07 16:58:44 by rolaforg    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	x;
	unsigned int	i;
	int				m;
	char			*str;

	i = 0;
	x = start;
	m = len;
	if (!(s))
		return (0);
	if (ft_strlen(s + start) < len)
		m = ft_strlen(s + start);
	if (start > (unsigned int)ft_strlen(s))
		return (str = ft_calloc(1, sizeof(char)));
	if (!(str = (char *)malloc((m + 1) * sizeof(char))))
		return (0);
	while (i < (unsigned int)m)
	{
		str[i] = s[x];
		x++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
