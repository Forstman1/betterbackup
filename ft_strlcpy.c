/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:12:11 by sahafid           #+#    #+#             */
/*   Updated: 2021/11/07 11:21:52 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	len;
	char	*a;

	a = (char *)src;
	i = 0;
	len = 0;
	while (a[len] != '\0')
		len++;
	if (n == 0)
		return (len);
	else if (n > 0)
	{
		while (a[i] != '\0' && i < (n - 1))
		{
			dst[i] = a[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (len);
}
//int main()
//{
//    char str1[] = "start hello";
//    char str2[] = "chill";
//
//
//    printf("%zu\n", ft_strlcpy(str1, str2, 5));
//    printf("%s\n", str1);
//}
