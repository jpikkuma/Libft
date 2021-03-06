/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpikkuma <jpikkuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 22:12:31 by jpikkuma          #+#    #+#             */
/*   Updated: 2021/11/14 18:04:05 by jpikkuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (nb <= 0)
		return (0);
	else
	{
		while (j < nb)
		{
			j = j + 2 * i - 1;
			++i;
		}
	}
	if (j == nb)
		return (i - 1);
	else
		return (0);
}
