/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodwatan <kodwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:49:23 by kodwatan          #+#    #+#             */
/*   Updated: 2024/09/20 16:26:46 by kodwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef __linux__
# define TRUE_PARAM 8
#else
# define TRUE_PARAM 1
#endif

int	ft_isalnum(int c)
{
	if ((ft_isdigit(c) != 0) || (ft_isalpha(c) != 0))
		return (TRUE_PARAM);
	else
		return (0);
}

// int	main()
// {
// 	int	c;

// 	c = '2';
// 	printf("isalnum\ntest: %c\nresult:%d\n", c , isalnum(c));
// 	printf("\nft_isalnum\ntest: %c\nresult:%d\n", c , ft_isalnum(c));

// 	c = '*';
// 	printf("\nisalnum\ntest: %c\nresult:%d\n", c , isalnum(c));
// 	printf("\nft_isalnum\ntest: %c\nresult:%d\n", c , ft_isalnum(c));

// }
