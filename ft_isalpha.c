/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodwatan <kodwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:49:32 by kodwatan          #+#    #+#             */
/*   Updated: 2024/09/20 15:38:16 by kodwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef __linux__
# define TRUE_PARAM 1024
#else
# define TRUE_PARAM 1
#endif

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (TRUE_PARAM);
	else
		return (0);
}

// int	main(void)
// {
// 	char	c;
// 	int		answer;

// 	c = 'A';
// 	answer = isalpha(c);
// 	printf("\nisAlpha\ninput:%c,output:%d\n",c,answer);
// 	printf("ft_isAlpha\ninput:%c,output:%d\n\n",c,ft_isalpha(c));

// 	c = 'a';
// 	answer = isalpha(c);
// 	printf("isAlpha\ninput:%c,output:%d\n",c,answer);
// 	printf("ft_isAlpha\ninput:%c,output:%d\n\n",c,ft_isalpha(c));

// 	c = '1';
// 	answer = isalpha(c);
// 	printf("isAlpha\ninput:%c,output:%d\n",c,answer);
// 	printf("ft_isAlpha\ninput:%c,output:%d\n\n",c,ft_isalpha(c));

// }