/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hand <fel-hand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:36:41 by fel-hand          #+#    #+#             */
/*   Updated: 2024/06/29 19:10:08 by fel-hand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void _put(char a)
{
	ft_putchar(a / 10 + 48);
	ft_Putchar(a % 10 + 48);
}
void ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while(a <= 99)
	{
		a = b + 1;
		while(b < 99)
		{
			_put(a);
			_put(b);
			b++;
		}
		a++;
	}
}

int main()
{
	ft_print_comb2();
	return (0);
}
