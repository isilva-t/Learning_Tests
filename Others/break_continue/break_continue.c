/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   break_continue.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:41:48 by isilva-t          #+#    #+#             */
/*   Updated: 2024/02/10 13:42:02 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	auto char i = 47;
	while (++i < 58)
	{
		if (i == 53)
		{
			write(1, "-\n", 2);
			continue ;
		}
		write(1, &i, 1);
		write(1, "\n", 1);
	}
	i = 47;
	write(1, "\n", 1);
	while (++i < 58)
	{
		if (i == 53)
		{
			write(1, "x\n", 2);
			break ;
		}
		write(1, &i, 1);
		write(1, "\n", 1);
	}
	return (0);
}
