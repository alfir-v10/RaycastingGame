

#ifndef CUB_H
# define CUB_H
# define DESTROY_NOTIFY 17
# define KEY_PRESS 2
# define KEY_RELEASE 3
# define COLL_OFFSET 2
# define ESC_KEY	53
# define W_KEY		13
# define A_KEY		0
# define S_KEY		1
# define D_KEY		2
# define LEFT_KEY	123
# define RIGHT_KEY	124

# include <stdio.h>
# include <mlx.h>
# include <stdlib.h>
# include <libft.h>
# include <get_next_line.h>
# include <fcntl.h>
# include <math.h>

typedef	struct		s_image
{
	void	*img;
	char	*addr;
	int		*buff;
	int		bits_per_pixel;
	int		size_line;
	int		endian;
}					t_image;

typedef	struct		s_pair
{
	int	x;
	int	y;
}					t_pair;

typedef struct		s_sprite
{
	t_pair	start;
	t_pair	end;
	int		width;
	int		height;
	int		win;
	double	x;
	double	y;
	double	inver;
	double	x_trans;
	double	y_trans;
}					t_sprite;

typedef	struct		s_raycast
{
	int		x;
	double	x_rdir;
	double	y_rdir;
	double	x_cam;
	double	x_sdist;
	double	y_sdist;
	double	x_ddist;
	double	y_ddist;
	double	wall_dist;
	int		hit;
	int		side;
	double	x_wall;
	int		x_step;
	int		y_step;
}					t_raycast;

typedef	struct		s_texture
{
	t_image		*img;
	char		*path;
	int			x;
	int			y;
	int			width;
	int			height;
	double		step;
	double		pos;
}					t_texture;

typedef struct		s_drawing
{
	t_sprite	sprite;
	int			start;
	int			end;
	int			height;
	int			floor_color;
	int			ceil_color;
	double		*z_buf;
}					t_drawing;

typedef	struct		s_spair
{
	double	x_spr;
	double	y_spr;
}					t_spair;

typedef	struct		s_cub
{
	char		**map;
	int			flag_map;
	int			keys[125];
	int			mcols;
	int			mrows;
	int			map_true;
	int			flag_color;
	int			f_color_save;
	int			c_color_save;
	int			rows;
	int			flag_player;
	void		*ptr_mlx;
	int			w_win;
	int			h_win;
	void		*ptr_win;
	t_pair		imap;
	double		x_dir;
	double		y_dir;
	double		x_plane;
	double		y_plane;
	double		x_pos;
	double		y_pos;
	double		move_speed;
	double		rotate_speed;
	t_texture	tex[5];
	t_drawing	draw;
	t_raycast	ray;
	t_spair		*sprite;
	int			spr_num;
	int			*spr_ord;
	double		*spr_dst;
	unsigned	red;
	unsigned	green;
	unsigned	blue;
	int			flag[8];
	t_image		img;
}					t_cub;

int					ft_key_press(int code, t_cub *cub);
int					ft_key_release(int code, t_cub *cub);
int					ft_destroy_notify(t_cub *cub);
int					ft_keyboard(t_cub *cub);
int					ft_error(int code);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_endwith(char const *str, char const *end);
int					ft_setchr(char c, char const *set);
int					ft_is_empty_line(char *line);
int					ft_parser(t_cub *cub, char *path);
int					ft_flag_check(t_cub *cub);
int					ft_open_file(char *path);
int					ft_isnum(char *line);
int					ft_save(t_cub *cub);
int					ft_len_color(char *line);
int					ft_color_convert(int red, int green, int blue);
int					ft_inrange(int nbr, int x, int y);
int					ft_strchr_count(char c, char *line);
int					ft_compare(char **lines);
int					ft_is_file(char *path);
int					ft_is_fmt(char *line, char *fmt);
int					ft_count_len(char *line);
int					ft_check_params(char *line, t_cub *cub);
int					ft_init_map(t_cub *cub);
int					ft_valid_pos(t_cub *cub, int m, int n);
int					ft_line_valid(char *line);
int					ft_choose_texture(t_cub *cub);
int					ft_create_bmp(char *path);
int					ft_free2d(char **line);
void				ft_set_display(t_cub *cub);
void				ft_set_texture(t_cub *cub);
void				ft_init(t_cub *cub, char *path);
void				ft_make_map(char *line, t_cub *cub);
void				ft_set_player_param(t_cub *cub, int m, int n);
void				ft_raycast_wall(t_cub *cub);
void				ft_draw(t_cub *cub, int x, int i);
void				ft_raycast_sprite(t_cub *cub);
void				ft_map_read(char *line, t_cub *cub);
void				ft_map_valid(t_cub *cub);
void				ft_config_read(char *line, t_cub *cub);
void				ft_color_read(char *line, t_cub *cub);
void				ft_config_parser(char **lines, t_cub *cub);
void				my_mlx_pixel_put(t_image *img, int x, int y, int color);
void				ft_check_argv(int argc, char *path, char *save);
void				ft_set_speed(t_cub *cub);
void				ft_color_parser(char *line, t_cub *cub);
void				ft_color_save(char **lines, t_cub *cub, int flag_color);
void				ft_resolution_parser(char **lines, t_cub *cub);
void				ft_save_path(char *line, char *path, t_cub *cub);
void				ft_map_fill(char *line, t_cub *cub);
void				ft_set_sprite_param(t_cub *cub, int m, int n);
void				ft_set_position_dir(t_cub *cub, double xd, double yd);
void				ft_set_position_plane(t_cub *cub, double xp, double yp);
void				ft_calculate_step_and_side(t_cub *cub);
void				ft_perform_dda(t_cub *cub);
void				ft_calculate_wall_dist(t_cub *cub);
void				ft_calculate_height(t_cub *cub);
void				ft_calculate_wall_side_x(t_cub *cub, int i);
void				ft_projection(t_cub *cub);
void				ft_drawing_sprite(t_cub *cub);
void				ft_calculate_sprite_y(t_cub *cub, int y);
void				ft_calculate_sprite_x(t_cub *cub, int x);
void				ft_translation(t_cub *cub, int i);
void				ft_calculate_sprite(t_cub *cub);
void				ft_sprite_sorted(int *spr_ord, double *spr_dist,
						int spr_num);
void				ft_write_data(int fd, t_cub *cub);
void				ft_write_winheight(int fd, t_cub *cub);
void				ft_write_header(int fd, t_cub *cub);
void				ft_turn(t_cub *cub, double speed);
void				ft_move(t_cub *cub, double x, double y);
char				*ft_clear_line(char *line);
char				*ft_get_color(char *line);
double				ft_pythagoras(double x, double y);
#endif
