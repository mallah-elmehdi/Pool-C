/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 19:54:17 by emallah           #+#    #+#             */
/*   Updated: 2019/04/17 02:42:45 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	a_condition(int a, int d, long pow, char c)
{
	while (a > 0)
	{
		a = (d / pow);
		pow = pow * 10;
		if (a == 0)
		{
			c = c + (d / (pow / 100));
			ft_putchar(c);
			d = d - ((d / (pow / 100)) * (pow / 100));
			pow = 10;
			a = 1;
		}
		if (d < 10)
		{
			a = 0;
			c = '0' + d;
			ft_putchar(c);
		}
		c = '0';
	}
}

void	ft_putnbr(int nr)
{
	int		d;
	int		a;
	long	pow;
	char	c;

	pow = 10;
	c = '0';
	a = 1;
	d = nr;
	if (d < 0)
	{
		d = d * (-1);
		ft_putchar('-');
	}
	a_condition(a, d, pow, c);
}
