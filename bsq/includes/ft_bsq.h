/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 16:19:26 by mahola            #+#    #+#             */
/*   Updated: 2019/09/04 23:26:56 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
void	ft_read(int argc, char **argv);
void	ft_solve(char *str);
void	ft_replace(int **arr, int max_x, int max_y, int max);
void	ft_check(int **arr);
void	ft_set(int **arr);
void	ft_find(int **arr);
void	ft_print(int **arr);
void	ft_put_globals(char *str);
void	ft_checksolve(char *str);
void	ft_strcpy(char **s1, char *s2, int total);
void	ft_read_help(int pipe);
void	ft_free(int **arr);

int		ft_errorcheck(char *str);
int		ft_errorsize(char *str);
int		ft_errorchars(char *str);
int		ft_min(int i1, int i2, int i3);

char	*ft_read_input(int pipe);

int		g_width;
int		g_height;
char	*g_chars;

#endif
