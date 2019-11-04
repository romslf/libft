/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: romainlaforgue <romainlaforgue@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/04 14:33:57 by romainlafor  #+#   ##    ##    #+#       */
/*   Updated: 2019/11/04 15:22:18 by romainlafor ###    #+. /#+    ###.fr     */
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
	int		nb;
	size_t	len;

	if (!(n)) return ("0");
	nb = n;
	len = ft_len(nb);
	if (!(res = malloc(sizeof(char) * (len + 1)))) return ("0");
	res[len--] = '\0';
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