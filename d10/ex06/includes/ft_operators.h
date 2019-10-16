/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operators.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 19:07:50 by mahola            #+#    #+#             */
/*   Updated: 2019/08/26 20:17:38 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OPERATORS_H
# define FT_OPERATORS_H

# define ERROR(reason) "Stop : " reason " by zero"

int	ft_add(int n1, int n2);
int	ft_sub(int n1, int n2);
int	ft_mul(int n1, int n2);
int	ft_div(int n1, int n2);
int ft_mod(int n1, int n2);

int (*g_ft_op[5])(int, int) = { &ft_add, &ft_sub, &ft_mul, &ft_div, &ft_mod };

#endif
