
#include <cub.h>

int	main(int argc, char **argv)
{
	t_cub cub;

	ft_bzero(&cub, sizeof(t_cub));
	ft_check_argv(argc, argv[2], argv[1]);
	ft_parser(&cub, argv[1]);
	if (!cub.mrows)
		ft_error(6);
	ft_init(&cub, argv[1]);
	if (argc == 3 && ft_strcmp(argv[2], "--save") == 0)
		ft_save(&cub);
	cub.ptr_mlx = mlx_init();
	cub.ptr_win = mlx_new_window(cub.ptr_mlx, cub.w_win, cub.h_win, "cub3D");
	ft_set_speed(&cub);
	ft_set_texture(&cub);
	ft_set_display(&cub);
	mlx_hook(cub.ptr_win, KEY_PRESS, 0, &ft_key_press, &cub);
	mlx_hook(cub.ptr_win, KEY_RELEASE, 0, &ft_key_release, &cub);
	mlx_hook(cub.ptr_win, DESTROY_NOTIFY, 0, &ft_destroy_notify, &cub);
	mlx_loop_hook(cub.ptr_mlx, &ft_keyboard, &cub);
	mlx_loop(cub.ptr_mlx);
	ft_free2d(cub.map);
	return (0);
}
