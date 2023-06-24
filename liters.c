/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liters.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 02:52:04 by bifrost           #+#    #+#             */
/*   Updated: 2023/06/24 02:54:01 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Nathan loves cycling.
//Because Nathan knows it is important to stay hydrated,
//he drinks 0.5 litres of water per hour of cycling.
//You get given the time in hours and you need to return the number of litres 
//Nathan will drink, rounded to the smallest value.
//For example:
//time = 3 ----> litres = 1
//time = 6.7---> litres = 3
//time = 11.8--> litres = 5

#include <math.h>

int	liters(double time)
{
	return (floor(time / 2));
}
