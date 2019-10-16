/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 17:52:49 by mahola            #+#    #+#             */
/*   Updated: 2019/08/20 20:46:41 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	if (argc > 1)
	{
		while (--argc > 0)
		{
			i = 0;
			while (argv[argc][i] != '\0')
			{
				ft_putchar(argv[argc][i]);
				i++;
			}
			ft_putchar('\n');
		}
	}
	return (0);
}
