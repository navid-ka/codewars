/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   odd_or_even.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 20:06:01 by bifrost           #+#    #+#             */
/*   Updated: 2023/06/24 01:45:40 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

const char	*odd_or_even(const int *v, size_t sz)
{
	int sum = 0;
	size_t i = 0;

	while (i < sz)
		sum += v[i++];
	if (sum % 2 == 0)
		return ("even");
	else
		return ("odd");
}