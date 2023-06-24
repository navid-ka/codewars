/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_smallest_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 02:09:16 by bifrost           #+#    #+#             */
/*   Updated: 2023/06/24 02:10:18 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	find_smallest_int(const int *array, size_t len)
{
	size_t	i = -1;
	int		min = 2147483647;

	while (++i < len)
		if (array[i] < min)
			min = array[i];
	return (min);
}
