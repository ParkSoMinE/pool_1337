/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hand <fel-hand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 18:39:59 by fel-hand          #+#    #+#             */
/*   Updated: 2024/06/28 22:54:19 by fel-hand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_put(int n)
{
	ft_putchar(n / 10 + 48);
	ft_putchar(n % 10 + 48);
}
void ft_print_comb2(void)
{
	char a = 0, b;
while(a < 99)
{
	b = a + 1;
	while(b <= 99)
	{
	ft_put(a);
	ft_put(b);
	write(1, ' ', 1);
	if ()
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
