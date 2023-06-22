/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_upper_case.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 01:49:20 by bifrost           #+#    #+#             */
/*   Updated: 2023/06/22 01:53:36 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*make_upper_case(char *string)
{
	int	i = -1;

	while (string[++i] != '\0')
		if (string[i] >= 'a' && string[i] <= 'z')
			string[i] -= 32;
	return (string);
}
