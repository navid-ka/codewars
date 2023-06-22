/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_upper_case.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 01:49:20 by bifrost           #+#    #+#             */
/*   Updated: 2023/06/23 01:34:52 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iso646.h>

char	*make_upper_case(char *string)
{
	int	i = -1;

	while (string[++i] not_eq '\0')
		if (string[i] >= 'a' and string[i] <= 'z')
			string[i] -= 32;
	return (string);
}
