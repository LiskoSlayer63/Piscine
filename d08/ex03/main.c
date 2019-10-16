/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 15:13:59 by mahola            #+#    #+#             */
/*   Updated: 2019/08/23 15:57:28 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>

int		main(void)
{
	int num;

	num = -5;
	ABS(num);
	printf("%d\n", num);
	num = -50;
	ABS(num);
	printf("%d\n", num);
	num = 5;
	ABS(num);
	printf("%d\n", num);
	return (0);
}
