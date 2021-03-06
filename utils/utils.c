/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 11:43:47 by tbouma            #+#    #+#             */
/*   Updated: 2022/06/14 16:14:07 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
#include "../includes/libft/libft.h"

void	error_mgs(char *str)
{
	ft_putstr_fd(str, 2);
	write(2, "\n", 1);
	exit(1);
}

void	free_map(t_vars *vars)
{
	int	i;

	i = vars->sl->map_lines - 1;
	while (i >= 0)
	{
		free(vars->sl->map[i]);
		i--;
	}
	free(vars->sl->map);
}

void	player_won(t_vars *vars)
{
	mlx_set_instance_depth(vars->sl->her_img->instances, -2);
	ft_putstr_fd("Player won!\n", 1);
}
