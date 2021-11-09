/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:15:39 by sahafid           #+#    #+#             */
/*   Updated: 2021/11/07 10:17:40 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*h;
	char	a;
	int		j;

	h = (char *)str;
	j = 0;
	a = (char) c;
	//if (str[0] == 0)
		//return (NULL);
	while (h[j])
		j++;
	while (j >= 0)
	{
		if (h[j] == a)
			return (&h[j]);
		j--;
	}
	return (0);
}
//int main(void)
//{
//	char o[] = "tripouille";
//	printf("%s\n", ft_strrchr(o, 't'));
//	//printf("%s\n", ft_strrchr(o, 't'));
//}
