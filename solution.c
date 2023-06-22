/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 02:30:17 by bifrost           #+#    #+#             */
/*   Updated: 2023/06/22 02:56:47 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 passed in ends with the 2nd argument (also a string).
Examples:
solution('abc', 'bc') // returns true
solution('abc', 'd') // returns false
*/

#include <stdbool.h>
#include <string.h>

bool solution(const char *str, const char *end)
{
  size_t i = 0;
  while (i < strlen(end))
  {
	if (end[strlen(end - 1 -i)] == str[strlen(str - 1 -i)])
      return true;
	  i++;
  }

  return false;
}
