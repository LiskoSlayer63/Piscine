/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 19:32:45 by mahola            #+#    #+#             */
/*   Updated: 2019/09/01 21:34:56 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
void	ft_row(int x, char *chars, char **out, int *j);
void	ft_append_str(char **str, char c);
char	*ft_read_stdin(int *width, int *height);
char	*rush00(int x, int y);
char	*rush01(int x, int y);
char	*rush02(int x, int y);
char	*rush03(int x, int y);
char	*rush04(int x, int y);
int		ft_strcmp(char *s1, char *s2);
int		*ft_determine(char *lines, int width, int height);
int		ft_print(int *rush, int width, int height);

#endif
