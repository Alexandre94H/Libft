/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:22:59 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/10 15:36:03 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(int c)
{
	int c1;

	c1 = c % 10;
	if (c >= 40 && c <= 176 && c1 >= 0 && c1 <= 7)
		return (1);
	return (0);
}
