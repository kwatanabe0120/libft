/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodwatan <kodwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:35:57 by kodwatan          #+#    #+#             */
/*   Updated: 2024/10/17 21:07:29 by kodwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
// int main ()
// {
//     int date = 'a';
//     int date2 = 'A';
//     int date3 = '1';
//     int ft_result, real_result;

//     real_result = tolower(date);
//     ft_result = ft_tolower(date);

//     printf("real_result: %c\n", real_result);
//     printf("ft_result: %c\n", ft_result);

//     real_result = tolower(date2);
//     ft_result = ft_tolower(date2);
//     printf("real_result: %c\n", real_result);
//     printf("ft_result: %c\n", ft_result);

//     real_result = tolower(date3);
//     ft_result = ft_tolower(date3);

//     printf("real_result: %c\n", real_result);
//     printf("ft_result: %c\n", ft_result);
//     return (0);
// }