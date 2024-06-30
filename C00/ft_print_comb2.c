/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hand <fel-hand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:15:02 by fel-hand          #+#    #+#             */
/*   Updated: 2024/06/27 13:24:42 by fel-hand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

 void ft_print_comb2(void)
{
	char a = '0';
	char b = '0';

	while(a <= 98)
	{
		while(b <= 99)
		{
			ft_putchar(a / 10 + '0');
			ft-putchar(b / 10 + '0');
			a++;
		}
		b++;
	}
}

int main()
{
	ft_print_comb2();
	return (0);
}
