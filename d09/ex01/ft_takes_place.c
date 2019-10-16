/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 17:43:36 by mahola            #+#    #+#             */
/*   Updated: 2019/08/22 18:35:15 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour > 24 || hour < 0)
		return ;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 24 || hour == 0)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
	else if (hour == 12)
		printf("12.00 P.M. AND 1.00 P.M.\n");
	else if (hour > 12)
	{
		hour -= 12;
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour, hour + 1);
	}
	else
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
}
