/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 22:17:59 by mahola            #+#    #+#             */
/*   Updated: 2019/08/29 21:04:39 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# include <fcntl.h>
# include <unistd.h>
# include <errno.h>

# define BUF_SIZE 28

char	*g_filename;

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_display_file(char *filename);
void	ft_read(int file, char *filename);
void	ft_error(int err, char *file);
void	ft_puterrchar(char c);
void	ft_puterrstr(char *str);

#endif
