/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rolaforg <rolaforg@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/04 17:42:43 by rolaforg     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/04 17:42:51 by rolaforg    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_len(int n)
{
	int		nb;
	size_t	len;

	nb = n;
	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb /= 10)
		len++;
	return (++len);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	nb;
	size_t	len;

	len = ft_len(n);
	if (!(res = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	res[len--] = '\0';
	nb = n;
	if (len == 0)
		res[0] = 48;
	if (nb < 0)
	{
		nb *= -1;
		res[0] = '-';
	}
	while (nb)
	{
		res[len--] = 48 + (nb % 10);
		nb /= 10;
	}
	return (res);
}
