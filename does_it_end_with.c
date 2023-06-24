/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 02:30:17 by bifrost           #+#    #+#             */
/*   Updated: 2023/06/24 02:26:50 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Examples:
//solution('abc', 'bc') // returns true
//solution('abc', 'd') // returns false
#include <stdbool.h>
#include <string.h>

bool	does_it_end_with(const char *string, const char *ending)
{
	bool ends = false;

	if (strlen(ending) == 0)
		return (true);
	if (strlen(ending) > strlen(string))
		return (false);
	for (size_t i = 0; i < strlen(ending); i++)
	{
		if (string[strlen(string) -1 -i] == ending[strlen(ending) -1 -i])
			ends = true;
		else
			return (ends = false);
	}
	return (ends);
}
