/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodwatan <kodwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:49:37 by kodwatan          #+#    #+#             */
/*   Updated: 2024/09/20 16:18:58 by kodwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>


int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (2048);
	}
	else
	{
		return (0);
	}
}
int	main()
{
	char	c;

	c = '1';
	printf("\nisdigit\ntest char: %c\nanswer: %d\n", c , isdigit(c));
	printf("\nft_isdigit\ntest char: %c\nanswer: %d\n", c , ft_isdigit(c));

}