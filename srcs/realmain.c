/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinfeld <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 14:23:35 by jinfeld           #+#    #+#             */
/*   Updated: 2017/11/01 15:29:20 by jinfeld          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	error(char *str)
{
	ft_printf("%s\n", str);
	exit(EXIT_FAILURE);
}

void	init_env(t_env *env)
{
	env->mlx = mlx_init();
	
}
int		main(int argc, char **argv)
{
	t_env	env;
	init_env(frac_type(&env);
	if (argc != 2)
		error("Invalid number of argumentsi\nUsage: \"./fractol julia\"");
	defaultmap(&map, 'a');
	dims(argv[1], &(map.width), &(map.height));
	getmatrix(argv[1], &map);
	map.mlx = mlx_init();
	map.win = mlx_new_window(map.mlx, map.ww, map.wh, "mlx 42");
	mlx_key_hook(map.win, &keyz, &map);
	mlx_loop_hook(map.mlx, &drawgrid, &map);
	mlx_loop(map.mlx);
	return (0);
}
