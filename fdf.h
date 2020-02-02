//
// Created by Trebor Nichelle on 23/01/2020.
//

#ifndef FDF_H
#define FDF_H

#include "libft/libft.h"

typedef struct s_fdf
{
	int width;
	int height;
	int **z_matrix;

	void *mlx_ptr;
	void *win_ptr;
}			fdf;

#endif //FDF_H
