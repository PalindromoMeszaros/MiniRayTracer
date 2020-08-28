#include "../includes/miniRT.h"
#include "../includes/scene.h"

/*
**This loop asign pixels to background
*/

void    pixel_drawer(t_scene *scene, t_mlx *mlx)
{
    unsigned int	count_w;
    unsigned int	count_h;

    count_h = -1;
    while (++count_h < scene->y_res)
        {
            count_w = -1;
            while (++count_w < scene->x_res)
            {
                if (count_w % 3)
                    mlx->data[count_h * scene->x_res + count_w] = scene->rgb_color;
                else
                    mlx->data[count_h * scene->x_res + count_w] = scene->rgb_color;
            }
        }
}