#include <stdlib.h>
#include <zephyr/kernel.h>
#include "draw_left_image.h"

LV_IMG_DECLARE(left_image);

void draw_left_image(lv_obj_t *canvas) {
    lv_obj_t *art = lv_img_create(canvas);

    lv_img_set_src(art, &left_image);

    lv_obj_align(art, LV_ALIGN_TOP_LEFT, 36, 0);
}

