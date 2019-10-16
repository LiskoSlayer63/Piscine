/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 19:45:18 by mahola            #+#    #+#             */
/*   Updated: 2019/08/29 21:06:13 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_H
# define FT_DISPLAY_H

# include <fcntl.h>
# include <unistd.h>

# define BUF_SIZE 28

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_display_file(char *filename);

#endif
