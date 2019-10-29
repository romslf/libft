/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rolaforg <rolaforg@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/23 22:52:16 by romainlafor  #+#   ##    ##    #+#       */
/*   Updated: 2019/10/29 18:30:26 by rolaforg    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	x;
	char	*res;

	i = 0;
	j = 0;
	x = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (!(res = malloc(sizeof(char) * (i + j) + 1)))
		return (NULL);
	i = 0;
	while (s1[i])
		res[x++] = s1[i++];
	j = 0;
	while (s2[j])
		res[x++] = s2[j++];
	res[x] = '\0';
	return (res);
}
