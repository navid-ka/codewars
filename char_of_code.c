/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_of_code.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 01:24:43 by bifrost           #+#    #+#             */
/*   Updated: 2023/06/22 01:27:14 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	char_of_code(unsigned int charcode)
{
	if (charcode >= 32 && charcode <= 127)
		return ((char)charcode);
	return (0);
}
